#include "VDEReflGenVisitor.h"

// -------------------------------------

using namespace clang;

MyVisitor::MyVisitor(CompilerInstance * compiler_instance)
{
    ast_context    = &(compiler_instance->getASTContext());
    source_manager = &(compiler_instance->getSourceManager());

    // rewriter.setSourceMgr(astContext->getSourceManager(), astContext->getLangOpts());
}

bool MyVisitor::VisitCXXRecordDecl(clang::CXXRecordDecl * decl)
{
    if (source_manager->isWrittenInMainFile(decl->getSourceRange().getBegin()))
    {
        // FullSourceLoc full_location = ast_context->getFullLoc(decl->getBeginLoc());
        // FileID file_id = full_location.getFileID();

        // class infos -------------------------
        ClassInfo * class_info = new ClassInfo();

        class_info->type = decl->getQualifiedNameAsString();
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

                            // PrintingPolicy pp(ast_context->getLangOpts());
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
        class_info->end_of_class_loc = decl->getEndLoc();

        g_data[data_index].classes.push_back(class_info);
        // class_data.push_back(class_info);
    }

    return true;
}

// virtual bool VisitFunctionDecl(FunctionDecl * func)
// {
//     numFunctions++;
//     string funcName = func->getNameInfo().getName().getAsString();
//     if (funcName == "do_math")
//     {
//         rewriter.ReplaceText(func->getLocation(), funcName.length(), "add5");
//         errs() << "** Rewrote function def: " << funcName << "\n";
//     }
//     return true;
// }

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