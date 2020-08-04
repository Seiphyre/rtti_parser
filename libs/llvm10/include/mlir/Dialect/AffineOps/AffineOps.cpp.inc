/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

AffineForOp,
AffineIfOp,
AffineMinOp,
AffinePrefetchOp,
AffineTerminatorOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// AffineForOp definitions
//===----------------------------------------------------------------------===//

AffineForOpOperandAdaptor::AffineForOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AffineForOpOperandAdaptor::getODSOperands(unsigned index) {
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

StringRef AffineForOp::getOperationName() {
  return "affine.for";
}

Operation::operand_range AffineForOp::getODSOperands(unsigned index) {
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

Operation::result_range AffineForOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &AffineForOp::region() {
  return this->getOperation()->getRegion(0);
}





ParseResult AffineForOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineForOp(parser, result);
}

void AffineForOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineForOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('region') failed to verify constraint: region with 1 blocks");
  }
  return ::verify(*this);
}












//===----------------------------------------------------------------------===//
// AffineIfOp definitions
//===----------------------------------------------------------------------===//

AffineIfOpOperandAdaptor::AffineIfOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AffineIfOpOperandAdaptor::getODSOperands(unsigned index) {
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

StringRef AffineIfOp::getOperationName() {
  return "affine.if";
}

Operation::operand_range AffineIfOp::getODSOperands(unsigned index) {
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

Operation::result_range AffineIfOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &AffineIfOp::thenRegion() {
  return this->getOperation()->getRegion(0);
}

Region &AffineIfOp::elseRegion() {
  return this->getOperation()->getRegion(1);
}



ParseResult AffineIfOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineIfOp(parser, result);
}

void AffineIfOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineIfOp::verify() {
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
  if (this->getOperation()->getNumRegions() != 2) {
    return emitOpError("has incorrect number of regions: expected 2 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('thenRegion') failed to verify constraint: region with 1 blocks");
  }
  if (!((true))) {
    return emitOpError("region #1 ('elseRegion') failed to verify constraint: any region");
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// AffineMinOp definitions
//===----------------------------------------------------------------------===//

AffineMinOpOperandAdaptor::AffineMinOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AffineMinOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> AffineMinOpOperandAdaptor::operands() {
  return getODSOperands(0);
}

StringRef AffineMinOp::getOperationName() {
  return "affine.min";
}

Operation::operand_range AffineMinOp::getODSOperands(unsigned index) {
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

Operation::operand_range AffineMinOp::operands() {
  return getODSOperands(0);
}

Operation::result_range AffineMinOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

AffineMapAttr AffineMinOp::mapAttr() {
  return this->getAttr("map").cast<AffineMapAttr>();
}

AffineMap AffineMinOp::map() {
  auto attr = mapAttr();
  return attr.getValue();
}

void AffineMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, AffineMapAttr map, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("map", map);
  tblgen_state.addTypes(resultType0);
}

void AffineMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("map", map);
  tblgen_state.addTypes(resultTypes);
}

void AffineMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, AffineMap map, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("map", AffineMapAttr::get(map));
  tblgen_state.addTypes(resultType0);
}

void AffineMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addAttribute("map", AffineMapAttr::get(map));
  tblgen_state.addTypes(resultTypes);
}

void AffineMinOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AffineMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineMinOp(parser, result);
}

void AffineMinOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineMinOp::verify() {
  auto tblgen_map = this->getAttr("map");
  if (!tblgen_map) return emitOpError("requires attribute 'map'");
  {
    if (!((tblgen_map.isa<AffineMapAttr>()))) return emitOpError("attribute 'map' failed to satisfy constraint: AffineMap attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
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
// AffinePrefetchOp definitions
//===----------------------------------------------------------------------===//

AffinePrefetchOpOperandAdaptor::AffinePrefetchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AffinePrefetchOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  AffinePrefetchOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> AffinePrefetchOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef AffinePrefetchOp::getOperationName() {
  return "affine.prefetch";
}

Operation::operand_range AffinePrefetchOp::getODSOperands(unsigned index) {
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

Value  AffinePrefetchOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range AffinePrefetchOp::indices() {
  return getODSOperands(1);
}

Operation::result_range AffinePrefetchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

BoolAttr AffinePrefetchOp::isWriteAttr() {
  return this->getAttr("isWrite").cast<BoolAttr>();
}

bool AffinePrefetchOp::isWrite() {
  auto attr = isWriteAttr();
  return attr.getValue();
}

IntegerAttr AffinePrefetchOp::localityHintAttr() {
  return this->getAttr("localityHint").cast<IntegerAttr>();
}

APInt AffinePrefetchOp::localityHint() {
  auto attr = localityHintAttr();
  return attr.getValue();
}

BoolAttr AffinePrefetchOp::isDataCacheAttr() {
  return this->getAttr("isDataCache").cast<BoolAttr>();
}

bool AffinePrefetchOp::isDataCache() {
  auto attr = isDataCacheAttr();
  return attr.getValue();
}

void AffinePrefetchOp::build(Builder *builder, OperationState &result, Value memref,AffineMap map, ArrayRef<Value> mapOperands, bool isWrite,unsigned localityHint, bool isDataCache) {
      assert(map.getNumInputs() == mapOperands.size()
             && "inconsistent index info");
      auto localityHintAttr = builder->getI32IntegerAttr(localityHint);
      auto isWriteAttr = builder->getBoolAttr(isWrite);
      auto isDataCacheAttr = builder->getBoolAttr(isDataCache);
      result.addOperands(memref);
      result.addAttribute(getMapAttrName(), AffineMapAttr::get(map));
      result.addOperands(mapOperands);
      result.addAttribute(getLocalityHintAttrName(), localityHintAttr);
      result.addAttribute(getIsWriteAttrName(), isWriteAttr);
      result.addAttribute(getIsDataCacheAttrName(), isDataCacheAttr);
    
}

void AffinePrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", isWrite);
  tblgen_state.addAttribute("localityHint", localityHint);
  tblgen_state.addAttribute("isDataCache", isDataCache);
}

void AffinePrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", isWrite);
  tblgen_state.addAttribute("localityHint", localityHint);
  tblgen_state.addAttribute("isDataCache", isDataCache);
  tblgen_state.addTypes(resultTypes);
}

void AffinePrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", (*tblgen_builder).getBoolAttr(isWrite));
  tblgen_state.addAttribute("localityHint", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), localityHint));
  tblgen_state.addAttribute("isDataCache", (*tblgen_builder).getBoolAttr(isDataCache));
}

void AffinePrefetchOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("isWrite", (*tblgen_builder).getBoolAttr(isWrite));
  tblgen_state.addAttribute("localityHint", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(32), localityHint));
  tblgen_state.addAttribute("isDataCache", (*tblgen_builder).getBoolAttr(isDataCache));
  tblgen_state.addTypes(resultTypes);
}

void AffinePrefetchOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AffinePrefetchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffinePrefetchOp(parser, result);
}

void AffinePrefetchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffinePrefetchOp::verify() {
  auto tblgen_isWrite = this->getAttr("isWrite");
  if (!tblgen_isWrite) return emitOpError("requires attribute 'isWrite'");
  {
    if (!((tblgen_isWrite.isa<BoolAttr>()))) return emitOpError("attribute 'isWrite' failed to satisfy constraint: bool attribute");
  }
  auto tblgen_localityHint = this->getAttr("localityHint");
  if (!tblgen_localityHint) return emitOpError("requires attribute 'localityHint'");
  {
    if (!((((tblgen_localityHint.isa<IntegerAttr>())) && ((tblgen_localityHint.cast<IntegerAttr>().getType().isInteger(32)))) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() >= 0)) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() <= 3)))) return emitOpError("attribute 'localityHint' failed to satisfy constraint: 32-bit integer attribute whose minimum value is 0 whose maximum value is 3");
  }
  auto tblgen_isDataCache = this->getAttr("isDataCache");
  if (!tblgen_isDataCache) return emitOpError("requires attribute 'isDataCache'");
  {
    if (!((tblgen_isDataCache.isa<BoolAttr>()))) return emitOpError("attribute 'isDataCache' failed to satisfy constraint: bool attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
// AffineTerminatorOp definitions
//===----------------------------------------------------------------------===//

AffineTerminatorOpOperandAdaptor::AffineTerminatorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AffineTerminatorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef AffineTerminatorOp::getOperationName() {
  return "affine.terminator";
}

Operation::operand_range AffineTerminatorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range AffineTerminatorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void AffineTerminatorOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void AffineTerminatorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void AffineTerminatorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult AffineTerminatorOp::verify() {
  {
    unsigned index = 0; (void)index;
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

