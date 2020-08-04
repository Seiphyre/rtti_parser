/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AShrOp;
class AddOp;
class AddrSpaceCastOp;
class AddressOfOp;
class AllocaOp;
class AndOp;
class BitcastOp;
class BrOp;
class CallOp;
class CondBrOp;
class ConstantOp;
class CopySignOp;
class CosOp;
class ExpOp;
class ExtractElementOp;
class ExtractValueOp;
class FAbsOp;
class FAddOp;
class FCeilOp;
class FCmpOp;
class FDivOp;
class FMulAddOp;
class FMulOp;
class FNegOp;
class FPExtOp;
class FPToSIOp;
class FPToUIOp;
class FPTruncOp;
class FRemOp;
class FSubOp;
class GEPOp;
class GlobalOp;
class ICmpOp;
class InsertElementOp;
class InsertValueOp;
class IntToPtrOp;
class LLVMFuncOp;
class LShrOp;
class LoadOp;
class Log10Op;
class Log2Op;
class LogOp;
class MulOp;
class NullOp;
class OrOp;
class Prefetch;
class PtrToIntOp;
class ReturnOp;
class SDivOp;
class SExtOp;
class SIToFPOp;
class SRemOp;
class SelectOp;
class ShlOp;
class ShuffleVectorOp;
class StoreOp;
class SubOp;
class TruncOp;
class UDivOp;
class UIToFPOp;
class URemOp;
class UndefOp;
class UnreachableOp;
class XOrOp;
class ZExtOp;

//===----------------------------------------------------------------------===//
// LLVM::AShrOp declarations
//===----------------------------------------------------------------------===//

class AShrOpOperandAdaptor {
public:
  AShrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class AShrOp : public Op<AShrOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AShrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpOperandAdaptor {
public:
  AddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class AddOp : public Op<AddOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AddrSpaceCastOp declarations
//===----------------------------------------------------------------------===//

class AddrSpaceCastOpOperandAdaptor {
public:
  AddrSpaceCastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class AddrSpaceCastOp : public Op<AddrSpaceCastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = AddrSpaceCastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpOperandAdaptor {
public:
  AddressOfOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class AddressOfOp : public Op<AddressOfOp, OpTrait::OneResult, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = AddressOfOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FlatSymbolRefAttr global_nameAttr();
  StringRef global_name();
  static void build(Builder *builder, OperationState &result, LLVMType resType, StringRef name, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *builder, OperationState &result, GlobalOp global, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, FlatSymbolRefAttr global_name);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr global_name);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, StringRef global_name);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef global_name);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Return the llvm.mlir.global operation that defined the value referenced
    /// here.
    GlobalOp getGlobal();
  
};

//===----------------------------------------------------------------------===//
// LLVM::AllocaOp declarations
//===----------------------------------------------------------------------===//

class AllocaOpOperandAdaptor {
public:
  AllocaOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arraySize();

private:
  ArrayRef<Value> tblgen_operands;
};
class AllocaOp : public Op<AllocaOp, OpTrait::OneResult, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = AllocaOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arraySize();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  static void build(Builder *b, OperationState &result, Type resultType, Value arraySize, unsigned alignment);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arraySize, /*optional*/IntegerAttr alignment);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arraySize, /*optional*/IntegerAttr alignment);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AndOp declarations
//===----------------------------------------------------------------------===//

