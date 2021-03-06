/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (4)                        */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_cbf4eed979af518c9bfc92b80f626bda()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::TypeWithKeyword, autowig::HeldType< class ::clang::TypeWithKeyword >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbf4eed979af518c9bfc92b80f626bda("TypeWithKeyword", "", boost::python::no_init);

    if(std::is_class< autowig::HeldType< class ::clang::TypeWithKeyword > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeWithKeyword >, autowig::HeldType< class ::clang::Type > >();
    }

}