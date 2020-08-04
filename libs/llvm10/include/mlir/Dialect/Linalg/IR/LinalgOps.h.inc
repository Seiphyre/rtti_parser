/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class RangeOp;
class ReshapeOp;
class SliceOp;
class TransposeOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// linalg::RangeOp declarations
//===----------------------------------------------------------------------===//

class RangeOpOperandAdaptor {
public:
  RangeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  min();
  Value  max();
  Value  step();

private:
  ArrayRef<Value> tblgen_operands;
};
class RangeOp : public Op<RangeOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = RangeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  min();
  Value  max();
  Value  step();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *builder, OperationState &result, Value min, Value max, Value step);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value min, Value max, Value step);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value min, Value max, Value step);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// linalg::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpOperandAdaptor {
public:
  ReshapeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  view();

private:
  ArrayRef<Value> tblgen_operands;
};
class ReshapeOp : public Op<ReshapeOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ReshapeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  view();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr reassociationAttr();
  ArrayAttr reassociation();
  static void build(Builder *b, OperationState &result, Value view, ArrayRef<ArrayRef<AffineExpr>> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *b, OperationState &result, Type resultType, Value view,ArrayRef<ArrayRef<AffineExpr>> reassociation, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, ArrayAttr reassociation);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, ArrayAttr reassociation);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getReassociationAttrName() { return "reassociation"; }
    MemRefType getViewType() { return view().getType().cast<MemRefType>(); }
  
};

//===----------------------------------------------------------------------===//
// linalg::SliceOp declarations
//===----------------------------------------------------------------------===//

class SliceOpOperandAdaptor {
public:
  SliceOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  view();
  ArrayRef<Value> indexings();

private:
  ArrayRef<Value> tblgen_operands;
};
class SliceOp : public Op<SliceOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = SliceOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  view();
  Operation::operand_range indexings();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *b, OperationState &result, Value base, ValueRange indexings);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, ValueRange indexings);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, ValueRange indexings);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    enum { FirstIndexingOperand = 1 };
    unsigned getRank() { return getShapedType().getRank(); }
    Type getElementType() { return getShapedType().getElementType(); }
    ShapedType getShapedType() { return getType().cast<ShapedType>(); }
    unsigned getBaseViewRank() { return getBaseViewType().getRank(); }
    ShapedType getBaseViewType() { return view().getType().cast<ShapedType>();}

    // Get the underlying indexing at a given rank.
    Value indexing(unsigned rank) { return *(indexings().begin() + rank); }

    // Get the subset of indexings that are of RangeType.
    SmallVector<Value, 8> getRanges() {
      SmallVector<Value, 8> res;
      for (auto operand : indexings())
        if (!operand.getType().isa<IndexType>())
          res.push_back(operand);
      return res;
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpOperandAdaptor {
public:
  TransposeOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  view();

private:
  ArrayRef<Value> tblgen_operands;
};
class TransposeOp : public Op<TransposeOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = TransposeOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  view();
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr permutationAttr();
  AffineMap permutation();
  static void build(Builder *b, OperationState &result, Value view, AffineMapAttr permutation, ArrayRef<NamedAttribute> attrs = {});
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, AffineMapAttr permutation);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, AffineMapAttr permutation);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, AffineMap permutation);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, AffineMap permutation);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getPermutationAttrName() { return "permutation"; }
    ShapedType getShapedType() { return view().getType().cast<ShapedType>(); }
  
};

//===----------------------------------------------------------------------===//
// linalg::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpOperandAdaptor {
public:
  YieldOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> values();

private:
  ArrayRef<Value> tblgen_operands;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroResult, OpTrait::IsTerminator, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = YieldOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range values();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange values);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange values);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

