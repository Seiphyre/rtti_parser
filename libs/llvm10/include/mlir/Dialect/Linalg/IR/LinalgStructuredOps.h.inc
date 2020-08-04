/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ConvOp;
class CopyOp;
class DotOp;
class FillOp;
class GenericOp;
class IndexedGenericOp;
class MatmulOp;
class MatvecOp;

//===----------------------------------------------------------------------===//
// linalg::ConvOp declarations
//===----------------------------------------------------------------------===//

class ConvOpOperandAdaptor {
public:
  ConvOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  filter();
  Value  input();
  Value  output();

private:
  ArrayRef<Value> tblgen_operands;
};
class ConvOp : public Op<ConvOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = ConvOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  filter();
  Value  input();
  Value  output();
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr stridesAttr();
  Optional< ArrayAttr > strides();
  ArrayAttr dilationsAttr();
  Optional< ArrayAttr > dilations();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    // TODO(ntv) extend to support more than 1 dimensions and potentially
    // grouping too.
    unsigned getNumBatchDimensions() { return 1; }
    unsigned getNumInputFeatureDimensions() { return 1; }
    unsigned getNumOutputFeatureDimensions() { return 1; }

    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      // Outer parallel loops are always the number of output dimensions; i.e.
      // [ b, xs, q] in the TF notation above.
      unsigned nPar = getOutputShapedType(0).getRank();
      unsigned nRed = getNumInputFeatureDimensions();
      // Window loops are a special kind of reduction that is never tiled or
      // parallelized across; i.e. [zs] in the TF notation above whose number
      // match `xs` (i.e. 1 window loop per "image" dimension).
      // This may evolve in the future.
      unsigned nWin =
        nPar - getNumBatchDimensions() - getNumInputFeatureDimensions();
      MLIRContext *ctx = getContext();
      SmallVector<Attribute, 8> iters(
        nPar, StringAttr::get(getParallelIteratorTypeName(), ctx));
      iters.reserve(nPar + nRed + nWin);
      iters.append(nRed, StringAttr::get(getReductionIteratorTypeName(), ctx));
      iters.append(nWin, StringAttr::get(getWindowIteratorTypeName(), ctx));
      return ArrayAttr::get(iters, ctx);
    }

    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::CopyOp declarations
//===----------------------------------------------------------------------===//

class CopyOpOperandAdaptor {
public:
  CopyOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  input();
  Value  output();

private:
  ArrayRef<Value> tblgen_operands;
};
class CopyOp : public Op<CopyOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<1>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = CopyOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  input();
  Value  output();
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr inputPermutationAttr();
  Optional< AffineMap > inputPermutation();
  AffineMapAttr outputPermutationAttr();
  Optional< AffineMap > outputPermutation();
  static void build(Builder *builder, OperationState &result, Value input, Value output);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      unsigned nPar = input().getType().cast<ShapedType>().getRank();
      MLIRContext *ctx = getContext();
      SmallVector<Attribute, 8> iters(
        nPar, StringAttr::get(getParallelIteratorTypeName(), ctx));
      return ArrayAttr::get(iters, ctx);
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::DotOp declarations
//===----------------------------------------------------------------------===//

class DotOpOperandAdaptor {
public:
  DotOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class DotOp : public Op<DotOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = DotOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      MLIRContext *ctx = getContext();
      return ArrayAttr::get(
        StringAttr::get(getReductionIteratorTypeName(), ctx), ctx);
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::FillOp declarations
//===----------------------------------------------------------------------===//

class FillOpOperandAdaptor {
public:
  FillOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  Value  input();
  Value  value();

private:
  ArrayRef<Value> tblgen_operands;
};
class FillOp : public Op<FillOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<0>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = FillOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Value  input();
  Value  value();
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value input, Value value);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value input, Value value);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      unsigned nPar = input().getType().cast<ShapedType>().getRank();
      MLIRContext *ctx = getContext();
      SmallVector<Attribute, 8> iters(
        nPar, StringAttr::get(getParallelIteratorTypeName(), ctx));
      return ArrayAttr::get(iters, ctx);
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::GenericOp declarations
//===----------------------------------------------------------------------===//

