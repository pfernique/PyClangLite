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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a6aedb4654a55a40aeecf4b1dc5fcc98()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (*method_pointer_b2519bfa48005125aef3d9ea0909bff9)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_59e303a433cb53afbc1196b4f78d2d1d)() = ::clang::Decl::PrintStats;
    void  (*method_pointer_4375ef64a19e5ceab7ae0b90a92c656a)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    bool  (::clang::Decl::*method_pointer_d41cd7709e9b542ca5c76a084d2c6eb7)(bool  &) const = &::clang::Decl::canBeWeakImported;
    class ::clang::Decl  * (*method_pointer_e5062e6f6f0351f29098f728c56b6bf9)(class ::clang::DeclContext  const *) = ::clang::Decl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_ed030a8a5fdb559c9750d799772fcbaf)(class ::clang::Decl  const *) = ::clang::Decl::castToDeclContext;
    bool  (*method_pointer_dc5ae360ae88524a8baae12938c1044a)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    void  (::clang::Decl::*method_pointer_c07be57371235e98a31f8422b70f2c6a)() = &::clang::Decl::dropAttrs;
    void  (::clang::Decl::*method_pointer_0476805f2fc251c1ad7e0c426d213103)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_5dfd04262b0c510ca3ef6ecde2a3b07d)() const = &::clang::Decl::dumpColor;
    class ::clang::ASTContext  & (::clang::Decl::*method_pointer_f22fafb6adff5d53968da7f7311ae675)() const = &::clang::Decl::getASTContext;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_01672603211051dc917b124d36374893)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_a302931d26f15b3ab7bb81d72fcc3bdb)() const = &::clang::Decl::getAccessUnsafe;
    class ::clang::FunctionDecl  const * (::clang::Decl::*method_pointer_1d7b645c561f50d7b94e31045e8a196b)() const = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl  * (::clang::Decl::*method_pointer_f09795c37e175c47abbfdc890fa963ef)() = &::clang::Decl::getAsFunction;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_c9509a7a3a2b534491878aca557d4654)() const = &::clang::Decl::getBodyRBrace;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_5f06610cdf5056a5ace009a773cc3fb5)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_bdecc061b3075a939b8f723690cf2db0)() const = &::clang::Decl::getCanonicalDecl;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_8aff82b5ab53507eb919b46306195588)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_677a8ae1b3dd5dc8b0219b6422bfcb1c)() const = &::clang::Decl::getDeclContext;
    class ::clang::FunctionType  const * (::clang::Decl::*method_pointer_8334df69d5b35a80aabcfb53c3fa5053)(bool ) const = &::clang::Decl::getFunctionType;
    unsigned int  (::clang::Decl::*method_pointer_b476a746a0e352c186a9fcfb07034c1b)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_482f2f10841e5e078093ee88ef88b6bc)() const = &::clang::Decl::getIdentifierNamespace;
    unsigned int  (*method_pointer_21606b3c9ce854d5b7448a895a43c4e6)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_18a0d4a9f5d25f1fa3087b720ecdddb3)() const = &::clang::Decl::getKind;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_0851cd59becb556183f3c17d786513ae)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_ee34be6c43af55cda8c3fda4133d5182)() const = &::clang::Decl::getLexicalDeclContext;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_46ad0a276bc55586b0a556a304482d98)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_67843948c51b5a93819f39aa88a465a6)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_72cf6bcc7afc501aa8dc99e266463396)() const = &::clang::Decl::getLocation;
    unsigned int  (::clang::Decl::*method_pointer_5f8e3649a8ba5d4fa71cccb3dafbf362)() const = &::clang::Decl::getMaxAlignment;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_3250cff698cb50829702c42713933f71)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_693a716d4eb35d5ca552dc40e95fb3ca)() const = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_cbba6d2c6e13583db064f65074c2e1d4)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_f91788ea08995d129870918046d8a3de)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_92e3f5d4319f5691a1fbb48984309ad4)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_31396c8bbaef55f5a85ce6d0c58686b8)() const = &::clang::Decl::getNonClosureContext;
    unsigned int  (::clang::Decl::*method_pointer_983e8a50793d5d2da4d6a68c6a746f1e)() const = &::clang::Decl::getOwningModuleID;
    class ::clang::DeclContext  * (::clang::Decl::*method_pointer_90cf9d274715534db853a90da2bcb97e)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext  const * (::clang::Decl::*method_pointer_af896bdefbec524783374ee567be17c4)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl  * (::clang::Decl::*method_pointer_4a3c941b7dbb5f56813a220698ed051a)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl  const * (::clang::Decl::*method_pointer_c46937a29ec454a08a1def7ef743efff)() const = &::clang::Decl::getPreviousDecl;
    class ::clang::TranslationUnitDecl  const * (::clang::Decl::*method_pointer_3f65f24fb2bf52fcb894e6b10cc2e76c)() const = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl  * (::clang::Decl::*method_pointer_afec18a9b49a5b2dadf003cb88eedce4)() = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_c15c20d40ac8561dbcaa0468f1e2e835)() const = &::clang::Decl::hasAttrs;
    bool  (::clang::Decl::*method_pointer_18cf8b9852bf50a8ad1c7094e756f5dc)() const = &::clang::Decl::hasBody;
    bool  (::clang::Decl::*method_pointer_f204a1a264015b9bbe7716691e2c01f9)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_7abc4f24978753e9bbb4b37e80893306)() const = &::clang::Decl::isCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_96b95e9c000b5d1bbcdeadfac33ae9d9)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_45f611c6ffb55e628146237504decd9e)() const = &::clang::Decl::isFirstDecl;
    bool  (::clang::Decl::*method_pointer_9b50897be8d55e3493be5523b542560e)() const = &::clang::Decl::isFromASTFile;
    bool  (::clang::Decl::*method_pointer_a028cdf664ab5f538314fc6b87ea7b94)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    bool  (::clang::Decl::*method_pointer_8d2e3d9390825e199c883f906b419360)() const = &::clang::Decl::isImplicit;
    bool  (::clang::Decl::*method_pointer_6798ec7413eb5693b51d622d68865db4)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_c4722965e02e59598c1d096d864e1fcb)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1fe51778ac7c5298b1082961e101d037)() const = &::clang::Decl::isInStdNamespace;
    bool  (::clang::Decl::*method_pointer_ebb62ea248975adcab10b2901a9fca05)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_4a2c1c3c4c405f0fbc1631f768114cdc)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_fedb0cdf17d553ab96755cc42944244e)() = &::clang::Decl::isLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_013eca1d90025d9bb9b5aaefe2f03c0b)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_98d071e27d4451eabb1c26049dc09827)() const = &::clang::Decl::isOutOfLine;
    bool  (::clang::Decl::*method_pointer_cc366fdf2ada5d97ad7a7e7a7ed6e097)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_7f01319116ef5d08811476091bc91caa)() const = &::clang::Decl::isReferenced;
    bool  (*method_pointer_37078d965b8554799e9a7cf2ac52f6d9)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1d875ed65602552ab79f2d512cb44f9a)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_e8ba82632de552f986dbf1aea59e91ec)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_3645a7a47ca052119854baa6714644af)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_9d540960d0515ee3a504238ca0af7275)() const = &::clang::Decl::isThisDeclarationReferenced;
    bool  (::clang::Decl::*method_pointer_71370c849d955e66a622856541a16ce3)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_70f3f888ae3b52dc9f4fb1233f60f27a)(bool ) const = &::clang::Decl::isUsed;
    bool  (::clang::Decl::*method_pointer_3cd80499dbd159f487d6459b5acd0b05)() const = &::clang::Decl::isWeakImported;
    void  (::clang::Decl::*method_pointer_1408019541fb5e0ea07c981fe677107d)(class ::clang::ASTContext  &) = &::clang::Decl::markUsed;
    void  (::clang::Decl::*method_pointer_d08c0148d7335e09b9e4cae047249cf2)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    void  (::clang::Decl::*method_pointer_23083e4d7393511aa818d348f5c98527)(class ::clang::DeclContext  *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_8303276b94e25e4db8d9fc7196bec54f)(bool ) = &::clang::Decl::setImplicit;
    void  (::clang::Decl::*method_pointer_34dd230992355dc59b4a3e25e2e36045)(bool ) = &::clang::Decl::setInvalidDecl;
    void  (::clang::Decl::*method_pointer_9b641ae940a056fc97a607bddb5e3c46)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_20cd69fb8f4951b6a865776904a666cc)(class ::clang::DeclContext  *) = &::clang::Decl::setLexicalDeclContext;
    void  (::clang::Decl::*method_pointer_f831879b58aa5e9a9e27fdab7d48af74)() = &::clang::Decl::setLocalExternDecl;
    void  (::clang::Decl::*method_pointer_1575daaa601e580c95c0aa31b76eda9a)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    void  (::clang::Decl::*method_pointer_f061c7b577a05dedad7abf3eae7c095c)() = &::clang::Decl::setNonMemberOperator;
    void  (::clang::Decl::*method_pointer_01b298e705e05af5b23df79fbb7616fa)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_c87d1ff5e79552f8a74a12a02b6d5d5c)(bool ) = &::clang::Decl::setReferenced;
    void  (::clang::Decl::*method_pointer_13043c85a0945f2787d4a4760f639ebb)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    struct function_group
    {
        static class ::boost::python::str  function_ea2f76c1a21f5c4182d29549fab8dfbf(class ::clang::Decl  * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::HeldType< class ::clang::Decl >, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_b2519bfa48005125aef3d9ea0909bff9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_59e303a433cb53afbc1196b4f78d2d1d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_4375ef64a19e5ceab7ae0b90a92c656a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_d41cd7709e9b542ca5c76a084d2c6eb7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_e5062e6f6f0351f29098f728c56b6bf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_ed030a8a5fdb559c9750d799772fcbaf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_dc5ae360ae88524a8baae12938c1044a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_c07be57371235e98a31f8422b70f2c6a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_0476805f2fc251c1ad7e0c426d213103, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_5dfd04262b0c510ca3ef6ecde2a3b07d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_f22fafb6adff5d53968da7f7311ae675, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_01672603211051dc917b124d36374893, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_a302931d26f15b3ab7bb81d72fcc3bdb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_1d7b645c561f50d7b94e31045e8a196b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_f09795c37e175c47abbfdc890fa963ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_c9509a7a3a2b534491878aca557d4654, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_5f06610cdf5056a5ace009a773cc3fb5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_bdecc061b3075a939b8f723690cf2db0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_8aff82b5ab53507eb919b46306195588, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_677a8ae1b3dd5dc8b0219b6422bfcb1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_8334df69d5b35a80aabcfb53c3fa5053, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_b476a746a0e352c186a9fcfb07034c1b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_482f2f10841e5e078093ee88ef88b6bc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_21606b3c9ce854d5b7448a895a43c4e6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_18a0d4a9f5d25f1fa3087b720ecdddb3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_0851cd59becb556183f3c17d786513ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_ee34be6c43af55cda8c3fda4133d5182, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_46ad0a276bc55586b0a556a304482d98, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_67843948c51b5a93819f39aa88a465a6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_72cf6bcc7afc501aa8dc99e266463396, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_5f8e3649a8ba5d4fa71cccb3dafbf362, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_3250cff698cb50829702c42713933f71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_693a716d4eb35d5ca552dc40e95fb3ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_cbba6d2c6e13583db064f65074c2e1d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_f91788ea08995d129870918046d8a3de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_92e3f5d4319f5691a1fbb48984309ad4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_31396c8bbaef55f5a85ce6d0c58686b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_983e8a50793d5d2da4d6a68c6a746f1e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_90cf9d274715534db853a90da2bcb97e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_af896bdefbec524783374ee567be17c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_4a3c941b7dbb5f56813a220698ed051a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_c46937a29ec454a08a1def7ef743efff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_3f65f24fb2bf52fcb894e6b10cc2e76c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_afec18a9b49a5b2dadf003cb88eedce4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_c15c20d40ac8561dbcaa0468f1e2e835, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_18cf8b9852bf50a8ad1c7094e756f5dc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_f204a1a264015b9bbe7716691e2c01f9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_7abc4f24978753e9bbb4b37e80893306, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_96b95e9c000b5d1bbcdeadfac33ae9d9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_45f611c6ffb55e628146237504decd9e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_9b50897be8d55e3493be5523b542560e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_a028cdf664ab5f538314fc6b87ea7b94, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_8d2e3d9390825e199c883f906b419360, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_6798ec7413eb5693b51d622d68865db4, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_c4722965e02e59598c1d096d864e1fcb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_1fe51778ac7c5298b1082961e101d037, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_ebb62ea248975adcab10b2901a9fca05, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_4a2c1c3c4c405f0fbc1631f768114cdc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_fedb0cdf17d553ab96755cc42944244e, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_013eca1d90025d9bb9b5aaefe2f03c0b, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_98d071e27d4451eabb1c26049dc09827, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_cc366fdf2ada5d97ad7a7e7a7ed6e097, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_7f01319116ef5d08811476091bc91caa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_37078d965b8554799e9a7cf2ac52f6d9, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_1d875ed65602552ab79f2d512cb44f9a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_e8ba82632de552f986dbf1aea59e91ec, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_3645a7a47ca052119854baa6714644af, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_9d540960d0515ee3a504238ca0af7275, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_71370c849d955e66a622856541a16ce3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_70f3f888ae3b52dc9f4fb1233f60f27a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_3cd80499dbd159f487d6459b5acd0b05, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_1408019541fb5e0ea07c981fe677107d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_d08c0148d7335e09b9e4cae047249cf2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_23083e4d7393511aa818d348f5c98527, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_8303276b94e25e4db8d9fc7196bec54f, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_34dd230992355dc59b4a3e25e2e36045, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_9b641ae940a056fc97a607bddb5e3c46, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_20cd69fb8f4951b6a865776904a666cc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_f831879b58aa5e9a9e27fdab7d48af74, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_1575daaa601e580c95c0aa31b76eda9a, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_f061c7b577a05dedad7abf3eae7c095c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_01b298e705e05af5b23df79fbb7616fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_c87d1ff5e79552f8a74a12a02b6d5d5c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_13043c85a0945f2787d4a4760f639ebb, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_ea2f76c1a21f5c4182d29549fab8dfbf, "");

}