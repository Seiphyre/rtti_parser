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

        // std::cout << decl->getQualifier()->getAsType()->isBuiltinType() << std::endl;

        // std::cout << " Class type: " << decl->getQualifiedNameAsString() << std::endl;

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