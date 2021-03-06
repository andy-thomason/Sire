// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MolInfo.pypp.hpp"

namespace bp = boost::python;

#include "molinfo.h"

#include "molinfo.h"

#include "moleculeinfodata.h"

#include "atomselection.h"

const char* pvt_get_name(const SireMol::MolInfo&){ return "SireMol::MolInfo";}

void register_MolInfo_class(){

    { //::SireMol::MolInfo
        typedef bp::class_< SireMol::MolInfo, boost::noncopyable > MolInfo_exposer_t;
        MolInfo_exposer_t MolInfo_exposer = MolInfo_exposer_t( "MolInfo", bp::no_init );
        bp::scope MolInfo_scope( MolInfo_exposer );
        { //::SireMol::MolInfo::assertCompatibleWith
        
            typedef void ( ::SireMol::MolInfo::*assertCompatibleWith_function_type)( ::SireMol::AtomSelection const & ) const;
            assertCompatibleWith_function_type assertCompatibleWith_function_value( &::SireMol::MolInfo::assertCompatibleWith );
            
            MolInfo_exposer.def( 
                "assertCompatibleWith"
                , assertCompatibleWith_function_value
                , ( bp::arg("selected_atoms") ) );
        
        }
        { //::SireMol::MolInfo::assertSingleAtom
        
            typedef void ( ::SireMol::MolInfo::*assertSingleAtom_function_type)( ::QList< SireMol::AtomIdx > const & ) const;
            assertSingleAtom_function_type assertSingleAtom_function_value( &::SireMol::MolInfo::assertSingleAtom );
            
            MolInfo_exposer.def( 
                "assertSingleAtom"
                , assertSingleAtom_function_value
                , ( bp::arg("atomidxs") ) );
        
        }
        { //::SireMol::MolInfo::assertSingleChain
        
            typedef void ( ::SireMol::MolInfo::*assertSingleChain_function_type)( ::QList< SireMol::ChainIdx > const & ) const;
            assertSingleChain_function_type assertSingleChain_function_value( &::SireMol::MolInfo::assertSingleChain );
            
            MolInfo_exposer.def( 
                "assertSingleChain"
                , assertSingleChain_function_value
                , ( bp::arg("chainidxs") ) );
        
        }
        { //::SireMol::MolInfo::assertSingleCutGroup
        
            typedef void ( ::SireMol::MolInfo::*assertSingleCutGroup_function_type)( ::QList< SireMol::CGIdx > const & ) const;
            assertSingleCutGroup_function_type assertSingleCutGroup_function_value( &::SireMol::MolInfo::assertSingleCutGroup );
            
            MolInfo_exposer.def( 
                "assertSingleCutGroup"
                , assertSingleCutGroup_function_value
                , ( bp::arg("cgidxs") ) );
        
        }
        { //::SireMol::MolInfo::assertSingleResidue
        
            typedef void ( ::SireMol::MolInfo::*assertSingleResidue_function_type)( ::QList< SireMol::ResIdx > const & ) const;
            assertSingleResidue_function_type assertSingleResidue_function_value( &::SireMol::MolInfo::assertSingleResidue );
            
            MolInfo_exposer.def( 
                "assertSingleResidue"
                , assertSingleResidue_function_value
                , ( bp::arg("residxs") ) );
        
        }
        { //::SireMol::MolInfo::assertSingleSegment
        
            typedef void ( ::SireMol::MolInfo::*assertSingleSegment_function_type)( ::QList< SireMol::SegIdx > const & ) const;
            assertSingleSegment_function_type assertSingleSegment_function_value( &::SireMol::MolInfo::assertSingleSegment );
            
            MolInfo_exposer.def( 
                "assertSingleSegment"
                , assertSingleSegment_function_value
                , ( bp::arg("segidxs") ) );
        
        }
        { //::SireMol::MolInfo::atomIdx
        
            typedef ::SireMol::AtomIdx ( ::SireMol::MolInfo::*atomIdx_function_type)( ::SireMol::AtomID const & ) const;
            atomIdx_function_type atomIdx_function_value( &::SireMol::MolInfo::atomIdx );
            
            MolInfo_exposer.def( 
                "atomIdx"
                , atomIdx_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::cgIdx
        
            typedef ::SireMol::CGIdx ( ::SireMol::MolInfo::*cgIdx_function_type)( ::SireMol::CGID const & ) const;
            cgIdx_function_type cgIdx_function_value( &::SireMol::MolInfo::cgIdx );
            
            MolInfo_exposer.def( 
                "cgIdx"
                , cgIdx_function_value
                , ( bp::arg("cgid") ) );
        
        }
        { //::SireMol::MolInfo::chainIdx
        
            typedef ::SireMol::ChainIdx ( ::SireMol::MolInfo::*chainIdx_function_type)( ::SireMol::ChainID const & ) const;
            chainIdx_function_type chainIdx_function_value( &::SireMol::MolInfo::chainIdx );
            
            MolInfo_exposer.def( 
                "chainIdx"
                , chainIdx_function_value
                , ( bp::arg("chainid") ) );
        
        }
        { //::SireMol::MolInfo::getAtom
        
            typedef ::SireMol::AtomIdx ( ::SireMol::MolInfo::*getAtom_function_type)( ::SireMol::CGIdx,int ) const;
            getAtom_function_type getAtom_function_value( &::SireMol::MolInfo::getAtom );
            
            MolInfo_exposer.def( 
                "getAtom"
                , getAtom_function_value
                , ( bp::arg("cgidx"), bp::arg("i") ) );
        
        }
        { //::SireMol::MolInfo::getAtom
        
            typedef ::SireMol::AtomIdx ( ::SireMol::MolInfo::*getAtom_function_type)( ::SireMol::ResIdx,int ) const;
            getAtom_function_type getAtom_function_value( &::SireMol::MolInfo::getAtom );
            
            MolInfo_exposer.def( 
                "getAtom"
                , getAtom_function_value
                , ( bp::arg("residx"), bp::arg("i") ) );
        
        }
        { //::SireMol::MolInfo::getAtom
        
            typedef ::SireMol::AtomIdx ( ::SireMol::MolInfo::*getAtom_function_type)( ::SireMol::ChainIdx,int ) const;
            getAtom_function_type getAtom_function_value( &::SireMol::MolInfo::getAtom );
            
            MolInfo_exposer.def( 
                "getAtom"
                , getAtom_function_value
                , ( bp::arg("chainidx"), bp::arg("i") ) );
        
        }
        { //::SireMol::MolInfo::getAtom
        
            typedef ::SireMol::AtomIdx ( ::SireMol::MolInfo::*getAtom_function_type)( ::SireMol::SegIdx,int ) const;
            getAtom_function_type getAtom_function_value( &::SireMol::MolInfo::getAtom );
            
            MolInfo_exposer.def( 
                "getAtom"
                , getAtom_function_value
                , ( bp::arg("segidx"), bp::arg("i") ) );
        
        }
        { //::SireMol::MolInfo::getAtoms
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*getAtoms_function_type)(  ) const;
            getAtoms_function_type getAtoms_function_value( &::SireMol::MolInfo::getAtoms );
            
            MolInfo_exposer.def( 
                "getAtoms"
                , getAtoms_function_value );
        
        }
        { //::SireMol::MolInfo::getAtomsIn
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*getAtomsIn_function_type)( ::SireMol::ResID const & ) const;
            getAtomsIn_function_type getAtomsIn_function_value( &::SireMol::MolInfo::getAtomsIn );
            
            MolInfo_exposer.def( 
                "getAtomsIn"
                , getAtomsIn_function_value
                , ( bp::arg("resid") ) );
        
        }
        { //::SireMol::MolInfo::getAtomsIn
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*getAtomsIn_function_type)( ::SireMol::CGID const & ) const;
            getAtomsIn_function_type getAtomsIn_function_value( &::SireMol::MolInfo::getAtomsIn );
            
            MolInfo_exposer.def( 
                "getAtomsIn"
                , getAtomsIn_function_value
                , ( bp::arg("cgid") ) );
        
        }
        { //::SireMol::MolInfo::getAtomsIn
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*getAtomsIn_function_type)( ::SireMol::ChainID const & ) const;
            getAtomsIn_function_type getAtomsIn_function_value( &::SireMol::MolInfo::getAtomsIn );
            
            MolInfo_exposer.def( 
                "getAtomsIn"
                , getAtomsIn_function_value
                , ( bp::arg("chainid") ) );
        
        }
        { //::SireMol::MolInfo::getAtomsIn
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*getAtomsIn_function_type)( ::SireMol::SegID const & ) const;
            getAtomsIn_function_type getAtomsIn_function_value( &::SireMol::MolInfo::getAtomsIn );
            
            MolInfo_exposer.def( 
                "getAtomsIn"
                , getAtomsIn_function_value
                , ( bp::arg("segid") ) );
        
        }
        { //::SireMol::MolInfo::getChains
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::MolInfo::*getChains_function_type)(  ) const;
            getChains_function_type getChains_function_value( &::SireMol::MolInfo::getChains );
            
            MolInfo_exposer.def( 
                "getChains"
                , getChains_function_value );
        
        }
        { //::SireMol::MolInfo::getCutGroups
        
            typedef ::QList< SireMol::CGIdx > ( ::SireMol::MolInfo::*getCutGroups_function_type)(  ) const;
            getCutGroups_function_type getCutGroups_function_value( &::SireMol::MolInfo::getCutGroups );
            
            MolInfo_exposer.def( 
                "getCutGroups"
                , getCutGroups_function_value );
        
        }
        { //::SireMol::MolInfo::getResidue
        
            typedef ::SireMol::ResIdx ( ::SireMol::MolInfo::*getResidue_function_type)( ::SireMol::ChainIdx,int ) const;
            getResidue_function_type getResidue_function_value( &::SireMol::MolInfo::getResidue );
            
            MolInfo_exposer.def( 
                "getResidue"
                , getResidue_function_value
                , ( bp::arg("chainidx"), bp::arg("i") ) );
        
        }
        { //::SireMol::MolInfo::getResidues
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*getResidues_function_type)(  ) const;
            getResidues_function_type getResidues_function_value( &::SireMol::MolInfo::getResidues );
            
            MolInfo_exposer.def( 
                "getResidues"
                , getResidues_function_value );
        
        }
        { //::SireMol::MolInfo::getResiduesIn
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*getResiduesIn_function_type)( ::SireMol::ChainID const & ) const;
            getResiduesIn_function_type getResiduesIn_function_value( &::SireMol::MolInfo::getResiduesIn );
            
            MolInfo_exposer.def( 
                "getResiduesIn"
                , getResiduesIn_function_value
                , ( bp::arg("chainid") ) );
        
        }
        { //::SireMol::MolInfo::getSegments
        
            typedef ::QList< SireMol::SegIdx > ( ::SireMol::MolInfo::*getSegments_function_type)(  ) const;
            getSegments_function_type getSegments_function_value( &::SireMol::MolInfo::getSegments );
            
            MolInfo_exposer.def( 
                "getSegments"
                , getSegments_function_value );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::AtomName const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::AtomNum ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("num") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::AtomIdx ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("idx") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::AtomID const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ResName const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ResNum ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("num") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ResIdx ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("idx") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ResIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ResID const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("resid") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::CGIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::CGName const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::CGIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::CGIdx ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("idx") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::CGIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::CGID const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("cgid") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ChainName const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ChainIdx ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("idx") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::ChainID const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("chainid") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::SegIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::SegName const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::SegIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::SegIdx ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("idx") ) );
        
        }
        { //::SireMol::MolInfo::map
        
            typedef ::QList< SireMol::SegIdx > ( ::SireMol::MolInfo::*map_function_type)( ::SireMol::SegID const & ) const;
            map_function_type map_function_value( &::SireMol::MolInfo::map );
            
            MolInfo_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("segid") ) );
        
        }
        { //::SireMol::MolInfo::parentChain
        
            typedef ::SireMol::ChainIdx ( ::SireMol::MolInfo::*parentChain_function_type)( ::SireMol::ResIdx ) const;
            parentChain_function_type parentChain_function_value( &::SireMol::MolInfo::parentChain );
            
            MolInfo_exposer.def( 
                "parentChain"
                , parentChain_function_value
                , ( bp::arg("residx") ) );
        
        }
        { //::SireMol::MolInfo::parentChain
        
            typedef ::SireMol::ChainIdx ( ::SireMol::MolInfo::*parentChain_function_type)( ::SireMol::ResID const & ) const;
            parentChain_function_type parentChain_function_value( &::SireMol::MolInfo::parentChain );
            
            MolInfo_exposer.def( 
                "parentChain"
                , parentChain_function_value
                , ( bp::arg("resid") ) );
        
        }
        { //::SireMol::MolInfo::parentChain
        
            typedef ::SireMol::ChainIdx ( ::SireMol::MolInfo::*parentChain_function_type)( ::SireMol::AtomIdx ) const;
            parentChain_function_type parentChain_function_value( &::SireMol::MolInfo::parentChain );
            
            MolInfo_exposer.def( 
                "parentChain"
                , parentChain_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::MolInfo::parentChain
        
            typedef ::SireMol::ChainIdx ( ::SireMol::MolInfo::*parentChain_function_type)( ::SireMol::AtomID const & ) const;
            parentChain_function_type parentChain_function_value( &::SireMol::MolInfo::parentChain );
            
            MolInfo_exposer.def( 
                "parentChain"
                , parentChain_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::parentCutGroup
        
            typedef ::SireMol::CGIdx ( ::SireMol::MolInfo::*parentCutGroup_function_type)( ::SireMol::AtomIdx ) const;
            parentCutGroup_function_type parentCutGroup_function_value( &::SireMol::MolInfo::parentCutGroup );
            
            MolInfo_exposer.def( 
                "parentCutGroup"
                , parentCutGroup_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::MolInfo::parentCutGroup
        
            typedef ::SireMol::CGIdx ( ::SireMol::MolInfo::*parentCutGroup_function_type)( ::SireMol::AtomID const & ) const;
            parentCutGroup_function_type parentCutGroup_function_value( &::SireMol::MolInfo::parentCutGroup );
            
            MolInfo_exposer.def( 
                "parentCutGroup"
                , parentCutGroup_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::parentResidue
        
            typedef ::SireMol::ResIdx ( ::SireMol::MolInfo::*parentResidue_function_type)( ::SireMol::AtomIdx ) const;
            parentResidue_function_type parentResidue_function_value( &::SireMol::MolInfo::parentResidue );
            
            MolInfo_exposer.def( 
                "parentResidue"
                , parentResidue_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::MolInfo::parentResidue
        
            typedef ::SireMol::ResIdx ( ::SireMol::MolInfo::*parentResidue_function_type)( ::SireMol::AtomID const & ) const;
            parentResidue_function_type parentResidue_function_value( &::SireMol::MolInfo::parentResidue );
            
            MolInfo_exposer.def( 
                "parentResidue"
                , parentResidue_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::parentSegment
        
            typedef ::SireMol::SegIdx ( ::SireMol::MolInfo::*parentSegment_function_type)( ::SireMol::AtomIdx ) const;
            parentSegment_function_type parentSegment_function_value( &::SireMol::MolInfo::parentSegment );
            
            MolInfo_exposer.def( 
                "parentSegment"
                , parentSegment_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::MolInfo::parentSegment
        
            typedef ::SireMol::SegIdx ( ::SireMol::MolInfo::*parentSegment_function_type)( ::SireMol::AtomID const & ) const;
            parentSegment_function_type parentSegment_function_value( &::SireMol::MolInfo::parentSegment );
            
            MolInfo_exposer.def( 
                "parentSegment"
                , parentSegment_function_value
                , ( bp::arg("atomid") ) );
        
        }
        { //::SireMol::MolInfo::resIdx
        
            typedef ::SireMol::ResIdx ( ::SireMol::MolInfo::*resIdx_function_type)( ::SireMol::ResID const & ) const;
            resIdx_function_type resIdx_function_value( &::SireMol::MolInfo::resIdx );
            
            MolInfo_exposer.def( 
                "resIdx"
                , resIdx_function_value
                , ( bp::arg("resid") ) );
        
        }
        { //::SireMol::MolInfo::segIdx
        
            typedef ::SireMol::SegIdx ( ::SireMol::MolInfo::*segIdx_function_type)( ::SireMol::SegID const & ) const;
            segIdx_function_type segIdx_function_value( &::SireMol::MolInfo::segIdx );
            
            MolInfo_exposer.def( 
                "segIdx"
                , segIdx_function_value
                , ( bp::arg("segid") ) );
        
        }
        MolInfo_exposer.def( "__str__", &pvt_get_name);
        MolInfo_exposer.def( "__repr__", &pvt_get_name);
    }

}
