/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
llvm::StringRef stringifyCmpIPredicate(CmpIPredicate val) {
  switch (val) {
    case CmpIPredicate::eq: return "eq";
    case CmpIPredicate::ne: return "ne";
    case CmpIPredicate::slt: return "slt";
    case CmpIPredicate::sle: return "sle";
    case CmpIPredicate::sgt: return "sgt";
    case CmpIPredicate::sge: return "sge";
    case CmpIPredicate::ult: return "ult";
    case CmpIPredicate::ule: return "ule";
    case CmpIPredicate::ugt: return "ugt";
    case CmpIPredicate::uge: return "uge";
  }
  return "";
}

llvm::Optional<CmpIPredicate> symbolizeCmpIPredicate(llvm::StringRef str) {
  return llvm::StringSwitch<llvm::Optional<CmpIPredicate>>(str)
      .Case("eq", CmpIPredicate::eq)
      .Case("ne", CmpIPredicate::ne)
      .Case("slt", CmpIPredicate::slt)
      .Case("sle", CmpIPredicate::sle)
      .Case("sgt", CmpIPredicate::sgt)
      .Case("sge", CmpIPredicate::sge)
      .Case("ult", CmpIPredicate::ult)
      .Case("ule", CmpIPredicate::ule)
      .Case("ugt", CmpIPredicate::ugt)
      .Case("uge", CmpIPredicate::uge)
      .Default(llvm::None);
}
llvm::Optional<CmpIPredicate> symbolizeCmpIPredicate(uint64_t value) {
  switch (value) {
  case 0: return CmpIPredicate::eq;
  case 1: return CmpIPredicate::ne;
  case 2: return CmpIPredicate::slt;
  case 3: return CmpIPredicate::sle;
  case 4: return CmpIPredicate::sgt;
  case 5: return CmpIPredicate::sge;
  case 6: return CmpIPredicate::ult;
  case 7: return CmpIPredicate::ule;
  case 8: return CmpIPredicate::ugt;
  case 9: return CmpIPredicate::uge;
  default: return llvm::None;
  }
}

} // namespace mlir

