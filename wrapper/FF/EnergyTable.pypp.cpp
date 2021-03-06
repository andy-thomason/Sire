// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "EnergyTable.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleculeview.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "energytable.h"

#include "energytable.h"

SireFF::EnergyTable __copy__(const SireFF::EnergyTable &other){ return SireFF::EnergyTable(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireFF::EnergyTable&){ return "SireFF::EnergyTable";}

#include "Helpers/len.hpp"

void register_EnergyTable_class(){

    { //::SireFF::EnergyTable
        typedef bp::class_< SireFF::EnergyTable > EnergyTable_exposer_t;
        EnergyTable_exposer_t EnergyTable_exposer = EnergyTable_exposer_t( "EnergyTable", bp::init< >() );
        bp::scope EnergyTable_scope( EnergyTable_exposer );
        EnergyTable_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("molgroup") )) );
        EnergyTable_exposer.def( bp::init< SireFF::EnergyTable const & >(( bp::arg("other") )) );
        { //::SireFF::EnergyTable::add
        
            typedef void ( ::SireFF::EnergyTable::*add_function_type)( ::SireFF::EnergyTable const & ) ;
            add_function_type add_function_value( &::SireFF::EnergyTable::add );
            
            EnergyTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireFF::EnergyTable::add
        
            typedef void ( ::SireFF::EnergyTable::*add_function_type)( ::SireMaths::Vector const & ) ;
            add_function_type add_function_value( &::SireFF::EnergyTable::add );
            
            EnergyTable_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("force") ) );
        
        }
        { //::SireFF::EnergyTable::assertContainsTableFor
        
            typedef void ( ::SireFF::EnergyTable::*assertContainsTableFor_function_type)( ::SireMol::MolNum ) const;
            assertContainsTableFor_function_type assertContainsTableFor_function_value( &::SireFF::EnergyTable::assertContainsTableFor );
            
            EnergyTable_exposer.def( 
                "assertContainsTableFor"
                , assertContainsTableFor_function_value
                , ( bp::arg("molnum") ) );
        
        }
        { //::SireFF::EnergyTable::constGetTable
        
            typedef ::SireFF::MolEnergyTable const & ( ::SireFF::EnergyTable::*constGetTable_function_type)( ::SireMol::MolNum ) const;
            constGetTable_function_type constGetTable_function_value( &::SireFF::EnergyTable::constGetTable );
            
            EnergyTable_exposer.def( 
                "constGetTable"
                , constGetTable_function_value
                , ( bp::arg("molnum") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::EnergyTable::containsTable
        
            typedef bool ( ::SireFF::EnergyTable::*containsTable_function_type)( ::SireMol::MolNum ) const;
            containsTable_function_type containsTable_function_value( &::SireFF::EnergyTable::containsTable );
            
            EnergyTable_exposer.def( 
                "containsTable"
                , containsTable_function_value
                , ( bp::arg("molnum") ) );
        
        }
        { //::SireFF::EnergyTable::count
        
            typedef int ( ::SireFF::EnergyTable::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireFF::EnergyTable::count );
            
            EnergyTable_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireFF::EnergyTable::divide
        
            typedef void ( ::SireFF::EnergyTable::*divide_function_type)( double ) ;
            divide_function_type divide_function_value( &::SireFF::EnergyTable::divide );
            
            EnergyTable_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireFF::EnergyTable::getTable
        
            typedef ::SireFF::MolEnergyTable const & ( ::SireFF::EnergyTable::*getTable_function_type)( ::SireMol::MolNum ) const;
            getTable_function_type getTable_function_value( &::SireFF::EnergyTable::getTable );
            
            EnergyTable_exposer.def( 
                "getTable"
                , getTable_function_value
                , ( bp::arg("molnum") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::EnergyTable::index
        
            typedef ::QHash< SireMol::MolNum, int > const & ( ::SireFF::EnergyTable::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireFF::EnergyTable::index );
            
            EnergyTable_exposer.def( 
                "index"
                , index_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireFF::EnergyTable::indexOf
        
            typedef int ( ::SireFF::EnergyTable::*indexOf_function_type)( ::SireMol::MolNum ) const;
            indexOf_function_type indexOf_function_value( &::SireFF::EnergyTable::indexOf );
            
            EnergyTable_exposer.def( 
                "indexOf"
                , indexOf_function_value
                , ( bp::arg("molnum") ) );
        
        }
        { //::SireFF::EnergyTable::initialiseTable
        
            typedef void ( ::SireFF::EnergyTable::*initialiseTable_function_type)( ::SireMol::MolNum ) ;
            initialiseTable_function_type initialiseTable_function_value( &::SireFF::EnergyTable::initialiseTable );
            
            EnergyTable_exposer.def( 
                "initialiseTable"
                , initialiseTable_function_value
                , ( bp::arg("molnum") ) );
        
        }
        { //::SireFF::EnergyTable::initialiseTables
        
            typedef void ( ::SireFF::EnergyTable::*initialiseTables_function_type)(  ) ;
            initialiseTables_function_type initialiseTables_function_value( &::SireFF::EnergyTable::initialiseTables );
            
            EnergyTable_exposer.def( 
                "initialiseTables"
                , initialiseTables_function_value );
        
        }
        { //::SireFF::EnergyTable::molNums
        
            typedef ::QList< SireMol::MolNum > ( ::SireFF::EnergyTable::*molNums_function_type)(  ) const;
            molNums_function_type molNums_function_value( &::SireFF::EnergyTable::molNums );
            
            EnergyTable_exposer.def( 
                "molNums"
                , molNums_function_value );
        
        }
        { //::SireFF::EnergyTable::multiply
        
            typedef void ( ::SireFF::EnergyTable::*multiply_function_type)( double ) ;
            multiply_function_type multiply_function_value( &::SireFF::EnergyTable::multiply );
            
            EnergyTable_exposer.def( 
                "multiply"
                , multiply_function_value
                , ( bp::arg("value") ) );
        
        }
        EnergyTable_exposer.def( bp::self != bp::self );
        EnergyTable_exposer.def( bp::self * bp::other< double >() );
        EnergyTable_exposer.def( bp::self + bp::self );
        EnergyTable_exposer.def( bp::self + bp::other< SireMaths::Vector >() );
        EnergyTable_exposer.def( bp::self - bp::self );
        EnergyTable_exposer.def( bp::self - bp::other< SireMaths::Vector >() );
        EnergyTable_exposer.def( -bp::self );
        EnergyTable_exposer.def( bp::self / bp::other< double >() );
        { //::SireFF::EnergyTable::operator=
        
            typedef ::SireFF::EnergyTable & ( ::SireFF::EnergyTable::*assign_function_type)( ::SireFF::EnergyTable const & ) ;
            assign_function_type assign_function_value( &::SireFF::EnergyTable::operator= );
            
            EnergyTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireFF::EnergyTable::operator=
        
            typedef ::SireFF::EnergyTable & ( ::SireFF::EnergyTable::*assign_function_type)( ::SireMaths::Vector const & ) ;
            assign_function_type assign_function_value( &::SireFF::EnergyTable::operator= );
            
            EnergyTable_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("force") )
                , bp::return_self< >() );
        
        }
        EnergyTable_exposer.def( bp::self == bp::self );
        { //::SireFF::EnergyTable::setAll
        
            typedef void ( ::SireFF::EnergyTable::*setAll_function_type)( ::SireMaths::Vector const & ) ;
            setAll_function_type setAll_function_value( &::SireFF::EnergyTable::setAll );
            
            EnergyTable_exposer.def( 
                "setAll"
                , setAll_function_value
                , ( bp::arg("force") ) );
        
        }
        { //::SireFF::EnergyTable::subtract
        
            typedef void ( ::SireFF::EnergyTable::*subtract_function_type)( ::SireFF::EnergyTable const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::EnergyTable::subtract );
            
            EnergyTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("other") ) );
        
        }
        { //::SireFF::EnergyTable::subtract
        
            typedef void ( ::SireFF::EnergyTable::*subtract_function_type)( ::SireMaths::Vector const & ) ;
            subtract_function_type subtract_function_value( &::SireFF::EnergyTable::subtract );
            
            EnergyTable_exposer.def( 
                "subtract"
                , subtract_function_value
                , ( bp::arg("force") ) );
        
        }
        { //::SireFF::EnergyTable::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireFF::EnergyTable::typeName );
            
            EnergyTable_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireFF::EnergyTable::what
        
            typedef char const * ( ::SireFF::EnergyTable::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireFF::EnergyTable::what );
            
            EnergyTable_exposer.def( 
                "what"
                , what_function_value );
        
        }
        EnergyTable_exposer.staticmethod( "typeName" );
        EnergyTable_exposer.def( "__copy__", &__copy__);
        EnergyTable_exposer.def( "__deepcopy__", &__copy__);
        EnergyTable_exposer.def( "clone", &__copy__);
        EnergyTable_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireFF::EnergyTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        EnergyTable_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireFF::EnergyTable >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        EnergyTable_exposer.def( "__str__", &pvt_get_name);
        EnergyTable_exposer.def( "__repr__", &pvt_get_name);
        EnergyTable_exposer.def( "__len__", &__len_count< ::SireFF::EnergyTable > );
    }

}
