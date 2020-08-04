/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

linalg::ConvOp,
linalg::CopyOp,
linalg::DotOp,
linalg::FillOp,
linalg::GenericOp,
linalg::IndexedGenericOp,
linalg::MatmulOp,
linalg::MatvecOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::ConvOp definitions
//===----------------------------------------------------------------------===//

ConvOpOperandAdaptor::ConvOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvOpOperandAdaptor::filter() {
  return *getODSOperands(0).begin();
}

Value  ConvOpOperandAdaptor::input() {
  return *getODSOperands(1).begin();
}

Value  ConvOpOperandAdaptor::output() {
  return *getODSOperands(2).begin();
}

StringRef ConvOp::getOperationName() {
  return "linalg.conv";
}

Operation::operand_range ConvOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvOp::filter() {
  return *getODSOperands(0).begin();
}

Value  ConvOp::input() {
  return *getODSOperands(1).begin();
}

Value  ConvOp::output() {
  return *getODSOperands(2).begin();
}

Operation::result_range ConvOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ConvOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ConvOp::strides() {
  auto attr = stridesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr ConvOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ConvOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

void ConvOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations) {
  tblgen_state.addOperands(filter);
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(output);
  if (strides) {
  tblgen_state.addAttribute("strides", strides);
  }
  if (dilations) {
  tblgen_state.addAttribute("dilations", dilations);
  }
}

void ConvOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations) {
  tblgen_state.addOperands(filter);
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(output);
  if (strides) {
  tblgen_state.addAttribute("strides", strides);
  }
  if (dilations) {
  tblgen_state.addAttribute("dilations", dilations);
  }
  tblgen_state.addTypes(resultTypes);
}

void ConvOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConvOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void ConvOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult ConvOp::verify() {
  auto tblgen_strides = this->getAttr("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_dilations = this->getAttr("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<ArrayAttr>())) && (llvm::all_of(tblgen_dilations.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::CopyOp definitions
//===----------------------------------------------------------------------===//

CopyOpOperandAdaptor::CopyOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CopyOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CopyOpOperandAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value  CopyOpOperandAdaptor::output() {
  return *getODSOperands(1).begin();
}

StringRef CopyOp::getOperationName() {
  return "linalg.copy";
}

Operation::operand_range CopyOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CopyOp::input() {
  return *getODSOperands(0).begin();
}

Value  CopyOp::output() {
  return *getODSOperands(1).begin();
}

Operation::result_range CopyOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

AffineMapAttr CopyOp::inputPermutationAttr() {
  return this->getAttr("inputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

Optional< AffineMap > CopyOp::inputPermutation() {
  auto attr = inputPermutationAttr();
  return attr ? Optional< AffineMap >(attr.getValue()) : (llvm::None);
}

AffineMapAttr CopyOp::outputPermutationAttr() {
  return this->getAttr("outputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

Optional< AffineMap > CopyOp::outputPermutation() {
  auto attr = outputPermutationAttr();
  return attr ? Optional< AffineMap >(attr.getValue()) : (llvm::None);
}

void CopyOp::build(Builder *builder, OperationState &result, Value input, Value output) {
    return build(
      builder, result, input, output, AffineMapAttr(), AffineMapAttr());
  
}

void CopyOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(output);
  if (inputPermutation) {
  tblgen_state.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  tblgen_state.addAttribute("outputPermutation", outputPermutation);
  }
}

void CopyOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(output);
  if (inputPermutation) {
  tblgen_state.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  tblgen_state.addAttribute("outputPermutation", outputPermutation);
  }
  tblgen_state.addTypes(resultTypes);
}

void CopyOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CopyOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void CopyOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult CopyOp::verify() {
  auto tblgen_inputPermutation = this->getAttr("inputPermutation");
  if (tblgen_inputPermutation) {
    if (!((tblgen_inputPermutation.isa<AffineMapAttr>()))) return emitOpError("attribute 'inputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  auto tblgen_outputPermutation = this->getAttr("outputPermutation");
  if (tblgen_outputPermutation) {
    if (!((tblgen_outputPermutation.isa<AffineMapAttr>()))) return emitOpError("attribute 'outputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::DotOp definitions
//===----------------------------------------------------------------------===//

DotOpOperandAdaptor::DotOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> DotOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef DotOp::getOperationName() {
  return "linalg.dot";
}

Operation::operand_range DotOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range DotOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void DotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
}

void DotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
  tblgen_state.addTypes(resultTypes);
}

void DotOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult DotOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void DotOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult DotOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 0)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 0, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// linalg::FillOp definitions
//===----------------------------------------------------------------------===//

FillOpOperandAdaptor::FillOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FillOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FillOpOperandAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value  FillOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef FillOp::getOperationName() {
  return "linalg.fill";
}

Operation::operand_range FillOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FillOp::input() {
  return *getODSOperands(0).begin();
}

Value  FillOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range FillOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void FillOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value input, Value value) {
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(value);
}

void FillOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value input, Value value) {
  tblgen_state.addOperands(input);
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultTypes);
}

void FillOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FillOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void FillOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult FillOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || ((v.getType().isa<IntegerType>())) || (((v.getType().isa<VectorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be floating-point or integer or vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::GenericOp definitions
//===----------------------------------------------------------------------===//

GenericOpOperandAdaptor::GenericOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GenericOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

ArrayRef<Value> GenericOpOperandAdaptor::views() {
  return getODSOperands(0);
}

StringRef GenericOp::getOperationName() {
  return "linalg.generic";
}

Operation::operand_range GenericOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Operation::operand_range GenericOp::views() {
  return getODSOperands(0);
}

Operation::result_range GenericOp::getODSResults(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic result corresponds to.
  // This assumes all static variadic results have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // result (variadic or not) as size 1. So here for each previous static variadic
  // result, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static result starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->result_begin(), offset), std::next(getOperation()->result_begin(), offset + size)};
}

Operation::result_range GenericOp::output_tensors() {
  return getODSResults(0);
}

Region &GenericOp::region() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr GenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<IntegerAttr>();
}

APInt GenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

IntegerAttr GenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<IntegerAttr>();
}

APInt GenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

ArrayAttr GenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr GenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr GenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr GenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

StringAttr GenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > GenericOp::doc() {
  auto attr = docAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

FlatSymbolRefAttr GenericOp::funAttr() {
  return this->getAttr("fun").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > GenericOp::fun() {
  auto attr = funAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

StringAttr GenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > GenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void GenericOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call) {
  tblgen_state.addOperands(views);
  tblgen_state.addAttribute("args_in", args_in);
  tblgen_state.addAttribute("args_out", args_out);
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  if (doc) {
  tblgen_state.addAttribute("doc", doc);
  }
  if (fun) {
  tblgen_state.addAttribute("fun", fun);
  }
  if (library_call) {
  tblgen_state.addAttribute("library_call", library_call);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(output_tensors);
}

void GenericOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call) {
  tblgen_state.addOperands(views);
  tblgen_state.addAttribute("args_in", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), args_in));
  tblgen_state.addAttribute("args_out", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), args_out));
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  if (doc) {
  tblgen_state.addAttribute("doc", doc);
  }
  if (fun) {
  tblgen_state.addAttribute("fun", fun);
  }
  if (library_call) {
  tblgen_state.addAttribute("library_call", library_call);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(output_tensors);
}

void GenericOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

ParseResult GenericOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void GenericOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult GenericOp::verify() {
  auto tblgen_args_in = this->getAttr("args_in");
  if (!tblgen_args_in) return emitOpError("requires attribute 'args_in'");
  {
    if (!(((tblgen_args_in.isa<IntegerAttr>())) && ((tblgen_args_in.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'args_in' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_args_out = this->getAttr("args_out");
  if (!tblgen_args_out) return emitOpError("requires attribute 'args_out'");
  {
    if (!(((tblgen_args_out.isa<IntegerAttr>())) && ((tblgen_args_out.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'args_out' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_indexing_maps = this->getAttr("indexing_maps");
  if (!tblgen_indexing_maps) return emitOpError("requires attribute 'indexing_maps'");
  {
    if (!(((tblgen_indexing_maps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indexing_maps.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitOpError("attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  auto tblgen_iterator_types = this->getAttr("iterator_types");
  if (!tblgen_iterator_types) return emitOpError("requires attribute 'iterator_types'");
  {
    if (!((tblgen_iterator_types.isa<ArrayAttr>()))) return emitOpError("attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  auto tblgen_doc = this->getAttr("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<StringAttr>()))) return emitOpError("attribute 'doc' failed to satisfy constraint: string attribute");
  }
  auto tblgen_fun = this->getAttr("fun");
  if (tblgen_fun) {
    if (!((tblgen_fun.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'fun' failed to satisfy constraint: flat symbol reference attribute");
  }
  auto tblgen_library_call = this->getAttr("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<StringAttr>()))) return emitOpError("attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_248, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((true))) {
    return emitOpError("region #0 ('region') failed to verify constraint: any region");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp definitions
//===----------------------------------------------------------------------===//

IndexedGenericOpOperandAdaptor::IndexedGenericOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IndexedGenericOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

ArrayRef<Value> IndexedGenericOpOperandAdaptor::views() {
  return getODSOperands(0);
}

StringRef IndexedGenericOp::getOperationName() {
  return "linalg.indexed_generic";
}

Operation::operand_range IndexedGenericOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Operation::operand_range IndexedGenericOp::views() {
  return getODSOperands(0);
}

Operation::result_range IndexedGenericOp::getODSResults(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic result corresponds to.
  // This assumes all static variadic results have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // result (variadic or not) as size 1. So here for each previous static variadic
  // result, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static result starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->result_begin(), offset), std::next(getOperation()->result_begin(), offset + size)};
}

Operation::result_range IndexedGenericOp::output_tensors() {
  return getODSResults(0);
}

Region &IndexedGenericOp::region() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr IndexedGenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<IntegerAttr>();
}

APInt IndexedGenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

IntegerAttr IndexedGenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<IntegerAttr>();
}

APInt IndexedGenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

ArrayAttr IndexedGenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr IndexedGenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr IndexedGenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr IndexedGenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

StringAttr IndexedGenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > IndexedGenericOp::doc() {
  auto attr = docAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

FlatSymbolRefAttr IndexedGenericOp::funAttr() {
  return this->getAttr("fun").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > IndexedGenericOp::fun() {
  auto attr = funAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

StringAttr IndexedGenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > IndexedGenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void IndexedGenericOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call) {
  tblgen_state.addOperands(views);
  tblgen_state.addAttribute("args_in", args_in);
  tblgen_state.addAttribute("args_out", args_out);
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  if (doc) {
  tblgen_state.addAttribute("doc", doc);
  }
  if (fun) {
  tblgen_state.addAttribute("fun", fun);
  }
  if (library_call) {
  tblgen_state.addAttribute("library_call", library_call);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(output_tensors);
}

void IndexedGenericOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/FlatSymbolRefAttr fun, /*optional*/StringAttr library_call) {
  tblgen_state.addOperands(views);
  tblgen_state.addAttribute("args_in", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), args_in));
  tblgen_state.addAttribute("args_out", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), args_out));
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  if (doc) {
  tblgen_state.addAttribute("doc", doc);
  }
  if (fun) {
  tblgen_state.addAttribute("fun", fun);
  }
  if (library_call) {
  tblgen_state.addAttribute("library_call", library_call);
  }
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(output_tensors);
}

void IndexedGenericOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

ParseResult IndexedGenericOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void IndexedGenericOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult IndexedGenericOp::verify() {
  auto tblgen_args_in = this->getAttr("args_in");
  if (!tblgen_args_in) return emitOpError("requires attribute 'args_in'");
  {
    if (!(((tblgen_args_in.isa<IntegerAttr>())) && ((tblgen_args_in.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'args_in' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_args_out = this->getAttr("args_out");
  if (!tblgen_args_out) return emitOpError("requires attribute 'args_out'");
  {
    if (!(((tblgen_args_out.isa<IntegerAttr>())) && ((tblgen_args_out.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'args_out' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_indexing_maps = this->getAttr("indexing_maps");
  if (!tblgen_indexing_maps) return emitOpError("requires attribute 'indexing_maps'");
  {
    if (!(((tblgen_indexing_maps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indexing_maps.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitOpError("attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  auto tblgen_iterator_types = this->getAttr("iterator_types");
  if (!tblgen_iterator_types) return emitOpError("requires attribute 'iterator_types'");
  {
    if (!((tblgen_iterator_types.isa<ArrayAttr>()))) return emitOpError("attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  auto tblgen_doc = this->getAttr("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<StringAttr>()))) return emitOpError("attribute 'doc' failed to satisfy constraint: string attribute");
  }
  auto tblgen_fun = this->getAttr("fun");
  if (tblgen_fun) {
    if (!((tblgen_fun.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'fun' failed to satisfy constraint: flat symbol reference attribute");
  }
  auto tblgen_library_call = this->getAttr("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<StringAttr>()))) return emitOpError("attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_248, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((true))) {
    return emitOpError("region #0 ('region') failed to verify constraint: any region");
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::MatmulOp definitions
//===----------------------------------------------------------------------===//

MatmulOpOperandAdaptor::MatmulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MatmulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef MatmulOp::getOperationName() {
  return "linalg.matmul";
}

Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range MatmulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MatmulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
}

void MatmulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
  tblgen_state.addTypes(resultTypes);
}

void MatmulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MatmulOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void MatmulOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult MatmulOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 2)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 2, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 2)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 2, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 2)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 2, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// linalg::MatvecOp definitions
//===----------------------------------------------------------------------===//

MatvecOpOperandAdaptor::MatvecOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MatvecOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef MatvecOp::getOperationName() {
  return "linalg.matvec";
}

Operation::operand_range MatvecOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range MatvecOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MatvecOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
}

void MatvecOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value tblgen_arg_0, Value tblgen_arg_1, Value tblgen_arg_2) {
  tblgen_state.addOperands(tblgen_arg_0);
  tblgen_state.addOperands(tblgen_arg_1);
  tblgen_state.addOperands(tblgen_arg_2);
  tblgen_state.addTypes(resultTypes);
}

void MatvecOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MatvecOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLinalgStructuredOp(parser, result);
}

void MatvecOp::print(OpAsmPrinter &p) {
  printLinalgStructuredOp(p, *this);
}

LogicalResult MatvecOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 2)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 2, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


#endif  // GET_OP_CLASSES

