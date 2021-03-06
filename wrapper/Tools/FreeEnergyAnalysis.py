
####################################################################################################
#                                                                                                  #
#   Script for the analysis of Free energy simulations using MBAR                                  #
#                                                                                                  #
#   author: Antonia Mey <antonia.mey@ed.ac.uk>                                                     #
#                                                                                                  #
####################################################################################################

try:
    import numpy as np
except ImportError:
    raise ImportError('Numpy is not installed. Please install numpy in order to use MBAR for your free energy analysis.')
try:
    from pymbar import MBAR
    from pymbar import timeseries
except ImportError:
    raise ImportError('pymbar is not installed. Please install pymbar in order to use MBAR for your free energy '
                      'analysis.')

class FreeEnergies(object):
    r"""This class contains all the different pmf information
    The constructor expects subsampled MBAR and TI compatible data.
    Parameters
    ----------

    u_kln : ndarray(shape=(therm_states, therm_states, nsamples), dtype=float)
        reduced perturbed energies used for MBAR estimates
    N_K : ndarray(shape=(therm_states), dtype=int)
        number of samples per thermodynamic state
    lambda_array : ndarray(shape=(therm_states), dtype=float)
        lambda thermodynamic values
    gradients_kn : ndarray(shape=(therm_state, nsamples), dtype=float)
        reduced gradients
    """

    def __init__(self, u_kln=None, N_k=None, lambda_array=None, gradients_kn=None):
        r"""The data passed here is already subsampled"""

        self._u_kln = u_kln
        self._N_k = N_k
        self._lambda_array = lambda_array
        self._gradients_kn = gradients_kn

        #initialise results containers
        self._deltaF_mbar = None
        self._deltaF_ti = None
        self._dDeltaF_mbar = None
        self._f_k = None
        self._pmf_ti = None

    def run_ti(self, cubic_spline=False):
        r"""Runs Thermodynamic integration free energy estimate
        Parameters
        ----------

        cubic_spline : bool
            Use cubic spline estimation instead of trapezium rule.
        """

        if cubic_spline:
            NotImplementedError("Cubic Spline TI has not been implemented yet")
        else:
            means = np.mean(self._gradients_kn, axis=1)
            self._pmf_ti = np.zeros(shape=(self._lambda_array.shape[0], 2))
            self._pmf_ti[:, 0] = self._lambda_array
            for i in range(1, self._lambda_array.shape[0]):
                self._pmf_ti[i-1][1] = np.trapz(means[0:i], self._lambda_array[0:i])
            self._pmf_ti[-1][1] = np.trapz(means, self._lambda_array)
            self._deltaF_ti = np.trapz(means, self._lambda_array)


    def run_mbar(self):
        r"""Runs MBAR free energy estimate """
        MBAR_obj = MBAR(self._u_kln, self._N_k, verbose=True)
        self._f_k = MBAR_obj.f_k
        (deltaF_ij, dDeltaF_ij, theta_ij) = MBAR_obj.getFreeEnergyDifferences()
        self._deltaF_mbar = deltaF_ij[0, self._lambda_array.shape[0]-1]
        self._dDeltaF_mbar = dDeltaF_ij[0, self._lambda_array.shape[0]-1]
        self._pmf_mbar = np.zeros(shape=(self._lambda_array.shape[0], 2))
        self._pmf_mbar[:, 0] = self._lambda_array
        self._pmf_mbar[:, 1] = self._f_k

    @property
    def pmf_ti(self):
        return self._pmf_ti

    @property
    def pmf_mbar(self):
        return self._pmf_mbar

    @property
    def deltaF_ti(self):
        return self._deltaF_ti

    @property
    def deltaF_mbar(self):
        return self._deltaF_mbar

    @property
    def errorF_mbar(self):
        return self._dDeltaF_mbar

