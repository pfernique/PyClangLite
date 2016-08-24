#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9e2974d2ed6b5833946cd12a4205bb14()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPThreadPrivateDecl  * (*method_pointer_e103f0985e6d5454bb5e83ac8374ad8a)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::OMPThreadPrivateDecl::CreateDeserialized;
    bool  (*method_pointer_cc509b748a745b9aa3f79f450ad2232a)(class ::clang::Decl  const *) = ::clang::OMPThreadPrivateDecl::classof;
    bool  (*method_pointer_6672be6ca78f59f19313ad45ee617b85)(enum ::clang::Decl::Kind ) = ::clang::OMPThreadPrivateDecl::classofKind;
    bool  (::clang::OMPThreadPrivateDecl::*method_pointer_d24ff412034251f98355dab3d809b036)() const = &::clang::OMPThreadPrivateDecl::varlist_empty;
    unsigned int  (::clang::OMPThreadPrivateDecl::*method_pointer_77af320c7d7c5c40beb24e56c2532ce6)() const = &::clang::OMPThreadPrivateDecl::varlist_size;
    boost::python::class_< class ::clang::OMPThreadPrivateDecl, autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_9e2974d2ed6b5833946cd12a4205bb14("OMPThreadPrivateDecl", "", boost::python::no_init);
    class_9e2974d2ed6b5833946cd12a4205bb14.def("create_deserialized", method_pointer_e103f0985e6d5454bb5e83ac8374ad8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof", method_pointer_cc509b748a745b9aa3f79f450ad2232a, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("classof_kind", method_pointer_6672be6ca78f59f19313ad45ee617b85, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_empty", method_pointer_d24ff412034251f98355dab3d809b036, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.def("varlist_size", method_pointer_77af320c7d7c5c40beb24e56c2532ce6, "");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof_kind");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("create_deserialized");
    class_9e2974d2ed6b5833946cd12a4205bb14.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::OMPThreadPrivateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::OMPThreadPrivateDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}