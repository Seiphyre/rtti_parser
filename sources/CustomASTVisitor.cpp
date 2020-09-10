#include "CustomASTVisitor.h"

using namespace clang;

CustomASTVisitor::CustomASTVisitor(CompilerInstance & p_compiler_instance, Rewriter & p_rewriter, FileInfo & file_info)
{
    m_ast_context    = &(p_compiler_instance.getASTContext());
    m_source_manager = &(p_compiler_instance.getSourceManager());

    m_rewriter = &p_rewriter;

    m_file_info = &file_info;
}

// -------------------------------------

bool CustomASTVisitor::VisitCXXRecordDecl(clang::CXXRecordDecl * decl)
{
    if (m_source_manager->isWrittenInMainFile(decl->getSourceRange().getBegin()))
    {
        if (!decl->isThisDeclarationADefinition())
            return true;

        if (decl->isTemplated())
        {
            std::cout << decl->getQualifiedNameAsString() << "is templated. This class will be skiped." << std::endl;
            return true;
        }

        // -- gathering Informations class ---------------------------------------------------

        ClassInfo * class_info = new ClassInfo();

        class_info->type_str = decl->getQualifiedNameAsString();
        class_info->type     = decl->getTypeForDecl();

        class_info->class_brace_range = decl->getBraceRange();

        // -- gathering Informations about bases ----------------------------------------------

        const auto bases = decl->bases();

        bool bases_are_templated = false;
        std::for_each(std::begin(bases), std::end(bases), [&class_info, &bases_are_templated, this](const auto & b) {
            CXXBaseSpecifier base = (CXXBaseSpecifier)b;

            PrintingPolicy pp(m_ast_context->getLangOpts());
            std::string    base_type = base.getType().getAsString(pp);

            if (CXXRecordDecl * d = base.getType()->getAsCXXRecordDecl())
            {
                if (d->getDeclKind() == Decl::ClassTemplateSpecialization)
                {
                    bases_are_templated = true;
                    std::cout << class_info->type_str << " inherite from a templated class ("
                              << d->getQualifiedNameAsString() << "). This class will be skiped." << std::endl;
                    return;
                }
            }

            class_info->bases_type.push_back(base_type);
        });

        if (bases_are_templated)
            return true;

        // -- gathering Informations about attributes -----------------------------------------

        const auto fields = decl->fields();

        std::for_each(std::begin(fields), std::end(fields), [&class_info, this](const auto & f) {
            ClassAttribute * class_attribute = new ClassAttribute();
            FieldDecl *      field           = dynamic_cast<FieldDecl *>(f);
            // TypedefType *    typedef_type    = (TypedefType *)f;

            if (field->getType()->isConstantArrayType())
            {
                std::cout << "Array Type \"" << field->getNameAsString() << "\" has been found in "
                          << class_info->type_str << ". This member will be ignored." << std::endl;
                return;
            }

            class_attribute->name      = field->getNameAsString();
            class_attribute->full_name = field->getQualifiedNameAsString();

            class_info->attributes.push_back(class_attribute);
        });

        // -- gathering Informations about methodes ------------------------------------------

        // const auto methods = decl->methods();
        //
        // std::for_each(std::begin(methods), std::end(methods), [&class_info, this](const auto & m) {
        //
        //     CXXMethodDecl * method = dynamic_cast<CXXMethodDecl *>(m);
        //     method->dump();
        // });

        // -- gathering Informations about friend declarations -------------------------------

        const auto friends = decl->friends();

        std::for_each(std::begin(friends), std::end(friends), [&class_info, this, &decl](const auto & f) {
            FriendDecl * _friend = dynamic_cast<FriendDecl *>(f);

            // _friend->dump();

            // FUNCTION DECL
            if (_friend->getFriendDecl())
            {
                // std::cout << _friend->getFriendDecl()->getQualifiedNameAsString() << std::endl;

                // [1] Check if the friend function match the name "meta::registerMembers"
                bool name_is_matching = _friend->getFriendDecl()->getQualifiedNameAsString() == "meta::registerMembers";

                if (name_is_matching && _friend->getFriendDecl()->getKind() == Decl::Function)
                {
                    FunctionDecl * func_decl = (FunctionDecl *)_friend->getFriendDecl();
                    // [2] Check if the friend function has template arguments (looking for a function with 1 arg)
                    const TemplateArgumentList * tal = func_decl->getTemplateSpecializationArgs();

                    if (tal != NULL && tal->size() >= 1)
                    {
                        // [3] Check the first template argument can be cast as a Type
                        const TemplateArgument ta = tal->get(0);
                        if (ta.getKind() == TemplateArgument::ArgKind::Type)
                        {
                            QualType func_arg_type = ta.getAsType();

                            PrintingPolicy pp(m_ast_context->getLangOpts());
                            // std::cout << ta.getAsType().getAsString(pp) << std::endl;

                            // [4] Check if the template argument type match this class type
                            if (ta.getAsType().getTypePtr() == decl->getTypeForDecl())
                            {
                                // std::cout << "found: friend auto "
                                //           << _friend->getFriendDecl()->getQualifiedNameAsString() << "<"
                                //           << ta.getAsType().getAsString(pp) << ">();" << std::endl;
                                class_info->has_friend_register_member_func = true;
                            }
                        }
                    }
                }
            }

            // CLASS DECL
            if (_friend->getFriendType())
            {
                // PrintingPolicy pp(m_ast_context->getLangOpts());
                // std::cout << "CLASS DECL: " << _friend->getFriendType()->getType().getAsString(pp) << std::endl;

                if (CXXRecordDecl * friend_class_decl = _friend->getFriendType()->getType()->getAsCXXRecordDecl())
                {
                    if (friend_class_decl->getQualifiedNameAsString() == "boost::serialization::access")
                    {
                        // std::cout << friend_class_decl->getQualifiedNameAsString() << std::endl;
                        class_info->has_friend_serialization_func = true;
                    }
                }
            }
        });

        // --------------------------------------------------------------------------------

        m_file_info->classes.push_back(class_info);
    }

    return true;
}

