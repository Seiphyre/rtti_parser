/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class BroadcastOp;
class ConstantMaskOp;
class ContractionOp;
class CreateMaskOp;
class ExtractElementOp;
class ExtractOp;
class ExtractSlicesOp;
class InsertElementOp;
class InsertOp;
class InsertSlicesOp;
class InsertStridedSliceOp;
class OuterProductOp;
class PrintOp;
class ReshapeOp;
class ShuffleOp;
class StridedSliceOp;
class TransferReadOp;
class TransferWriteOp;
class TupleGetOp;
class TupleOp;
class TypeCastOp;

//===----------------------------------------------------------------------===//
// vector::BroadcastOp declarations
//===----------------------------------------------------------------------===//

class BroadcastOpOperandAdaptor {
public:
  BroadcastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  source();

private:
  ArrayRef<Value> tblgen_operands;
};
class BroadcastOp : public Op<BroadcastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = BroadcastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  source();
  Operation::result_range getODSResults(unsigned index);
  Value  vector();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value source);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    Type getSourceType() { return source().getType(); }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ConstantMaskOp declarations
//===----------------------------------------------------------------------===//

class ConstantMaskOpOperandAdaptor {
public:
  ConstantMaskOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class ConstantMaskOp : public Op<ConstantMaskOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using OperandAdaptor = ConstantMaskOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr mask_dim_sizesAttr();
  ArrayAttr mask_dim_sizes();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ArrayAttr mask_dim_sizes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ArrayAttr mask_dim_sizes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getMaskDimSizesAttrName() { return "mask_dim_sizes"; }
  
};

//===----------------------------------------------------------------------===//
// vector::ContractionOp declarations
//===----------------------------------------------------------------------===//

class ContractionOpOperandAdaptor {
public:
  ContractionOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Value  acc();
  ArrayRef<Value> masks();

private:
  ArrayRef<Value> tblgen_operands;
};
class ContractionOp : public Op<ContractionOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::AtLeastNOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ContractionOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Value  acc();
  Operation::operand_range masks();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  static void build(Builder *builder, OperationState &result, Value lhs, Value rhs, Value acc, ArrayAttr indexingMaps, ArrayAttr iteratorTypes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getLhsType() {
      return lhs().getType().cast<VectorType>();
    }
    VectorType getRhsType() {
      return rhs().getType().cast<VectorType>();
    }
    VectorType getAccType() {
      return acc().getType().cast<VectorType>();
    }
    VectorType getLHSVectorMaskType() {
      if (llvm::size(masks()) != 2) return VectorType();
      return getOperand(3).getType().cast<VectorType>();
    }
    VectorType getRHSVectorMaskType() {
      if (llvm::size(masks()) != 2) return VectorType();
      return getOperand(4).getType().cast<VectorType>();
    }
    VectorType getResultType() {
      return getResult().getType().cast<VectorType>();
    }
    ArrayRef<StringRef> getTraitAttrNames();
    SmallVector<AffineMap, 4> getIndexingMaps();
    static unsigned getAccOperandIndex() { return 2; }

    // Returns the bounds of each dimension in the iteration space spanned
    // by the iterator types of this operation.
    void getIterationBounds(SmallVectorImpl<int64_t> &iterationBounds);

    // Returns a list of index maps, where there is a list entry for each
    // op indexing map attribute (i.e. one for each input and output, with
    // the output listed last). Each index map, maps from this operations
    // iteration space, to vector dimensions of the maps input/output.
    void getIterationIndexMap(
      std::vector<DenseMap<int64_t, int64_t>> &iterationIndexMap);

    std::vector<std::pair<int64_t, int64_t>> getContractingDimMap();
    std::vector<std::pair<int64_t, int64_t>> getBatchDimMap();
  
};

//===----------------------------------------------------------------------===//
// vector::CreateMaskOp declarations
//===----------------------------------------------------------------------===//

class CreateMaskOpOperandAdaptor {
public:
  CreateMaskOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> operands();

private:
  ArrayRef<Value> tblgen_operands;
};
class CreateMaskOp : public Op<CreateMaskOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = CreateMaskOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ValueRange operands);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
};

//===----------------------------------------------------------------------===//
// vector::ExtractElementOp declarations
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
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, Value position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ExtractOp declarations
//===----------------------------------------------------------------------===//

class ExtractOpOperandAdaptor {
public:
  ExtractOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();

private:
  ArrayRef<Value> tblgen_operands;
};
class ExtractOp : public Op<ExtractOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ExtractOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr positionAttr();
  ArrayAttr position();
  static void build(Builder *builder, OperationState &result, Value source,ArrayRef<int64_t>);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getPositionAttrName() { return "position"; }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ExtractSlicesOp declarations
//===----------------------------------------------------------------------===//

