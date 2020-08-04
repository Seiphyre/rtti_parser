/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ClampISOp;
class ConvertISOp;
class ConvertISToFOp;
class RealAddEwOp;
class RealCompareZeroEwOp;
class RealDivEwOp;
class RealMatMulBiasOp;
class RealMatMulOp;
class RealMulEwOp;
class RealSubEwOp;
class RealUnaryEwOp;
class RoundingDivideByPotISOp;
class VecScalarSaturatingRoundingDoublingHighMulISOp;

//===----------------------------------------------------------------------===//
// fxpmath::ClampISOp declarations
//===----------------------------------------------------------------------===//

class ClampISOpOperandAdaptor {
public:
  ClampISOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ClampISOp : public Op<ClampISOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ClampISOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr clamp_minAttr();
  APInt clamp_min();
  IntegerAttr clamp_maxAttr();
  APInt clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand, IntegerAttr clamp_min, IntegerAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::ConvertISOp declarations
//===----------------------------------------------------------------------===//

class ConvertISOpOperandAdaptor {
public:
  ConvertISOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertISOp : public Op<ConvertISOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertISOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::ConvertISToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertISToFOpOperandAdaptor {
public:
  ConvertISToFOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvertISToFOp : public Op<ConvertISToFOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultShape, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConvertISToFOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value operand);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealAddEwOp declarations
//===----------------------------------------------------------------------===//

class RealAddEwOpOperandAdaptor {
public:
  RealAddEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealAddEwOp : public Op<RealAddEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealAddEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealCompareZeroEwOp declarations
//===----------------------------------------------------------------------===//

class RealCompareZeroEwOpOperandAdaptor {
public:
  RealCompareZeroEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealCompareZeroEwOp : public Op<RealCompareZeroEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = RealCompareZeroEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  StringAttr fnAttr();
  StringRef fn();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringAttr fn);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringAttr fn);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringRef fn);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringRef fn);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealDivEwOp declarations
//===----------------------------------------------------------------------===//

class RealDivEwOpOperandAdaptor {
public:
  RealDivEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealDivEwOp : public Op<RealDivEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealDivEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealMatMulBiasOp declarations
//===----------------------------------------------------------------------===//

class RealMatMulBiasOpOperandAdaptor {
public:
  RealMatMulBiasOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Value  bias();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealMatMulBiasOp : public Op<RealMatMulBiasOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealMatMulBiasOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Value  bias();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, Value bias, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value bias, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealMatMulOp declarations
//===----------------------------------------------------------------------===//

class RealMatMulOpOperandAdaptor {
public:
  RealMatMulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealMatMulOp : public Op<RealMatMulOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealMatMulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealMulEwOp declarations
//===----------------------------------------------------------------------===//

class RealMulEwOpOperandAdaptor {
public:
  RealMulEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealMulEwOp : public Op<RealMulEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealMulEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealSubEwOp declarations
//===----------------------------------------------------------------------===//

class RealSubEwOpOperandAdaptor {
public:
  RealSubEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealSubEwOp : public Op<RealSubEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RealSubEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RealUnaryEwOp declarations
//===----------------------------------------------------------------------===//

class RealUnaryEwOpOperandAdaptor {
public:
  RealUnaryEwOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class RealUnaryEwOp : public Op<RealUnaryEwOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = RealUnaryEwOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  StringAttr fnAttr();
  StringRef fn();
  FloatAttr clamp_minAttr();
  Optional< APFloat > clamp_min();
  FloatAttr clamp_maxAttr();
  Optional< APFloat > clamp_max();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringAttr fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringAttr fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, StringRef fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, StringRef fn, /*optional*/FloatAttr clamp_min, /*optional*/FloatAttr clamp_max);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::RoundingDivideByPotISOp declarations
//===----------------------------------------------------------------------===//

class RoundingDivideByPotISOpOperandAdaptor {
public:
  RoundingDivideByPotISOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  operand();

private:
  ArrayRef<Value> tblgen_operands;
};
class RoundingDivideByPotISOp : public Op<RoundingDivideByPotISOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = RoundingDivideByPotISOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  operand();
  Operation::result_range getODSResults(unsigned index);
  Value  res();
  IntegerAttr exponentAttr();
  APInt exponent();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type res, Value operand, IntegerAttr exponent);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand, IntegerAttr exponent);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand, IntegerAttr exponent);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// fxpmath::VecScalarSaturatingRoundingDoublingHighMulISOp declarations
//===----------------------------------------------------------------------===//

class VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor {
public:
  VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  a();

private:
  ArrayRef<Value> tblgen_operands;
};
class VecScalarSaturatingRoundingDoublingHighMulISOp : public Op<VecScalarSaturatingRoundingDoublingHighMulISOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = VecScalarSaturatingRoundingDoublingHighMulISOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  a();
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr bAttr();
  APInt b();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value a, IntegerAttr b);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value a, IntegerAttr b);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value a, IntegerAttr b);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