// -------------------------------------

bool CustomASTVisitor::VisitFunctionDecl(FunctionDecl * func_decl)
{
    if (m_source_manager->isWrittenInMainFile(func_decl->getSourceRange().getBegin()))
    {

        // [1] Check if the function match the name "meta::registerMembers"
        if (func_decl->getQualifiedNameAsString() == "meta::registerMembers")
        {
            bool is_friend       = func_decl->getFriendObjectKind() != Decl::FriendObjectKind::FOK_None;
            bool is_class_member = func_decl->isCXXClassMember();
            // bool is_definition   = func_decl->isThisDeclarationADefinition();

            // [1.5] Check if this function is different from the friend function inside the class
            if (is_class_member || is_friend)
                return true;

            const TemplateArgumentList * tal = func_decl->getTemplateSpecializationArgs();

            // [2] Check if the function has template arguments (looking for a function with 1 arg)
            if (tal != NULL && tal->size() >= 1)
            {
                // [3] Check the first template argument can be cast as a Type
                const TemplateArgument ta = tal->get(0);
                if (ta.getKind() == TemplateArgument::ArgKind::Type)
                {
                    QualType func_arg_type = ta.getAsType();

                    PrintingPolicy pp(m_ast_context->getLangOpts());
                    // std::cout << ta.getAsType().getAsString(pp) << std::endl;

                    RegisterMemberFuncInfo * rmf_info = new RegisterMemberFuncInfo();

                    rmf_info->templ_type = ta.getAsType().getTypePtr();
                    rmf_info->range_loc  = func_decl->getSourceRange();

                    // DeclContext *   namespace_context = func_decl->getDeclContext();
                    // NamespaceDecl * namespace_decl    = NamespaceDecl::castFromDeclContext(namespace_context);
                    // namespace_decl->getSourceRange().dump(*source_manager);

                    // std::cout << "found: outside of the class: " << func_decl->getQualifiedNameAsString() << "<"
                    //           << ta.getAsType().getAsString(pp) << ">();" << std::endl;

                    // func_decl->getLocation().dump(*source_manager);

                    m_file_info->register_member_funcs.push_back(rmf_info);
                }
            }
        }

        else if (func_decl->getQualifiedNameAsString() == "boost::serialization::serialize")
        {
            if (func_decl->getNumParams() == 3)
            {
                if (ParmVarDecl * parm_var_decl = func_decl->getParamDecl(1))
                {
                    SerializationFuncInfo * sf_info = new SerializationFuncInfo();

                    sf_info->param_type =
                        parm_var_decl->getType()->getPointeeType().getDesugaredType(*m_ast_context).getTypePtr();
                    sf_info->range_loc = func_decl->getSourceRange();

                    m_file_info->serialization_funcs.push_back(sf_info);
                }
            }
        }
    }

    return true;
}