class ExtractSlicesOpOperandAdaptor {
public:
  ExtractSlicesOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();

private:
  ArrayRef<Value> tblgen_operands;
};
class ExtractSlicesOp : public Op<ExtractSlicesOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = ExtractSlicesOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  static void build(Builder *builder, OperationState &result, TupleType tupleType, Value vector, ArrayRef<int64_t> sizes, ArrayRef<int64_t> strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getSourceVectorType() {
      return vector().getType().cast<VectorType>();
    }
    TupleType getResultTupleType() {
      return getResult().getType().cast<TupleType>();
    }
    void getSizes(SmallVectorImpl<int64_t> &results);
    void getStrides(SmallVectorImpl<int64_t> &results);
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertElementOp declarations
//===----------------------------------------------------------------------===//

class InsertElementOpOperandAdaptor {
public:
  InsertElementOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  source();
  Value  dest();
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
  Value  source();
  Value  dest();
  Value  position();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, Value position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, Value position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    Type getSourceType() { return source().getType(); }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertOp declarations
//===----------------------------------------------------------------------===//

class InsertOpOperandAdaptor {
public:
  InsertOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  source();
  Value  dest();

private:
  ArrayRef<Value> tblgen_operands;
};
class InsertOp : public Op<InsertOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = InsertOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  source();
  Value  dest();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr positionAttr();
  ArrayAttr position();
  static void build(Builder *builder, OperationState &result, Value source, Value dest, ArrayRef<int64_t>);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, ArrayAttr position);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr position);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getPositionAttrName() { return "position"; }
    Type getSourceType() { return source().getType(); }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertSlicesOp declarations
//===----------------------------------------------------------------------===//

class InsertSlicesOpOperandAdaptor {
public:
  InsertSlicesOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vectors();

private:
  ArrayRef<Value> tblgen_operands;
};
class InsertSlicesOp : public Op<InsertSlicesOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = InsertSlicesOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vectors();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vectors, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vectors, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    TupleType getSourceTupleType() {
      return vectors().getType().cast<TupleType>();
    }
    VectorType getResultVectorType() {
      return getResult().getType().cast<VectorType>();
    }
    void getSizes(SmallVectorImpl<int64_t> &results);
    void getStrides(SmallVectorImpl<int64_t> &results);
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertStridedSliceOp declarations
//===----------------------------------------------------------------------===//

class InsertStridedSliceOpOperandAdaptor {
public:
  InsertStridedSliceOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  source();
  Value  dest();

private:
  ArrayRef<Value> tblgen_operands;
};
class InsertStridedSliceOp : public Op<InsertStridedSliceOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = InsertStridedSliceOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  source();
  Value  dest();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr offsetsAttr();
  ArrayAttr offsets();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  static void build(Builder *builder, OperationState &result, Value source, Value dest, ArrayRef<int64_t> offsets, ArrayRef<int64_t> strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getOffsetsAttrName() { return "offsets"; }
    static StringRef getStridesAttrName() { return "strides"; }
    VectorType getSourceVectorType() {
      return source().getType().cast<VectorType>();
    }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::OuterProductOp declarations
//===----------------------------------------------------------------------===//

class OuterProductOpOperandAdaptor {
public:
  OuterProductOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  ArrayRef<Value> acc();

private:
  ArrayRef<Value> tblgen_operands;
};
class OuterProductOp : public Op<OuterProductOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::SameOperandsAndResultElementType, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = OuterProductOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  lhs();
  Value  rhs();
  Operation::operand_range acc();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs, ValueRange acc);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, ValueRange acc);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getOperandVectorTypeLHS() {
      return lhs().getType().cast<VectorType>();
    }
    VectorType getOperandVectorTypeRHS() {
      return rhs().getType().cast<VectorType>();
    }
    VectorType getOperandVectorTypeACC() {
      return (llvm::size(acc()) == 0) ? VectorType() :
        (*acc().begin()).getType().cast<VectorType>();
    }
    VectorType getVectorType() {
      return getResult().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::PrintOp declarations
//===----------------------------------------------------------------------===//

class PrintOpOperandAdaptor {
public:
  PrintOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  source();

private:
  ArrayRef<Value> tblgen_operands;
};
class PrintOp : public Op<PrintOp, OpTrait::ZeroResult, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = PrintOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  source();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value source);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    Type getPrintType() {
      return source().getType();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOp : public Op<ReshapeOp, OpTrait::OneResult, OpTrait::AttrSizedOperandSegments, OpTrait::HasNoSideEffect, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Operation::operand_range input_shape();
  Operation::operand_range output_shape();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr fixed_vector_sizesAttr();
  ArrayAttr fixed_vector_sizes();
  DenseIntElementsAttr operand_segment_sizesAttr();
  DenseIntElementsAttr operand_segment_sizes();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes, DenseIntElementsAttr operand_segment_sizes);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes, DenseIntElementsAttr operand_segment_sizes);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getInputVectorType() {
      return vector().getType().cast<VectorType>();
    }
    VectorType getOutputVectorType() {
      return getResult().getType().cast<VectorType>();
    }

    /// Returns as integer value the number of input shape operands.
    int64_t getNumInputShapeSizes() { return input_shape().size(); }

    /// Returns as integer value the number of output shape operands.
    int64_t getNumOutputShapeSizes() { return output_shape().size(); }

    void getFixedVectorSizes(SmallVectorImpl<int64_t> &results);

    static StringRef getFixedVectorSizesAttrName() {
      return "fixed_vector_sizes";
    }
    static StringRef getInputShapeAttrName() { return "input_shape"; }
    static StringRef getOutputShapeAttrName() { return "output_shape"; }
  
};

