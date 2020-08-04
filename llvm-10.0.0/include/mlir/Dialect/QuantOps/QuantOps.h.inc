/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ConstFakeQuant;
class ConstFakeQuantPerAxis;
class CoupledRefOp;
class DequantizeCastOp;
class QuantizeCastOp;
class StatisticsOp;
class StatisticsRefOp;
class StorageCastOp;

//===----------------------------------------------------------------------===//
// quant::ConstFakeQuant declarations
//===----------------------------------------------------------------------===//

class ConstFakeQuantOperandAdaptor {
public:
  ConstFakeQuantOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  inputs();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConstFakeQuant : public Op<ConstFakeQuant, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConstFakeQuantOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  inputs();
  Operation::result_range getODSResults(unsigned index);
  Value  outputs();
  FloatAttr minAttr();
  APFloat min();
  FloatAttr maxAttr();
  APFloat max();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  BoolAttr is_signedAttr();
  bool is_signed();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::ConstFakeQuantPerAxis declarations
//===----------------------------------------------------------------------===//

class ConstFakeQuantPerAxisOperandAdaptor {
public:
  ConstFakeQuantPerAxisOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  inputs();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConstFakeQuantPerAxis : public Op<ConstFakeQuantPerAxis, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ConstFakeQuantPerAxisOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  inputs();
  Operation::result_range getODSResults(unsigned index);
  Value  outputs();
  ArrayAttr minAttr();
  ArrayAttr min();
  ArrayAttr maxAttr();
  ArrayAttr max();
  IntegerAttr axisAttr();
  APInt axis();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  BoolAttr is_signedAttr();
  bool is_signed();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::CoupledRefOp declarations
//===----------------------------------------------------------------------===//

class CoupledRefOpOperandAdaptor {
public:
  CoupledRefOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class CoupledRefOp : public Op<CoupledRefOp, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = CoupledRefOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  StringAttr coupledKeyAttr();
  StringRef coupledKey();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringAttr coupledKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringAttr coupledKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringRef coupledKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringRef coupledKey);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, StringAttr coupledKey);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::DequantizeCastOp declarations
//===----------------------------------------------------------------------===//

class DequantizeCastOpOperandAdaptor {
public:
  DequantizeCastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class DequantizeCastOp : public Op<DequantizeCastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = DequantizeCastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::QuantizeCastOp declarations
//===----------------------------------------------------------------------===//

class QuantizeCastOpOperandAdaptor {
public:
  QuantizeCastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class QuantizeCastOp : public Op<QuantizeCastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = QuantizeCastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StatisticsOp declarations
//===----------------------------------------------------------------------===//

class StatisticsOpOperandAdaptor {
public:
  StatisticsOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class StatisticsOp : public Op<StatisticsOp, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = StatisticsOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  ElementsAttr layerStatsAttr();
  ElementsAttr layerStats();
  ElementsAttr axisStatsAttr();
  Optional< ElementsAttr > axisStats();
  IntegerAttr axisAttr();
  Optional< APInt > axis();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StatisticsRefOp declarations
//===----------------------------------------------------------------------===//

class StatisticsRefOpOperandAdaptor {
public:
  StatisticsRefOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class StatisticsRefOp : public Op<StatisticsRefOp, OpTrait::OneResult, OpTrait::SameOperandsAndResultType, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = StatisticsRefOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  StringAttr statsKeyAttr();
  StringRef statsKey();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringAttr statsKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringAttr statsKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringRef statsKey);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringRef statsKey);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, StringAttr statsKey);
  static void build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StorageCastOp declarations
//===----------------------------------------------------------------------===//

class StorageCastOpOperandAdaptor {
public:
  StorageCastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  arg();

private:
  ArrayRef<Value> tblgen_operands;
};
class StorageCastOp : public Op<StorageCastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = StorageCastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  arg();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
};

#endif  // GET_OP_CLASSES