class GenericOpOperandAdaptor {
public:
  GenericOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> views();

private:
  ArrayRef<Value> tblgen_operands;
};
class GenericOp : public Op<GenericOp, OpTrait::VariadicResults, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = GenericOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  IntegerAttr args_inAttr();
  APInt args_in();
  IntegerAttr args_outAttr();
  APInt args_out();
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  StringAttr docAttr();
  Optional< StringRef > doc();
  FlatSymbolRefAttr funAttr();
  Optional< StringRef > fun();
  StringAttr library_callAttr();
  Optional< StringRef > library_call();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getFunAttrName(), getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }
    unsigned getNumInputs() { return args_in().getSExtValue(); }
    unsigned getNumOutputs() { return args_out().getSExtValue(); }
    FuncOp getFunction() {
      auto moduleOp = getParentOfType<ModuleOp>();
      return fun().hasValue() ?
        moduleOp.lookupSymbol<FuncOp>(fun().getValue()) : FuncOp();
    }
    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }
    AffineMap getIndexingMap(unsigned i) {
      assert(i < getNumInputsAndOutputs());
      return indexing_maps().getValue()[i].cast<AffineMapAttr>().getValue();
    }
    AffineMap getInputIndexingMap(unsigned i) {
      assert(i < getNumInputs());
      return indexing_maps().getValue()[i].cast<AffineMapAttr>().getValue();
    }
    AffineMap getOutputIndexingMap(unsigned i) {
      assert(i < getNumOutputs());
      return indexing_maps().getValue()[i + getNumInputs()]
          .cast<AffineMapAttr>().getValue();
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp declarations
//===----------------------------------------------------------------------===//

class IndexedGenericOpOperandAdaptor {
public:
  IndexedGenericOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);
  ArrayRef<Value> views();

private:
  ArrayRef<Value> tblgen_operands;
};
class IndexedGenericOp : public Op<IndexedGenericOp, OpTrait::VariadicResults, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using OperandAdaptor = IndexedGenericOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  IntegerAttr args_inAttr();
  APInt args_in();
  IntegerAttr args_outAttr();
  APInt args_out();
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  StringAttr docAttr();
  Optional< StringRef > doc();
  FlatSymbolRefAttr funAttr();
  Optional< StringRef > fun();
  StringAttr library_callAttr();
  Optional< StringRef > library_call();
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getFunAttrName(), getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }
    unsigned getNumInputs() { return args_in().getSExtValue(); }
    unsigned getNumOutputs() { return args_out().getSExtValue(); }
    FuncOp getFunction() {
      auto moduleOp = getParentOfType<ModuleOp>();
      return fun().hasValue() ?
        moduleOp.lookupSymbol<FuncOp>(fun().getValue()) : FuncOp();
    }
    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }
    AffineMap getIndexingMap(unsigned i) {
      assert(i < getNumInputsAndOutputs());
      return indexing_maps().getValue()[i].cast<AffineMapAttr>().getValue();
    }
    AffineMap getInputIndexingMap(unsigned i) {
      assert(i < getNumInputs());
      return indexing_maps().getValue()[i].cast<AffineMapAttr>().getValue();
    }
    AffineMap getOutputIndexingMap(unsigned i) {
      assert(i < getNumOutputs());
      return indexing_maps().getValue()[i + getNumInputs()]
          .cast<AffineMapAttr>().getValue();
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::MatmulOp declarations
//===----------------------------------------------------------------------===//

class MatmulOpOperandAdaptor {
public:
  MatmulOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class MatmulOp : public Op<MatmulOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = MatmulOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      MLIRContext *ctx = getContext();
      Attribute iters[3]{
        StringAttr::get(getParallelIteratorTypeName(), ctx),
        StringAttr::get(getParallelIteratorTypeName(), ctx),
        StringAttr::get(getReductionIteratorTypeName(), ctx)};
      return ArrayAttr::get(iters, ctx);
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::MatvecOp declarations
//===----------------------------------------------------------------------===//

class MatvecOpOperandAdaptor {
public:
  MatvecOpOperandAdaptor(ArrayRef<Value> values);
  ArrayRef<Value> getODSOperands(unsigned index);

private:
  ArrayRef<Value> tblgen_operands;
};
class MatvecOp : public Op<MatvecOp, OpTrait::ZeroResult, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using OperandAdaptor = MatvecOpOperandAdaptor;
  static StringRef getOperationName();
  Operation::operand_range getODSOperands(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2);
  static void build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    ArrayAttr indexing_maps();

    ArrayAttr iterator_types() {
      MLIRContext *ctx = getContext();
      Attribute iters[2]{
        StringAttr::get(getParallelIteratorTypeName(), ctx),
        StringAttr::get(getReductionIteratorTypeName(), ctx)};
      return ArrayAttr::get(iters, ctx);
    }
  
};

#endif  // GET_OP_CLASSES