//===----------------------------------------------------------------------===//
// vector::ShuffleOp declarations
//===----------------------------------------------------------------------===//

class ShuffleOpOperandAdaptor {
public:
  ShuffleOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  v1();
  Value  v2();

private:
  ArrayRef<Value> tblgen_operands;
};
class ShuffleOp : public Op<ShuffleOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ShuffleOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  v1();
  Value  v2();
  Operation::result_range getODSResults(unsigned index);
  Value  vector();
  ArrayAttr maskAttr();
  ArrayAttr mask();
  static void build(Builder *builder, OperationState &result,Value v1, Value v2, ArrayRef<int64_t>);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value v1, Value v2, ArrayAttr mask);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    static StringRef getMaskAttrName() { return "mask"; }
    VectorType getV1VectorType() {
      return v1().getType().cast<VectorType>();
    }
    VectorType getV2VectorType() {
      return v2().getType().cast<VectorType>();
    }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::StridedSliceOp declarations
//===----------------------------------------------------------------------===//

class StridedSliceOpOperandAdaptor {
public:
  StridedSliceOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();

private:
  ArrayRef<Value> tblgen_operands;
};
class StridedSliceOp : public Op<StridedSliceOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = StridedSliceOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr offsetsAttr();
  ArrayAttr offsets();
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  static void build(Builder *builder, OperationState &result, Value source, ArrayRef<int64_t> offsets, ArrayRef<int64_t> sizes, ArrayRef<int64_t> strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);

    static StringRef getOffsetsAttrName() { return "offsets"; }
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
    VectorType getVectorType(){ return vector().getType().cast<VectorType>(); }
    void getOffsets(SmallVectorImpl<int64_t> &results);
  
};

//===----------------------------------------------------------------------===//
// vector::TransferReadOp declarations
//===----------------------------------------------------------------------===//

class TransferReadOpOperandAdaptor {
public:
  TransferReadOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  memref();
  ArrayRef<Value> indices();
  Value  padding();

private:
  ArrayRef<Value> tblgen_operands;
};
class TransferReadOp : public Op<TransferReadOp, OpTrait::OneResult, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = TransferReadOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  memref();
  Operation::operand_range indices();
  Value  padding();
  Operation::result_range getODSResults(unsigned index);
  Value  vector();
  AffineMapAttr permutation_mapAttr();
  AffineMap permutation_map();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value memref, ValueRange indices, AffineMap permutation_map, Value padding);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMap permutation_map, Value padding);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::TransferWriteOp declarations
//===----------------------------------------------------------------------===//

class TransferWriteOpOperandAdaptor {
public:
  TransferWriteOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vector();
  Value  memref();
  ArrayRef<Value> indices();

private:
  ArrayRef<Value> tblgen_operands;
};
class TransferWriteOp : public Op<TransferWriteOp, OpTrait::ZeroResult, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = TransferWriteOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vector();
  Value  memref();
  Operation::operand_range indices();
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr permutation_mapAttr();
  AffineMap permutation_map();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value vector, Value memref, ValueRange indices, AffineMap permutation_map);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMap permutation_map);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::TupleGetOp declarations
//===----------------------------------------------------------------------===//

class TupleGetOpOperandAdaptor {
public:
  TupleGetOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  vectors();

private:
  ArrayRef<Value> tblgen_operands;
};
class TupleGetOp : public Op<TupleGetOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = TupleGetOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  vectors();
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr indexAttr();
  APInt index();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vectors, IntegerAttr index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vectors, IntegerAttr index);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    VectorType getResultVectorType() {
      return getResult().getType().cast<VectorType>();
    }
    int64_t getIndex() {
      return getAttrOfType<IntegerAttr>("index").getValue().getSExtValue();
    }
    static StringRef getIndexAttrName() { return "index"; }
  
};

//===----------------------------------------------------------------------===//
// vector::TupleOp declarations
//===----------------------------------------------------------------------===//

class TupleOpOperandAdaptor {
public:
  TupleOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> vectors();

private:
  ArrayRef<Value> tblgen_operands;
};
class TupleOp : public Op<TupleOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = TupleOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range vectors();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ValueRange vectors);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange vectors);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    TupleType getResultTupleType() {
      return getResult().getType().cast<TupleType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::TypeCastOp declarations
//===----------------------------------------------------------------------===//

class TypeCastOpOperandAdaptor {
public:
  TypeCastOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  memref();

private:
  ArrayRef<Value> tblgen_operands;
};
class TypeCastOp : public Op<TypeCastOp, OpTrait::OneResult, OpTrait::HasNoSideEffect, OpTrait::OneOperand> {
public:
  using Op::Op;
  using OperandAdaptor = TypeCastOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  memref();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *builder, OperationState &result, Value source);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value memref);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    MemRefType getResultMemRefType() {
      return getResult().getType().cast<MemRefType>();
    }
  
};

#endif  // GET_OP_CLASSES

