#include "VDEReflGenVisitor.h"

// -------------------------------------

using namespace clang;

MyVisitor::MyVisitor(CompilerInstance * p_compiler_instance, Rewriter * p_rewriter)
{
    ast_context    = &(p_compiler_instance->getASTContext());
    source_manager = &(p_compiler_instance->getSourceManager());

    rewriter = p_rewriter;
}

bool MyVisitor::VisitCXXRecordDecl(clang::CXXRecordDecl * decl)
{
    if (source_manager->isWrittenInMainFile(decl->getSourceRange().getBegin()))
    {
        // FullSourceLoc full_location = ast_context->getFullLoc(decl->getBeginLoc());
        // FileID file_id = full_location.getFileID();

        // class infos -------------------------
        ClassInfo * class_info = new ClassInfo();

        class_info->type_str = decl->getQualifiedNameAsString();
        class_info->type     = decl->getTypeForDecl();
        // std::cout << " Class type: " << decl->getQualifiedNameAsString() << std::endl;
        // decl->getTypeForDecl()->string
        // std::cout << "class qualtype: " << decl->getTypeForDecl()->dump() << std::endl;

        const auto bases = decl->bases();

        std::for_each(std::begin(bases), std::end(bases), [&class_info, this](const auto & b) {
            CXXBaseSpecifier base = (CXXBaseSpecifier)b;

            PrintingPolicy pp(ast_context->getLangOpts());
            std::string    base_type = base.getType().getAsString(pp);

            // std::cout << base.getType().getAsString(pp) << std::endl;

            class_info->bases_type.push_back(base_type);
        });

        const auto fields = decl->fields();

        std::for_each(std::begin(fields), std::end(fields), [&class_info, this](const auto & f) {
            ClassAttribute * class_attribute = new ClassAttribute();
            FieldDecl *      field           = dynamic_cast<FieldDecl *>(f);
            TypedefType *    typedef_type    = (TypedefType *)f;

            class_attribute->name      = field->getNameAsString();
            class_attribute->full_name = field->getQualifiedNameAsString();
            // std::cout << std::endl << field->getQualifiedNameAsString() << std::endl;
            // PrintingPolicy pp(ast_context->getLangOpts());
            // field->getType()->dump();
            // std::cout << QualType::getAsString(field->getType().split(), pp) << std::endl;

            // f->getType()->getAsCXXRecordDecl();

            // std::cout << " Attribut " << attribut_name << " of type " << attribut_type << std::endl;
            class_info->attributes.push_back(class_attribute);
        });

        // const auto methods = decl->methods();

        // std::for_each(std::begin(methods), std::end(methods), [&class_info, this](const auto & m) {
        //     CXXMethodDecl * method = dynamic_cast<CXXMethodDecl *>(m);

        //     method->dump();

        //     // class_info->attributes.push_back(class_attribute);
        // });

        const auto friends = decl->friends();

        // std::cout << class_info->type << std::endl;

        std::for_each(std::begin(friends), std::end(friends), [&class_info, this, &decl](const auto & f) {
            FriendDecl * _friend = dynamic_cast<FriendDecl *>(f);

            // _friend->dump();

            // // friend class
            // if (_friend->getFriendType())
            // {
            //     PrintingPolicy pp(ast_context->getLangOpts());
            //     std::cout << _friend->getFriendType()->getType().getAsString(pp) << std::endl;

            //     std::cout << "CLASS DECL" << std::endl;
            // }

            // friend function
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

                            PrintingPolicy pp(ast_context->getLangOpts());
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
        });

        // decl->getEndLoc().dump(*source_manager);
        // class_info->class_loc_range = decl->getSourceRange();
        class_info->class_loc_range = decl->getBraceRange();

        g_data[data_index]->classes.push_back(class_info);
        // class_data.push_back(class_info);
    }

    return true;
}

bool MyVisitor::VisitFunctionDecl(FunctionDecl * func_decl)
{
    if (source_manager->isWrittenInMainFile(func_decl->getSourceRange().getBegin()))
    {

        // [1] Check if the function match the name "meta::registerMembers"
        if (func_decl->getQualifiedNameAsString() != "meta::registerMembers")
            return true;

        bool is_friend       = func_decl->getFriendObjectKind() != Decl::FriendObjectKind::FOK_None;
        bool is_class_member = func_decl->isCXXClassMember();
        // bool is_definition   = func_decl->isThisDeclarationADefinition();

        // std::cout << "[" << g_data[data_index].file_name_without_ext << "] [" << is_definition
        //           << "] func: " << func_decl->getQualifiedNameAsString() << std::endl;

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

                PrintingPolicy pp(ast_context->getLangOpts());
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

                g_data[data_index]->register_member_funcs.push_back(rmf_info);

                // for (int i = 0; i < g_data[data_index].classes.size(); i++)
                // {
                // [4] Check if the template argument type match this class type
                // if (ta.getAsType().getTypePtr() == decl->getTypeForDecl())
                // if (ta.getAsType()->getAsRecordDecl()->getQualifiedNameAsString() ==
                //     g_data[data_index].classes[i]->type)
                // {
                //     std::cout << "found: outside of the class: " << func_decl->getQualifiedNameAsString() << "<"
                //               << ta.getAsType().getAsString(pp) << ">();" << std::endl;

                //     g_data[data_index].classes[i]->has_register_member_func = true;
                //     g_data[data_index].classes[i]->register_member_func_loc = func_decl->getBeginLoc();
                // }
                // }
            }
        }
    }

    // numFunctions++;
    // string funcName = func->getNameInfo().getName().getAsString();
    // if (funcName == "do_math")
    // {
    //     rewriter.ReplaceText(func->getLocation(), funcName.length(), "add5");
    //     errs() << "** Rewrote function def: " << funcName << "\n";
    // }

    return true;
}

// // this replaces the VisitStmt function above
// virtual bool VisitReturnStmt(ReturnStmt * ret)
// {
//     rewriter.ReplaceText(ret->getBeginLoc(), 6, "val");
//     errs() << "** Rewrote ReturnStmt\n";
//     return true;
// }
// virtual bool VisitCallExpr(CallExpr * call)
// {
//     rewriter.ReplaceText(call->getBeginLoc(), 7, "add5"); // call->getBeginLoc() remplace :
//     call->getLocStart() ? errs() << "** Rewrote function call\n"; return true;
// }