class AndOpOperandAdaptor {
public:
  AndOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class AndOp : public Op<AndOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = AndOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpOperandAdaptor {
public:
  BitcastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class BitcastOp : public Op<BitcastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = BitcastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::BrOp declarations
//===----------------------------------------------------------------------===//

class BrOpOperandAdaptor {
public:
  BrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> args();

private:
  ArrayRef<Value> tblgen_operands;
};
class BrOp : public Op<BrOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = BrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CallOp declarations
//===----------------------------------------------------------------------===//

class CallOpOperandAdaptor {
public:
  CallOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class CallOp : public Op<CallOp, OpTrait::VariadicResults, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = CallOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr calleeAttr();
  Optional< StringRef > callee();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange tblgen_arg_0);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CondBrOp declarations
//===----------------------------------------------------------------------===//

class CondBrOpOperandAdaptor {
public:
  CondBrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> args();

private:
  ArrayRef<Value> tblgen_operands;
};
class CondBrOp : public Op<CondBrOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = CondBrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ConstantOp declarations
//===----------------------------------------------------------------------===//

class ConstantOpOperandAdaptor {
public:
  ConstantOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ConstantOp : public Op<ConstantOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ConstantOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  Attribute valueAttr();
  Attribute value();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Attribute value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Attribute value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CopySignOp declarations
//===----------------------------------------------------------------------===//

class CopySignOpOperandAdaptor {
public:
  CopySignOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  a();
  Value  b();

private:
  ArrayRef<Value> tblgen_operands;
};
class CopySignOp : public Op<CopySignOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = CopySignOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  a();
  Value  b();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value a, Value b);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, Value b);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, Value b);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpOperandAdaptor {
public:
  CosOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class CosOp : public Op<CosOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = CosOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value in);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpOperandAdaptor {
public:
  ExpOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class ExpOp : public Op<ExpOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ExpOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value in);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractElementOp declarations
//===----------------------------------------------------------------------===//

class ExtractElementOpOperandAdaptor {
public:
  ExtractElementOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();
  Value  position();

private:
  ArrayRef<Value> tblgen_operands;
};
class ExtractElementOp : public Op<ExtractElementOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ExtractElementOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Value  position();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *b, OperationState &result, Value vector, Value position,ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value vector, Value position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractValueOp declarations
//===----------------------------------------------------------------------===//

class ExtractValueOpOperandAdaptor {
public:
  ExtractValueOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  container();

private:
  ArrayRef<Value> tblgen_operands;
};
class ExtractValueOp : public Op<ExtractValueOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ExtractValueOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  container();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  ArrayAttr positionAttr();
  ArrayAttr position();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value container, ArrayAttr position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value container, ArrayAttr position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FAbsOp declarations
//===----------------------------------------------------------------------===//

