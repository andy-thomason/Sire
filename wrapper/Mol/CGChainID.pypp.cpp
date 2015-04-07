// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CGChainID.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "groupgroupids.h"

#include "groupgroupids.h"

SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> __copy__(const SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> &other){ return SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CGChainID_class(){

    { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >
        typedef bp::class_< SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >, bp::bases< SireMol::GroupAtomIDBase, SireMol::AtomID, SireID::ID > > CGChainID_exposer_t;
        CGChainID_exposer_t CGChainID_exposer = CGChainID_exposer_t( "CGChainID", bp::init< >() );
        bp::scope CGChainID_scope( CGChainID_exposer );
        CGChainID_exposer.def( bp::init< SireMol::CGID const &, SireMol::ChainID const & >(( bp::arg("group0"), bp::arg("group1") )) );
        CGChainID_exposer.def( bp::init< SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > const & >(( bp::arg("other") )) );
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::hash
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef ::uint ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::*hash_function_type )(  ) const;
            hash_function_type hash_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::hash );
            
            CGChainID_exposer.def( 
                "hash"
                , hash_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::isNull
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef bool ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::*isNull_function_type )(  ) const;
            isNull_function_type isNull_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::isNull );
            
            CGChainID_exposer.def( 
                "isNull"
                , isNull_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::map
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef ::QList< SireMol::AtomIdx > ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::*map_function_type )( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::map );
            
            CGChainID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        CGChainID_exposer.def( bp::self != bp::self );
        CGChainID_exposer.def( bp::self == bp::other< SireID::ID >() );
        CGChainID_exposer.def( bp::self == bp::self );
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::toString
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef ::QString ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::*toString_function_type )(  ) const;
            toString_function_type toString_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::toString );
            
            CGChainID_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::typeName
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::typeName );
            
            CGChainID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::what
        
            typedef SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID > exported_class_t;
            typedef char const * ( ::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::*what_function_type )(  ) const;
            what_function_type what_function_value( &::SireMol::GroupGroupID< SireMol::CGID, SireMol::ChainID >::what );
            
            CGChainID_exposer.def( 
                "what"
                , what_function_value );
        
        }
        CGChainID_exposer.staticmethod( "typeName" );
        CGChainID_exposer.def( "__copy__", &__copy__);
        CGChainID_exposer.def( "__deepcopy__", &__copy__);
        CGChainID_exposer.def( "clone", &__copy__);
        CGChainID_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGChainID_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGChainID_exposer.def( "__str__", &__str__< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> > );
        CGChainID_exposer.def( "__repr__", &__str__< ::SireMol::GroupGroupID<SireMol::CGID, SireMol::ChainID> > );
    }

}