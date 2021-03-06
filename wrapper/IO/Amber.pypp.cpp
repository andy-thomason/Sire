// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Amber.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/findexe.h"

#include "SireBase/process.h"

#include "SireBase/tempdir.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/internalff.h"

#include "SireMM/ljparameter.h"

#include "SireMaths/maths.h"

#include "SireMol/amberparameters.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcutting.h"

#include "SireMol/atomeditor.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/cgatomidx.h"

#include "SireMol/connectivity.h"

#include "SireMol/element.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/reseditor.h"

#include "SireMol/residuecutting.h"

#include "SireMol/selector.hpp"

#include "SireMove/flexibility.h"

#include "SireMove/internalmove.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "SireVol/periodicbox.h"

#include "amber.h"

#include <QFile>

#include <QHash>

#include <QTextStream>

#include "amber.h"

SireIO::Amber __copy__(const SireIO::Amber &other){ return SireIO::Amber(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireIO::Amber&){ return "SireIO::Amber";}

void register_Amber_class(){

    { //::SireIO::Amber
        typedef bp::class_< SireIO::Amber > Amber_exposer_t;
        Amber_exposer_t Amber_exposer = Amber_exposer_t( "Amber", bp::init< >() );
        bp::scope Amber_scope( Amber_exposer );
        Amber_exposer.def( bp::init< SireIO::Amber const & >(( bp::arg("other") )) );
        { //::SireIO::Amber::coulomb14Factor
        
            typedef double ( ::SireIO::Amber::*coulomb14Factor_function_type)(  ) const;
            coulomb14Factor_function_type coulomb14Factor_function_value( &::SireIO::Amber::coulomb14Factor );
            
            Amber_exposer.def( 
                "coulomb14Factor"
                , coulomb14Factor_function_value );
        
        }
        { //::SireIO::Amber::lj14Factor
        
            typedef double ( ::SireIO::Amber::*lj14Factor_function_type)(  ) const;
            lj14Factor_function_type lj14Factor_function_value( &::SireIO::Amber::lj14Factor );
            
            Amber_exposer.def( 
                "lj14Factor"
                , lj14Factor_function_value );
        
        }
        Amber_exposer.def( bp::self != bp::self );
        { //::SireIO::Amber::operator=
        
            typedef ::SireIO::Amber & ( ::SireIO::Amber::*assign_function_type)( ::SireIO::Amber const & ) ;
            assign_function_type assign_function_value( &::SireIO::Amber::operator= );
            
            Amber_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        Amber_exposer.def( bp::self == bp::self );
        { //::SireIO::Amber::readCrdTop
        
            typedef ::boost::tuples::tuple< SireMol::MoleculeGroup, SireBase::PropPtr< SireVol::Space >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireIO::Amber::*readCrdTop_function_type)( ::QString const &,::QString const &,::QString ) const;
            readCrdTop_function_type readCrdTop_function_value( &::SireIO::Amber::readCrdTop );
            
            Amber_exposer.def( 
                "readCrdTop"
                , readCrdTop_function_value
                , ( bp::arg("crdfile"), bp::arg("topfile"), bp::arg("flag_cutting")="perresidue" ) );
        
        }
        { //::SireIO::Amber::set14Factors
        
            typedef void ( ::SireIO::Amber::*set14Factors_function_type)( double,double ) ;
            set14Factors_function_type set14Factors_function_value( &::SireIO::Amber::set14Factors );
            
            Amber_exposer.def( 
                "set14Factors"
                , set14Factors_function_value
                , ( bp::arg("coul_14"), bp::arg("lj_14") ) );
        
        }
        { //::SireIO::Amber::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::Amber::typeName );
            
            Amber_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireIO::Amber::what
        
            typedef char const * ( ::SireIO::Amber::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::Amber::what );
            
            Amber_exposer.def( 
                "what"
                , what_function_value );
        
        }
        Amber_exposer.staticmethod( "typeName" );
        Amber_exposer.def( "__copy__", &__copy__);
        Amber_exposer.def( "__deepcopy__", &__copy__);
        Amber_exposer.def( "clone", &__copy__);
        Amber_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::Amber >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Amber_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::Amber >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Amber_exposer.def( "__str__", &pvt_get_name);
        Amber_exposer.def( "__repr__", &pvt_get_name);
    }

}