class FAbsOpOperandAdaptor {
public:
  FAbsOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class FAbsOp : public Op<FAbsOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FAbsOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value in);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpOperandAdaptor {
public:
  FAddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FAddOp : public Op<FAddOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FAddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FCeilOp declarations
//===----------------------------------------------------------------------===//

class FCeilOpOperandAdaptor {
public:
  FCeilOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class FCeilOp : public Op<FCeilOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FCeilOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value in);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FCmpOp declarations
//===----------------------------------------------------------------------===//

class FCmpOpOperandAdaptor {
public:
  FCmpOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FCmpOp : public Op<FCmpOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FCmpOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  IntegerAttr predicateAttr();
  ::mlir::LLVM::FCmpPredicate predicate();
  static void build(Builder *b, OperationState &result, FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpOperandAdaptor {
public:
  FDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FDivOp : public Op<FDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FMulAddOp declarations
//===----------------------------------------------------------------------===//

class FMulAddOpOperandAdaptor {
public:
  FMulAddOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  a();
  Value  b();
  Value  c();

private:
  ArrayRef<Value> tblgen_operands;
};
class FMulAddOp : public Op<FMulAddOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FMulAddOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  a();
  Value  b();
  Value  c();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value a, Value b, Value c);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, Value b, Value c);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, Value b, Value c);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpOperandAdaptor {
public:
  FMulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FMulOp : public Op<FMulOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FMulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FNegOp declarations
//===----------------------------------------------------------------------===//

class FNegOpOperandAdaptor {
public:
  FNegOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class FNegOp : public Op<FNegOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FNegOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FPExtOp declarations
//===----------------------------------------------------------------------===//

class FPExtOpOperandAdaptor {
public:
  FPExtOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class FPExtOp : public Op<FPExtOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FPExtOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FPToSIOp declarations
//===----------------------------------------------------------------------===//

class FPToSIOpOperandAdaptor {
public:
  FPToSIOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class FPToSIOp : public Op<FPToSIOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FPToSIOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FPToUIOp declarations
//===----------------------------------------------------------------------===//

class FPToUIOpOperandAdaptor {
public:
  FPToUIOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class FPToUIOp : public Op<FPToUIOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FPToUIOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FPTruncOp declarations
//===----------------------------------------------------------------------===//

class FPTruncOpOperandAdaptor {
public:
  FPTruncOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class FPTruncOp : public Op<FPTruncOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = FPTruncOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpOperandAdaptor {
public:
  FRemOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FRemOp : public Op<FRemOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FRemOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpOperandAdaptor {
public:
  FSubOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class FSubOp : public Op<FSubOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FSubOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::GEPOp declarations
//===----------------------------------------------------------------------===//

class GEPOpOperandAdaptor {
public:
  GEPOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  base();
  ArrayRef<Value> indices();

private:
  ArrayRef<Value> tblgen_operands;
};
class GEPOp : public Op<GEPOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = GEPOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  base();
  Operation::operand_range indices();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value base, ValueRange indices);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, ValueRange indices);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::GlobalOp declarations
//===----------------------------------------------------------------------===//

class GlobalOpOperandAdaptor {
public:
  GlobalOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class GlobalOp : public Op<GlobalOp, OpTrait::ZeroResult, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl, OpTrait::Symbol, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GlobalOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &initializer();
  TypeAttr typeAttr();
  Type type();
  UnitAttr constantAttr();
  bool constant();
  StringAttr sym_nameAttr();
  StringRef sym_name();
  IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  Attribute valueAttr();
  Optional<Attribute> value();
  IntegerAttr addr_spaceAttr();
  APInt addr_space();
  static void build(Builder *builder, OperationState &result, LLVMType type, bool isConstant, Linkage linkage, StringRef name, Attribute value, unsigned addrSpace = 0, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Return the LLVM type of the global.
    LLVMType getType() {
      return type().cast<LLVMType>();
    }
    /// Return the initializer attribute if it exists, or a null attribute.
    Attribute getValueOrNull() {
      return value().getValueOr(Attribute());
    }
    /// Return the initializer region. This may be empty, but if it is not it
    /// terminates in an `llvm.return` op with the initializer value.
    Region &getInitializerRegion() {
      return getOperation()->getRegion(0);
    }
    /// Return the initializer block. If the initializer region is empty this
    /// is nullptr. If it is not nullptr, it terminates with an `llvm.return`
    /// op with the initializer value.
    Block *getInitializerBlock() {
      return getInitializerRegion().empty() ?
        nullptr : &getInitializerRegion().front();
    }
  
};

//===----------------------------------------------------------------------===//
// LLVM::ICmpOp declarations
//===----------------------------------------------------------------------===//

class ICmpOpOperandAdaptor {
public:
  ICmpOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class ICmpOp : public Op<ICmpOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ICmpOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  IntegerAttr predicateAttr();
  ::mlir::LLVM::ICmpPredicate predicate();
  static void build(Builder *b, OperationState &result, ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::InsertElementOp declarations
//===----------------------------------------------------------------------===//

class InsertElementOpOperandAdaptor {
public:
  InsertElementOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();
  Value  value();
  Value  position();

private:
  ArrayRef<Value> tblgen_operands;
};
class InsertElementOp : public Op<InsertElementOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = InsertElementOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Value  value();
  Value  position();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value vector, Value value, Value position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value value, Value position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::InsertValueOp declarations
//===----------------------------------------------------------------------===//

class InsertValueOpOperandAdaptor {
public:
  InsertValueOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  container();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class InsertValueOp : public Op<InsertValueOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = InsertValueOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  container();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  ArrayAttr positionAttr();
  ArrayAttr position();
  static void build(Builder *b, OperationState &result, Value container, Value value, ArrayAttr position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value container, Value value, ArrayAttr position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value container, Value value, ArrayAttr position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::IntToPtrOp declarations
//===----------------------------------------------------------------------===//

class IntToPtrOpOperandAdaptor {
public:
  IntToPtrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class IntToPtrOp : public Op<IntToPtrOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = IntToPtrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::LLVMFuncOp declarations
//===----------------------------------------------------------------------===//

class LLVMFuncOpOperandAdaptor {
public:
  LLVMFuncOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class LLVMFuncOp : public Op<LLVMFuncOp, OpTrait::ZeroResult, OpTrait::IsIsolatedFromAbove, OpTrait::FunctionLike, OpTrait::Symbol, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = LLVMFuncOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  static void build(Builder *builder, OperationState &result, StringRef name, LLVMType type, LLVM::Linkage linkage = LLVM::Linkage::External, ArrayRef<NamedAttribute> attrs = {}, ArrayRef<NamedAttributeList> argAttrs = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    // Add an entry block to an empty function, and set up the block arguments
    // to match the signature of the function.
    Block *addEntryBlock();

    LLVMType getType() {
      return getAttrOfType<TypeAttr>(getTypeAttrName())
          .getValue().cast<LLVMType>();
    }
    bool isVarArg() {
      return getType().getUnderlyingType()->isFunctionVarArg();
    }

    // Hook for OpTrait::FunctionLike, returns the number of function arguments.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncArguments();

    // Hook for OpTrait::FunctionLike, returns the number of function results.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncResults();

    // Hook for OpTrait::FunctionLike, called after verifying that the 'type'
    // attribute is present.  This can check for preconditions of the
    // getNumArguments hook not failing.
    LogicalResult verifyType();
  
};

//===----------------------------------------------------------------------===//
// LLVM::LShrOp declarations
//===----------------------------------------------------------------------===//

class LShrOpOperandAdaptor {
public:
  LShrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class LShrOp : public Op<LShrOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = LShrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpOperandAdaptor {
public:
  LoadOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  addr();

private:
  ArrayRef<Value> tblgen_operands;
};
class LoadOp : public Op<LoadOp, OpTrait::OneResult, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = LoadOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  addr();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *b, OperationState &result, Value addr);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value addr);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value addr);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::Log10Op declarations
//===----------------------------------------------------------------------===//

class Log10OpOperandAdaptor {
public:
  Log10OpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class Log10Op : public Op<Log10Op, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = Log10OpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::Log2Op declarations
//===----------------------------------------------------------------------===//

class Log2OpOperandAdaptor {
public:
  Log2OpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class Log2Op : public Op<Log2Op, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = Log2OpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpOperandAdaptor {
public:
  LogOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  in();

private:
  ArrayRef<Value> tblgen_operands;
};
class LogOp : public Op<LogOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = LogOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  in();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value in);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value in);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpOperandAdaptor {
public:
  MulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class MulOp : public Op<MulOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = MulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::NullOp declarations
//===----------------------------------------------------------------------===//

class NullOpOperandAdaptor {
public:
  NullOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class NullOp : public Op<NullOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = NullOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::OrOp declarations
//===----------------------------------------------------------------------===//

class OrOpOperandAdaptor {
public:
  OrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class OrOp : public Op<OrOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = OrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::Prefetch declarations
//===----------------------------------------------------------------------===//

class PrefetchOperandAdaptor {
public:
  PrefetchOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  addr();
  Value  rw();
  Value  hint();
  Value  cache();

private:
  ArrayRef<Value> tblgen_operands;
};
class Prefetch : public Op<Prefetch, OpTrait::ZeroResult, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = PrefetchOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  addr();
  Value  rw();
  Value  hint();
  Value  cache();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value addr, Value rw, Value hint, Value cache);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value addr, Value rw, Value hint, Value cache);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::PtrToIntOp declarations
//===----------------------------------------------------------------------===//

class PtrToIntOpOperandAdaptor {
public:
  PtrToIntOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class PtrToIntOp : public Op<PtrToIntOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = PtrToIntOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpOperandAdaptor {
public:
  ReturnOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> args();

private:
  ArrayRef<Value> tblgen_operands;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ReturnOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpOperandAdaptor {
public:
  SDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class SDivOp : public Op<SDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SExtOp declarations
//===----------------------------------------------------------------------===//

class SExtOpOperandAdaptor {
public:
  SExtOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class SExtOp : public Op<SExtOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = SExtOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SIToFPOp declarations
//===----------------------------------------------------------------------===//

class SIToFPOpOperandAdaptor {
public:
  SIToFPOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class SIToFPOp : public Op<SIToFPOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = SIToFPOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpOperandAdaptor {
public:
  SRemOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class SRemOp : public Op<SRemOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SRemOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpOperandAdaptor {
public:
  SelectOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  condition();
  Value  trueValue();
  Value  falseValue();

private:
  ArrayRef<Value> tblgen_operands;
};
class SelectOp : public Op<SelectOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SelectOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  condition();
  Value  trueValue();
  Value  falseValue();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *b, OperationState &result, Value condition, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value condition, Value trueValue, Value falseValue);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, Value trueValue, Value falseValue);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ShlOp declarations
//===----------------------------------------------------------------------===//

class ShlOpOperandAdaptor {
public:
  ShlOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShlOp : public Op<ShlOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShlOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ShuffleVectorOp declarations
//===----------------------------------------------------------------------===//

class ShuffleVectorOpOperandAdaptor {
public:
  ShuffleVectorOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  v1();
  Value  v2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShuffleVectorOp : public Op<ShuffleVectorOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShuffleVectorOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  v1();
  Value  v2();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  ArrayAttr maskAttr();
  ArrayAttr mask();
  static void build(Builder *b, OperationState &result, Value v1, Value v2, ArrayAttr mask, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value v1, Value v2, ArrayAttr mask);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpOperandAdaptor {
public:
  StoreOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  value();
  Value  addr();

private:
  ArrayRef<Value> tblgen_operands;
};
class StoreOp : public Op<StoreOp, OpTrait::ZeroResult, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = StoreOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  value();
  Value  addr();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value value, Value addr);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value, Value addr);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpOperandAdaptor {
public:
  SubOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class SubOp : public Op<SubOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SubOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::TruncOp declarations
//===----------------------------------------------------------------------===//

class TruncOpOperandAdaptor {
public:
  TruncOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class TruncOp : public Op<TruncOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = TruncOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpOperandAdaptor {
public:
  UDivOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class UDivOp : public Op<UDivOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = UDivOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::UIToFPOp declarations
//===----------------------------------------------------------------------===//

class UIToFPOpOperandAdaptor {
public:
  UIToFPOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class UIToFPOp : public Op<UIToFPOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = UIToFPOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::URemOp declarations
//===----------------------------------------------------------------------===//

class URemOpOperandAdaptor {
public:
  URemOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class URemOp : public Op<URemOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = URemOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::UndefOp declarations
//===----------------------------------------------------------------------===//

class UndefOpOperandAdaptor {
public:
  UndefOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class UndefOp : public Op<UndefOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = UndefOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::UnreachableOp declarations
//===----------------------------------------------------------------------===//

class UnreachableOpOperandAdaptor {
public:
  UnreachableOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> args();

private:
  ArrayRef<Value> tblgen_operands;
};
class UnreachableOp : public Op<UnreachableOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = UnreachableOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<ValueRange> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *builder, OperationState &result, ValueRange properOperands, ArrayRef<Block *> destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange args);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::XOrOp declarations
//===----------------------------------------------------------------------===//

class XOrOpOperandAdaptor {
public:
  XOrOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class XOrOp : public Op<XOrOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = XOrOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::ZExtOp declarations
//===----------------------------------------------------------------------===//

class ZExtOpOperandAdaptor {
public:
  ZExtOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class ZExtOp : public Op<ZExtOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ZExtOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  static void build(Builder *, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

