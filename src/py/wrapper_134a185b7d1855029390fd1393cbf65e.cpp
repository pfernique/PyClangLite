#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_134a185b7d1855029390fd1393cbf65e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_531f00797ba35816ac873394b9e69430)(class ::clang::Type  const *) = ::clang::PackExpansionType::classof;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_8b194aab57f55f75855a666d015fefbe)() const = &::clang::PackExpansionType::desugar;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_751d9b74aa0b55e0a95767b6ddf83ee2)() const = &::clang::PackExpansionType::getPattern;
    bool  (::clang::PackExpansionType::*method_pointer_2709e6a70e775775941ce9bd92b5cc45)() const = &::clang::PackExpansionType::isSugared;
    boost::python::class_< class ::clang::PackExpansionType, autowig::HeldType< class ::clang::PackExpansionType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_134a185b7d1855029390fd1393cbf65e("PackExpansionType", "", boost::python::no_init);
    class_134a185b7d1855029390fd1393cbf65e.def("classof", method_pointer_531f00797ba35816ac873394b9e69430, "");
    class_134a185b7d1855029390fd1393cbf65e.def("desugar", method_pointer_8b194aab57f55f75855a666d015fefbe, "");
    class_134a185b7d1855029390fd1393cbf65e.def("get_pattern", method_pointer_751d9b74aa0b55e0a95767b6ddf83ee2, "");
    class_134a185b7d1855029390fd1393cbf65e.def("is_sugared", method_pointer_2709e6a70e775775941ce9bd92b5cc45, "");
    class_134a185b7d1855029390fd1393cbf65e.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PackExpansionType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PackExpansionType >, autowig::HeldType< class ::clang::Type > >();
    }

}