class SubSample(object):
    r"""This class subsamples data based on the timeseries analysis or percentage of data ready for pmf use
    Parameters
    ----------
    gradients_kn : ndarray(shape=(therm_state, nsamples), dtype=float)
        reduced gradients
    energies : ndarray(shape=(therm_state, nsamples), trype=float)
        potential energies used to find statisitical inefficiency
    u_kln : ndarray(shape=(therm_states, therm_states, nsamples), dtype=float)
        reduced perturbed energies used for MBAR estimates
    N_K : ndarray(shape=(therm_states), dtype=int)
        number of samples per thermodynamic state
    lambda_array : ndarray(shape=(therm_states), dtype=float)
        lambda thermodynamic values
    percentage : int [0,100]
        percentage of the data that should be discarded from the beginning of the simulation
    subsample : string
        string idenfier for subsampling method, default='timeseries' from timeseries module in MBAR
    """

    def __init__(self, gradients_kn, energies, u_kln, N_k, percentage=100, subsample='timeseries'):
        self._gradients_kn = gradients_kn
        self._N_k = N_k
        self._energies_kn = energies
        self._u_kln = u_kln
        self._subsampled_u_kln = None
        self._subsampled_N_k_energies = None
        self._subsampled_N_k_gradients = None
        self._subsampled_grad_kn = None

        if N_k.shape[0]!=u_kln.shape[0]:
            RuntimeError("The number of thermodynamic states must be the same in u_kln and N_k!"
                         "u_kln has size %d and N_k has size %d" %(u_kln.shape[0], N_k.shape[0]))
        self.subsample_method = subsample
        self.percentage = percentage
        if percentage <0.0:
            RuntimeError("You must provide a percentage between 0 and 100")
        elif percentage>100.0:
            RuntimeError("You must provide a percentage between 0 and 100")


    def subsample_gradients(self):
        if self.subsample_method != 'timeseries':
            print("We are only eliminating samples from the beginning of the data and are still working with highly"
                  " correlated data!")
            if self.percentage == 100:
                RuntimeWarning("You are not subsampling your data according to the statistical inefficiency nor are"
                               "you discarding initial data. Please set percentage to another value than 100!")
            percentage_removal = self._N_k*(1-self.percentage/100.0)
            self._subsampled_N_k_gradients = self._N_k-percentage_removal
            N_max = np.max(self._subsampled_N_k_gradients)
            self._subsampled_grad_kn = np.zeros(shape=(self._N_k.shape[0], N_max))
            for p in range(percentage_removal.shape[0]):
                self._subsampled_grad_kn[p,:] = self._gradients_kn[p,percentage_removal[p]:]
            if N_max <=100:
                RuntimeWarning("You have reduced your data to less than 100 samples, the results from these might not "
                               "be trustworthy. ")
        else:
            print("We are doing a timeseries analysis using the timeseries analysis module in pymbar and will subsample"
                  " according to that.")
            #first we compute statistical inefficiency
            g_k = np.zeros(shape=(self._gradients_kn.shape[0]))
            self._subsampled_N_k_gradients = np.zeros(shape=(self._gradients_kn.shape[0]))
            for i in range(g_k.shape[0]):
                g_k[i] = timeseries.statisticalInefficiency(self._gradients_kn[i,:])
            g = np.max(g_k)
            #now we need to figure out what the indices in the data are for subsampling
            indices_k = []
            for i in range(g_k.shape[0]):
                indices_k.append(timeseries.subsampleCorrelatedData(self._gradients_kn[i,:], g=g))
                self._subsampled_N_k_gradients[i]=len(indices_k[i])
            N_max = np.max(self._subsampled_N_k_gradients)
            if N_max <=100:
                RuntimeWarning("You have reduced your data to less than 100 samples, the results from these might not "
                               "be trustworthy. ")
            self._subsampled_grad_kn = np.zeros([self._gradients_kn.shape[0], N_max], np.float64)
            for k in range(self._gradients_kn.shape[0]):
                self._subsampled_grad_kn[k, :] = self._gradients_kn[k, indices_k[k]]

    def subsample_energies(self):
        if self.subsample_method!='timeseries':
            print("We are only eliminating samples from the beginning of the data and are still working with highly"
                  " correlated data!")

            if self.percentage ==100:
                RuntimeWarning("You are not subsampling your data according to the statistical inefficiency nor are"
                               "you discarding initial data. Please set percentage to another value than 100!")

            percentage_removal = self._N_k*(1-self.percentage/100.0)
            self._subsampled_N_k_energies = self._N_k-percentage_removal
            N_max = np.max(self._subsampled_N_k_energies)
            self._subsampled_u_kln = np.zeros(shape=(self._N_k.shape[0], self._N_k.shape[0], N_max))
            for i in range(percentage_removal.shape[0]):
                for j in range(percentage_removal.shape[0]):
                    self._subsampled_u_kln[i,j,:] = self._u_kln[i,j,percentage_removal[j]:]
            if N_max <=100:
                RuntimeWarning("You have reduced your data to less than 100 samples, the results from these might not "
                               "be trustworthy. ")
        else:
            print("We are doing a timeseries analysis using the timeseries analysis module in pymbar and will subsample"
                  " according to that.")

            #first we compute statistical inefficiency
            g_k = np.zeros(shape=(self._energies_kn.shape[0]))
            for i in range(g_k.shape[0]):
                g_k[i] = timeseries.statisticalInefficiency(self._energies_kn[i,:])
            g = np.max(g_k)
            #now we need to figure out what the indices in the data are for subsampling
            indices_k = []
            self._subsampled_N_k_energies = np.zeros(shape=(self._gradients_kn.shape[0]))
            for i in range(g_k.shape[0]):
                indices_k.append(timeseries.subsampleCorrelatedData(self._energies_kn[i,:], g=g))
                self._subsampled_N_k_energies[i]=len(indices_k[i])
            #self._subsampled_N_k_energies = (np.ceil(self._N_k / g)).astype(int)
            N_max = np.max(self._subsampled_N_k_energies)
            if N_max <=100:
                RuntimeWarning("You have reduced your data to less than 100 samples, the results from these might not "
                               "be trustworthy. ")
            self._subsampled_u_kln = np.zeros([self._gradients_kn.shape[0],self._gradients_kn.shape[0], N_max], np.float64)
            for k in range(self._gradients_kn.shape[0]):
                self._subsampled_u_kln[k,:,:] = self._u_kln[k,:,indices_k[k]].transpose()

    @property
    def u_kln(self):
        if self._subsampled_u_kln is None:
            self.subsample_energies()
        return self._subsampled_u_kln
    @property
    def gradients_kn(self):
        if self._subsampled_grad_kn is None:
            self.subsample_gradients()
        return  self._subsampled_grad_kn
    @property
    def N_k_energies(self):
        return self._subsampled_N_k_energies
    @property
    def N_k_gradients(self):
        return self._subsampled_N_k_gradients