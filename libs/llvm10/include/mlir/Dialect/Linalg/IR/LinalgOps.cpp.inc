/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

linalg::RangeOp,
linalg::ReshapeOp,
linalg::SliceOp,
linalg::TransposeOp,
linalg::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::RangeOp definitions
//===----------------------------------------------------------------------===//

RangeOpOperandAdaptor::RangeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> RangeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  RangeOpOperandAdaptor::min() {
  return *getODSOperands(0).begin();
}

Value  RangeOpOperandAdaptor::max() {
  return *getODSOperands(1).begin();
}

Value  RangeOpOperandAdaptor::step() {
  return *getODSOperands(2).begin();
}

StringRef RangeOp::getOperationName() {
  return "linalg.range";
}

Operation::operand_range RangeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  RangeOp::min() {
  return *getODSOperands(0).begin();
}

Value  RangeOp::max() {
  return *getODSOperands(1).begin();
}

Value  RangeOp::step() {
  return *getODSOperands(2).begin();
}

Operation::result_range RangeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void RangeOp::build(Builder *builder, OperationState &result, Value min, Value max, Value step) {
      auto rangeType = RangeType::get(builder->getContext());
      build(builder, result, rangeType, min, max, step);
    
}

void RangeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value min, Value max, Value step) {
  tblgen_state.addOperands(min);
  tblgen_state.addOperands(max);
  tblgen_state.addOperands(step);
  tblgen_state.addTypes(resultType0);
}

void RangeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value min, Value max, Value step) {
  tblgen_state.addOperands(min);
  tblgen_state.addOperands(max);
  tblgen_state.addOperands(step);
  tblgen_state.addTypes(resultTypes);
}

void RangeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult RangeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseRangeOp(parser, result);
}

void RangeOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult RangeOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<RangeType>()))) {
        return emitOpError("result #") << index << " must be range, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// linalg::ReshapeOp definitions
//===----------------------------------------------------------------------===//

ReshapeOpOperandAdaptor::ReshapeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReshapeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ReshapeOpOperandAdaptor::view() {
  return *getODSOperands(0).begin();
}

StringRef ReshapeOp::getOperationName() {
  return "linalg.reshape";
}

Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ReshapeOp::view() {
  return *getODSOperands(0).begin();
}

Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ReshapeOp::reassociationAttr() {
  return this->getAttr("reassociation").cast<ArrayAttr>();
}

ArrayAttr ReshapeOp::reassociation() {
  auto attr = reassociationAttr();
  return attr;
}





void ReshapeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, ArrayAttr reassociation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("reassociation", reassociation);
  tblgen_state.addTypes(resultType0);
}

void ReshapeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, ArrayAttr reassociation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("reassociation", reassociation);
  tblgen_state.addTypes(resultTypes);
}

void ReshapeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReshapeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReshapeOp(parser, result);
}

void ReshapeOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReshapeOp::verify() {
  auto tblgen_reassociation = this->getAttr("reassociation");
  if (!tblgen_reassociation) return emitOpError("requires attribute 'reassociation'");
  {
    if (!(((tblgen_reassociation.isa<ArrayAttr>())) && (llvm::all_of(tblgen_reassociation.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitOpError("attribute 'reassociation' failed to satisfy constraint: AffineMap array attribute");
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
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::SliceOp definitions
//===----------------------------------------------------------------------===//

SliceOpOperandAdaptor::SliceOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SliceOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  SliceOpOperandAdaptor::view() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> SliceOpOperandAdaptor::indexings() {
  return getODSOperands(1);
}

StringRef SliceOp::getOperationName() {
  return "linalg.slice";
}

Operation::operand_range SliceOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  SliceOp::view() {
  return *getODSOperands(0).begin();
}

Operation::operand_range SliceOp::indexings() {
  return getODSOperands(1);
}

Operation::result_range SliceOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}



void SliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, ValueRange indexings) {
  tblgen_state.addOperands(view);
  tblgen_state.addOperands(indexings);
  tblgen_state.addTypes(resultType0);
}

void SliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, ValueRange indexings) {
  tblgen_state.addOperands(view);
  tblgen_state.addOperands(indexings);
  tblgen_state.addTypes(resultTypes);
}

void SliceOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SliceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSliceOp(parser, result);
}

void SliceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SliceOp::verify() {
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
      if (!(((v.getType().isa<RangeType>())) || ((v.getType().isa<IndexType>())))) {
        return emitOpError("operand #") << index << " must be range or index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// linalg::TransposeOp definitions
//===----------------------------------------------------------------------===//

TransposeOpOperandAdaptor::TransposeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TransposeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TransposeOpOperandAdaptor::view() {
  return *getODSOperands(0).begin();
}

StringRef TransposeOp::getOperationName() {
  return "linalg.transpose";
}

Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TransposeOp::view() {
  return *getODSOperands(0).begin();
}

Operation::result_range TransposeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

AffineMapAttr TransposeOp::permutationAttr() {
  return this->getAttr("permutation").cast<AffineMapAttr>();
}

AffineMap TransposeOp::permutation() {
  auto attr = permutationAttr();
  return attr.getValue();
}



void TransposeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, AffineMapAttr permutation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("permutation", permutation);
  tblgen_state.addTypes(resultType0);
}

void TransposeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, AffineMapAttr permutation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("permutation", permutation);
  tblgen_state.addTypes(resultTypes);
}

void TransposeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value view, AffineMap permutation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("permutation", AffineMapAttr::get(permutation));
  tblgen_state.addTypes(resultType0);
}

void TransposeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value view, AffineMap permutation) {
  tblgen_state.addOperands(view);
  tblgen_state.addAttribute("permutation", AffineMapAttr::get(permutation));
  tblgen_state.addTypes(resultTypes);
}

void TransposeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TransposeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransposeOp(parser, result);
}

void TransposeOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransposeOp::verify() {
  auto tblgen_permutation = this->getAttr("permutation");
  if (!tblgen_permutation) return emitOpError("requires attribute 'permutation'");
  {
    if (!((tblgen_permutation.isa<AffineMapAttr>()))) return emitOpError("attribute 'permutation' failed to satisfy constraint: AffineMap attribute");
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
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  if (!permutation().isPermutation())
      return emitOpError("expected a permutation map");
    if (permutation().getNumDims() != getShapedType().getRank())
      return emitOpError("expected a permutation map of same rank as the view");
    return success();
}


//===----------------------------------------------------------------------===//
// linalg::YieldOp definitions
//===----------------------------------------------------------------------===//

YieldOpOperandAdaptor::YieldOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> YieldOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> YieldOpOperandAdaptor::values() {
  return getODSOperands(0);
}

StringRef YieldOp::getOperationName() {
  return "linalg.yield";
}

Operation::operand_range YieldOp::getODSOperands(unsigned index) {
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

Operation::operand_range YieldOp::values() {
  return getODSOperands(0);
}

Operation::result_range YieldOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void YieldOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ValueRange values) {
  tblgen_state.addOperands(values);
}

void YieldOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange values) {
  tblgen_state.addOperands(values);
  tblgen_state.addTypes(resultTypes);
}

void YieldOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult YieldOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseYieldOp(parser, result);
}

void YieldOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult YieldOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
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


#endif  // GET_OP_CLASSES

