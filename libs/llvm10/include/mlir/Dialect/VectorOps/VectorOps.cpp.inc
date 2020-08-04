/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

vector::BroadcastOp,
vector::ConstantMaskOp,
vector::ContractionOp,
vector::CreateMaskOp,
vector::ExtractElementOp,
vector::ExtractOp,
vector::ExtractSlicesOp,
vector::InsertElementOp,
vector::InsertOp,
vector::InsertSlicesOp,
vector::InsertStridedSliceOp,
vector::OuterProductOp,
vector::PrintOp,
vector::ReshapeOp,
vector::ShuffleOp,
vector::StridedSliceOp,
vector::TransferReadOp,
vector::TransferWriteOp,
vector::TupleGetOp,
vector::TupleOp,
vector::TypeCastOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// vector::BroadcastOp definitions
//===----------------------------------------------------------------------===//

BroadcastOpOperandAdaptor::BroadcastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BroadcastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BroadcastOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

StringRef BroadcastOp::getOperationName() {
  return "vector.broadcast";
}

Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BroadcastOp::source() {
  return *getODSOperands(0).begin();
}

Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BroadcastOp::vector() {
  return *getODSResults(0).begin();
}

void BroadcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value source) {
  tblgen_state.addOperands(source);
  tblgen_state.addTypes(vector);
}

void BroadcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source) {
  tblgen_state.addOperands(source);
  tblgen_state.addTypes(resultTypes);
}

void BroadcastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BroadcastOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBroadcastOp(parser, result);
}

void BroadcastOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult BroadcastOp::verify() {
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that source operand and result have same element type");
  }
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
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::ConstantMaskOp definitions
//===----------------------------------------------------------------------===//

ConstantMaskOpOperandAdaptor::ConstantMaskOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstantMaskOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ConstantMaskOp::getOperationName() {
  return "vector.constant_mask";
}

Operation::operand_range ConstantMaskOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ConstantMaskOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ConstantMaskOp::mask_dim_sizesAttr() {
  return this->getAttr("mask_dim_sizes").cast<ArrayAttr>();
}

ArrayAttr ConstantMaskOp::mask_dim_sizes() {
  auto attr = mask_dim_sizesAttr();
  return attr;
}

void ConstantMaskOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ArrayAttr mask_dim_sizes) {
  tblgen_state.addAttribute("mask_dim_sizes", mask_dim_sizes);
  tblgen_state.addTypes(resultType0);
}

void ConstantMaskOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ArrayAttr mask_dim_sizes) {
  tblgen_state.addAttribute("mask_dim_sizes", mask_dim_sizes);
  tblgen_state.addTypes(resultTypes);
}

void ConstantMaskOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConstantMaskOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseConstantMaskOp(parser, result);
}

void ConstantMaskOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ConstantMaskOp::verify() {
  auto tblgen_mask_dim_sizes = this->getAttr("mask_dim_sizes");
  if (!tblgen_mask_dim_sizes) return emitOpError("requires attribute 'mask_dim_sizes'");
  {
    if (!(((tblgen_mask_dim_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_mask_dim_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'mask_dim_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit integer values, but got " << v.getType();
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
// vector::ContractionOp definitions
//===----------------------------------------------------------------------===//

ContractionOpOperandAdaptor::ContractionOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ContractionOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  ContractionOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  ContractionOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

Value  ContractionOpOperandAdaptor::acc() {
  return *getODSOperands(2).begin();
}

ArrayRef<Value> ContractionOpOperandAdaptor::masks() {
  return getODSOperands(3);
}

StringRef ContractionOp::getOperationName() {
  return "vector.contract";
}

Operation::operand_range ContractionOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  ContractionOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  ContractionOp::rhs() {
  return *getODSOperands(1).begin();
}

Value  ContractionOp::acc() {
  return *getODSOperands(2).begin();
}

Operation::operand_range ContractionOp::masks() {
  return getODSOperands(3);
}

Operation::result_range ContractionOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ContractionOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr ContractionOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr ContractionOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr ContractionOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}



void ContractionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(acc);
  tblgen_state.addOperands(masks);
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  tblgen_state.addTypes(resultType0);
}

void ContractionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(acc);
  tblgen_state.addOperands(masks);
  tblgen_state.addAttribute("indexing_maps", indexing_maps);
  tblgen_state.addAttribute("iterator_types", iterator_types);
  tblgen_state.addTypes(resultTypes);
}

void ContractionOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ContractionOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseContractionOp(parser, result);
}

void ContractionOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ContractionOp::verify() {
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
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(3)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1))))) {
        return emitOpError("operand #") << index << " must be vector of 1-bit integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::CreateMaskOp definitions
//===----------------------------------------------------------------------===//

CreateMaskOpOperandAdaptor::CreateMaskOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CreateMaskOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> CreateMaskOpOperandAdaptor::operands() {
  return getODSOperands(0);
}

StringRef CreateMaskOp::getOperationName() {
  return "vector.create_mask";
}

Operation::operand_range CreateMaskOp::getODSOperands(unsigned index) {
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

Operation::operand_range CreateMaskOp::operands() {
  return getODSOperands(0);
}

Operation::result_range CreateMaskOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void CreateMaskOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultType0);
}

void CreateMaskOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands) {
  tblgen_state.addOperands(operands);
  tblgen_state.addTypes(resultTypes);
}

void CreateMaskOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CreateMaskOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCreateMaskOp(parser, result);
}

void CreateMaskOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult CreateMaskOp::verify() {
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
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit integer values, but got " << v.getType();
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
// vector::ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpOperandAdaptor::ExtractElementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractElementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExtractElementOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value  ExtractElementOpOperandAdaptor::position() {
  return *getODSOperands(1).begin();
}

StringRef ExtractElementOp::getOperationName() {
  return "vector.extractelement";
}

Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExtractElementOp::vector() {
  return *getODSOperands(0).begin();
}

Value  ExtractElementOp::position() {
  return *getODSOperands(1).begin();
}

Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultType0);
}

void ExtractElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultTypes);
}

void ExtractElementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExtractElementOp(parser, result);
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ExtractElementOp::verify() {
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that operand and result have same element type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((v.getType().isa<IntegerType>()))) {
        return emitOpError("operand #") << index << " must be integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
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
// vector::ExtractOp definitions
//===----------------------------------------------------------------------===//

ExtractOpOperandAdaptor::ExtractOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExtractOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

StringRef ExtractOp::getOperationName() {
  return "vector.extract";
}

Operation::operand_range ExtractOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExtractOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::result_range ExtractOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ExtractOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr ExtractOp::position() {
  auto attr = positionAttr();
  return attr;
}



void ExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultType0);
}

void ExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr position) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultTypes);
}

void ExtractOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExtractOp(parser, result);
}

void ExtractOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ExtractOp::verify() {
  auto tblgen_position = this->getAttr("position");
  if (!tblgen_position) return emitOpError("requires attribute 'position'");
  {
    if (!(((tblgen_position.isa<ArrayAttr>())) && (llvm::all_of(tblgen_position.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that operand and result have same element type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
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
// vector::ExtractSlicesOp definitions
//===----------------------------------------------------------------------===//

ExtractSlicesOpOperandAdaptor::ExtractSlicesOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExtractSlicesOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ExtractSlicesOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

StringRef ExtractSlicesOp::getOperationName() {
  return "vector.extract_slices";
}

Operation::operand_range ExtractSlicesOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ExtractSlicesOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::result_range ExtractSlicesOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ExtractSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr ExtractSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr ExtractSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr ExtractSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}



void ExtractSlicesOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultType0);
}

void ExtractSlicesOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultTypes);
}

void ExtractSlicesOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExtractSlicesOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExtractSlicesOp(parser, result);
}

void ExtractSlicesOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ExtractSlicesOp::verify() {
  auto tblgen_sizes = this->getAttr("sizes");
  if (!tblgen_sizes) return emitOpError("requires attribute 'sizes'");
  {
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_strides = this->getAttr("strides");
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");
  {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
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
// vector::InsertElementOp definitions
//===----------------------------------------------------------------------===//

InsertElementOpOperandAdaptor::InsertElementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertElementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertElementOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value  InsertElementOpOperandAdaptor::dest() {
  return *getODSOperands(1).begin();
}

Value  InsertElementOpOperandAdaptor::position() {
  return *getODSOperands(2).begin();
}

StringRef InsertElementOp::getOperationName() {
  return "vector.insertelement";
}

Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertElementOp::source() {
  return *getODSOperands(0).begin();
}

Value  InsertElementOp::dest() {
  return *getODSOperands(1).begin();
}

Value  InsertElementOp::position() {
  return *getODSOperands(2).begin();
}

Operation::result_range InsertElementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void InsertElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, Value position) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultType0);
}

void InsertElementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, Value position) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addOperands(position);
  tblgen_state.addTypes(resultTypes);
}

void InsertElementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseInsertElementOp(parser, result);
}

void InsertElementOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult InsertElementOp::verify() {
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that source operand and result have same element type");
  }
  if (!(((*this->getOperation()).getResult(0).getType() == (*this->getOperation()).getOperand(1).getType()))) {
    return emitOpError("failed to verify that dest operand and result have same type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((v.getType().isa<IntegerType>()))) {
        return emitOpError("operand #") << index << " must be integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::InsertOp definitions
//===----------------------------------------------------------------------===//

InsertOpOperandAdaptor::InsertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value  InsertOpOperandAdaptor::dest() {
  return *getODSOperands(1).begin();
}

StringRef InsertOp::getOperationName() {
  return "vector.insert";
}

Operation::operand_range InsertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertOp::source() {
  return *getODSOperands(0).begin();
}

Value  InsertOp::dest() {
  return *getODSOperands(1).begin();
}

Operation::result_range InsertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr InsertOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr InsertOp::position() {
  auto attr = positionAttr();
  return attr;
}



void InsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, ArrayAttr position) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultType0);
}

void InsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr position) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addAttribute("position", position);
  tblgen_state.addTypes(resultTypes);
}

void InsertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseInsertOp(parser, result);
}

void InsertOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult InsertOp::verify() {
  auto tblgen_position = this->getAttr("position");
  if (!tblgen_position) return emitOpError("requires attribute 'position'");
  {
    if (!(((tblgen_position.isa<ArrayAttr>())) && (llvm::all_of(tblgen_position.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that source operand and result have same element type");
  }
  if (!(((*this->getOperation()).getResult(0).getType() == (*this->getOperation()).getOperand(1).getType()))) {
    return emitOpError("failed to verify that dest operand and result have same type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::InsertSlicesOp definitions
//===----------------------------------------------------------------------===//

InsertSlicesOpOperandAdaptor::InsertSlicesOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertSlicesOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertSlicesOpOperandAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

StringRef InsertSlicesOp::getOperationName() {
  return "vector.insert_slices";
}

Operation::operand_range InsertSlicesOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertSlicesOp::vectors() {
  return *getODSOperands(0).begin();
}

Operation::result_range InsertSlicesOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr InsertSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr InsertSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr InsertSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr InsertSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void InsertSlicesOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vectors, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultType0);
}

void InsertSlicesOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vectors, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultTypes);
}

void InsertSlicesOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertSlicesOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseInsertSlicesOp(parser, result);
}

void InsertSlicesOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult InsertSlicesOp::verify() {
  auto tblgen_sizes = this->getAttr("sizes");
  if (!tblgen_sizes) return emitOpError("requires attribute 'sizes'");
  {
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_strides = this->getAttr("strides");
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");
  {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::InsertStridedSliceOp definitions
//===----------------------------------------------------------------------===//

InsertStridedSliceOpOperandAdaptor::InsertStridedSliceOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> InsertStridedSliceOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  InsertStridedSliceOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value  InsertStridedSliceOpOperandAdaptor::dest() {
  return *getODSOperands(1).begin();
}

StringRef InsertStridedSliceOp::getOperationName() {
  return "vector.insert_strided_slice";
}

Operation::operand_range InsertStridedSliceOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  InsertStridedSliceOp::source() {
  return *getODSOperands(0).begin();
}

Value  InsertStridedSliceOp::dest() {
  return *getODSOperands(1).begin();
}

Operation::result_range InsertStridedSliceOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr InsertStridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<ArrayAttr>();
}

ArrayAttr InsertStridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

ArrayAttr InsertStridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr InsertStridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}



void InsertStridedSliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addAttribute("offsets", offsets);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultType0);
}

void InsertStridedSliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides) {
  tblgen_state.addOperands(source);
  tblgen_state.addOperands(dest);
  tblgen_state.addAttribute("offsets", offsets);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultTypes);
}

void InsertStridedSliceOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult InsertStridedSliceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseInsertStridedSliceOp(parser, result);
}

void InsertStridedSliceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult InsertStridedSliceOp::verify() {
  auto tblgen_offsets = this->getAttr("offsets");
  if (!tblgen_offsets) return emitOpError("requires attribute 'offsets'");
  {
    if (!(((tblgen_offsets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_offsets.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_strides = this->getAttr("strides");
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");
  {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that operand #0 and result have same element type");
  }
  if (!(((*this->getOperation()).getResult(0).getType() == (*this->getOperation()).getOperand(1).getType()))) {
    return emitOpError("failed to verify that dest operand and result have same type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::OuterProductOp definitions
//===----------------------------------------------------------------------===//

OuterProductOpOperandAdaptor::OuterProductOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> OuterProductOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  OuterProductOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  OuterProductOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

ArrayRef<Value> OuterProductOpOperandAdaptor::acc() {
  return getODSOperands(2);
}

StringRef OuterProductOp::getOperationName() {
  return "vector.outerproduct";
}

Operation::operand_range OuterProductOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  OuterProductOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  OuterProductOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::operand_range OuterProductOp::acc() {
  return getODSOperands(2);
}

Operation::result_range OuterProductOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void OuterProductOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value lhs, Value rhs, ValueRange acc) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(acc);
  tblgen_state.addTypes(resultType0);
}

void OuterProductOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs, ValueRange acc) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addOperands(acc);
  tblgen_state.addTypes(resultTypes);
}

void OuterProductOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult OuterProductOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseOuterProductOp(parser, result);
}

void OuterProductOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult OuterProductOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::PrintOp definitions
//===----------------------------------------------------------------------===//

PrintOpOperandAdaptor::PrintOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> PrintOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  PrintOpOperandAdaptor::source() {
  return *getODSOperands(0).begin();
}

StringRef PrintOp::getOperationName() {
  return "vector.print";
}

Operation::operand_range PrintOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  PrintOp::source() {
  return *getODSOperands(0).begin();
}

Operation::result_range PrintOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void PrintOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value source) {
  tblgen_state.addOperands(source);
}

void PrintOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value source) {
  tblgen_state.addOperands(source);
  tblgen_state.addTypes(resultTypes);
}

void PrintOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult PrintOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parsePrintOp(parser, result);
}

void PrintOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult PrintOp::verify() {
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// vector::ReshapeOp definitions
//===----------------------------------------------------------------------===//

StringRef ReshapeOp::getOperationName() {
  return "vector.reshape";
}

Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");
  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned end = start + (*(sizeAttr.begin() + index)).getZExtValue();
  return {std::next(getOperation()->operand_begin(), start), std::next(getOperation()->operand_begin(), end)};
}

Value  ReshapeOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ReshapeOp::input_shape() {
  return getODSOperands(1);
}

Operation::operand_range ReshapeOp::output_shape() {
  return getODSOperands(2);
}

Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr ReshapeOp::fixed_vector_sizesAttr() {
  return this->getAttr("fixed_vector_sizes").cast<ArrayAttr>();
}

ArrayAttr ReshapeOp::fixed_vector_sizes() {
  auto attr = fixed_vector_sizesAttr();
  return attr;
}

DenseIntElementsAttr ReshapeOp::operand_segment_sizesAttr() {
  return this->getAttr("operand_segment_sizes").cast<DenseIntElementsAttr>();
}

DenseIntElementsAttr ReshapeOp::operand_segment_sizes() {
  auto attr = operand_segment_sizesAttr();
  return attr;
}

void ReshapeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes, DenseIntElementsAttr operand_segment_sizes) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(input_shape);
  tblgen_state.addOperands(output_shape);
  tblgen_state.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  tblgen_state.addAttribute("operand_segment_sizes", operand_segment_sizes);
  tblgen_state.addTypes(resultType0);
}

void ReshapeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes, DenseIntElementsAttr operand_segment_sizes) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(input_shape);
  tblgen_state.addOperands(output_shape);
  tblgen_state.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  tblgen_state.addAttribute("operand_segment_sizes", operand_segment_sizes);
  tblgen_state.addTypes(resultTypes);
}

void ReshapeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
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
  auto tblgen_fixed_vector_sizes = this->getAttr("fixed_vector_sizes");
  if (!tblgen_fixed_vector_sizes) return emitOpError("requires attribute 'fixed_vector_sizes'");
  {
    if (!(((tblgen_fixed_vector_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_fixed_vector_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'fixed_vector_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_operand_segment_sizes = this->getAttr("operand_segment_sizes");
  if (!tblgen_operand_segment_sizes) return emitOpError("requires attribute 'operand_segment_sizes'");
  {
    if (!((tblgen_operand_segment_sizes.isa<DenseIntElementsAttr>() &&tblgen_operand_segment_sizes.cast<DenseIntElementsAttr>().getType().getElementType().isInteger(32)))) return emitOpError("attribute 'operand_segment_sizes' failed to satisfy constraint: 32-bit integer elements attribute");
  }

  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");
  auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
  if (numElements != 3) {
    return emitOpError("'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
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
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::ShuffleOp definitions
//===----------------------------------------------------------------------===//

ShuffleOpOperandAdaptor::ShuffleOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShuffleOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShuffleOpOperandAdaptor::v1() {
  return *getODSOperands(0).begin();
}

Value  ShuffleOpOperandAdaptor::v2() {
  return *getODSOperands(1).begin();
}

StringRef ShuffleOp::getOperationName() {
  return "vector.shuffle";
}

Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShuffleOp::v1() {
  return *getODSOperands(0).begin();
}

Value  ShuffleOp::v2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShuffleOp::vector() {
  return *getODSResults(0).begin();
}

ArrayAttr ShuffleOp::maskAttr() {
  return this->getAttr("mask").cast<ArrayAttr>();
}

ArrayAttr ShuffleOp::mask() {
  auto attr = maskAttr();
  return attr;
}



void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value v1, Value v2, ArrayAttr mask) {
  tblgen_state.addOperands(v1);
  tblgen_state.addOperands(v2);
  tblgen_state.addAttribute("mask", mask);
  tblgen_state.addTypes(vector);
}

void ShuffleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask) {
  tblgen_state.addOperands(v1);
  tblgen_state.addOperands(v2);
  tblgen_state.addAttribute("mask", mask);
  tblgen_state.addTypes(resultTypes);
}

void ShuffleOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShuffleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseShuffleOp(parser, result);
}

void ShuffleOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ShuffleOp::verify() {
  auto tblgen_mask = this->getAttr("mask");
  if (!tblgen_mask) return emitOpError("requires attribute 'mask'");
  {
    if (!(((tblgen_mask.isa<ArrayAttr>())) && (llvm::all_of(tblgen_mask.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'mask' failed to satisfy constraint: 64-bit integer array attribute");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that first operand v1 and result have same element type");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1))))) {
    return emitOpError("failed to verify that second operand v2 and result have same element type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::StridedSliceOp definitions
//===----------------------------------------------------------------------===//

StridedSliceOpOperandAdaptor::StridedSliceOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StridedSliceOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StridedSliceOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

StringRef StridedSliceOp::getOperationName() {
  return "vector.strided_slice";
}

Operation::operand_range StridedSliceOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StridedSliceOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::result_range StridedSliceOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr StridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<ArrayAttr>();
}

ArrayAttr StridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

ArrayAttr StridedSliceOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr StridedSliceOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr StridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr StridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}



void StridedSliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("offsets", offsets);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultType0);
}

void StridedSliceOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides) {
  tblgen_state.addOperands(vector);
  tblgen_state.addAttribute("offsets", offsets);
  tblgen_state.addAttribute("sizes", sizes);
  tblgen_state.addAttribute("strides", strides);
  tblgen_state.addTypes(resultTypes);
}

void StridedSliceOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult StridedSliceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseStridedSliceOp(parser, result);
}

void StridedSliceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult StridedSliceOp::verify() {
  auto tblgen_offsets = this->getAttr("offsets");
  if (!tblgen_offsets) return emitOpError("requires attribute 'offsets'");
  {
    if (!(((tblgen_offsets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_offsets.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_sizes = this->getAttr("sizes");
  if (!tblgen_sizes) return emitOpError("requires attribute 'sizes'");
  {
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  auto tblgen_strides = this->getAttr("strides");
  if (!tblgen_strides) return emitOpError("requires attribute 'strides'");
  {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(64))); })))) return emitOpError("attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0))))) {
    return emitOpError("failed to verify that operand and result have same element type");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::TransferReadOp definitions
//===----------------------------------------------------------------------===//

TransferReadOpOperandAdaptor::TransferReadOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TransferReadOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  TransferReadOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> TransferReadOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

Value  TransferReadOpOperandAdaptor::padding() {
  return *getODSOperands(2).begin();
}

StringRef TransferReadOp::getOperationName() {
  return "vector.transfer_read";
}

Operation::operand_range TransferReadOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  TransferReadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range TransferReadOp::indices() {
  return getODSOperands(1);
}

Value  TransferReadOp::padding() {
  return *getODSOperands(2).begin();
}

Operation::result_range TransferReadOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  TransferReadOp::vector() {
  return *getODSResults(0).begin();
}

AffineMapAttr TransferReadOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferReadOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

void TransferReadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addOperands(padding);
  tblgen_state.addAttribute("permutation_map", permutation_map);
  tblgen_state.addTypes(vector);
}

void TransferReadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addOperands(padding);
  tblgen_state.addAttribute("permutation_map", permutation_map);
  tblgen_state.addTypes(resultTypes);
}

void TransferReadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type vector, Value memref, ValueRange indices, AffineMap permutation_map, Value padding) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addOperands(padding);
  tblgen_state.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  tblgen_state.addTypes(vector);
}

void TransferReadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMap permutation_map, Value padding) {
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addOperands(padding);
  tblgen_state.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  tblgen_state.addTypes(resultTypes);
}

void TransferReadOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TransferReadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransferReadOp(parser, result);
}

void TransferReadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransferReadOp::verify() {
  auto tblgen_permutation_map = this->getAttr("permutation_map");
  if (!tblgen_permutation_map) return emitOpError("requires attribute 'permutation_map'");
  {
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitOpError("attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
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
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::TransferWriteOp definitions
//===----------------------------------------------------------------------===//

TransferWriteOpOperandAdaptor::TransferWriteOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TransferWriteOpOperandAdaptor::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (tblgen_operands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(tblgen_operands.begin(), offset), std::next(tblgen_operands.begin(), offset + size)};
}

Value  TransferWriteOpOperandAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value  TransferWriteOpOperandAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ArrayRef<Value> TransferWriteOpOperandAdaptor::indices() {
  return getODSOperands(2);
}

StringRef TransferWriteOp::getOperationName() {
  return "vector.transfer_write";
}

Operation::operand_range TransferWriteOp::getODSOperands(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int offset = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;

  return {std::next(getOperation()->operand_begin(), offset), std::next(getOperation()->operand_begin(), offset + size)};
}

Value  TransferWriteOp::vector() {
  return *getODSOperands(0).begin();
}

Value  TransferWriteOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range TransferWriteOp::indices() {
  return getODSOperands(2);
}

Operation::result_range TransferWriteOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

AffineMapAttr TransferWriteOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferWriteOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

void TransferWriteOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("permutation_map", permutation_map);
}

void TransferWriteOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("permutation_map", permutation_map);
  tblgen_state.addTypes(resultTypes);
}

void TransferWriteOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value vector, Value memref, ValueRange indices, AffineMap permutation_map) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
}

void TransferWriteOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMap permutation_map) {
  tblgen_state.addOperands(vector);
  tblgen_state.addOperands(memref);
  tblgen_state.addOperands(indices);
  tblgen_state.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  tblgen_state.addTypes(resultTypes);
}

void TransferWriteOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TransferWriteOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransferWriteOp(parser, result);
}

void TransferWriteOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransferWriteOp::verify() {
  auto tblgen_permutation_map = this->getAttr("permutation_map");
  if (!tblgen_permutation_map) return emitOpError("requires attribute 'permutation_map'");
  {
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitOpError("attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// vector::TupleGetOp definitions
//===----------------------------------------------------------------------===//

TupleGetOpOperandAdaptor::TupleGetOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TupleGetOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TupleGetOpOperandAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

StringRef TupleGetOp::getOperationName() {
  return "vector.tuple_get";
}

Operation::operand_range TupleGetOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TupleGetOp::vectors() {
  return *getODSOperands(0).begin();
}

Operation::result_range TupleGetOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr TupleGetOp::indexAttr() {
  return this->getAttr("index").cast<IntegerAttr>();
}

APInt TupleGetOp::index() {
  auto attr = indexAttr();
  return attr.getValue();
}

void TupleGetOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value vectors, IntegerAttr index) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addAttribute("index", index);
  tblgen_state.addTypes(resultType0);
}

void TupleGetOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value vectors, IntegerAttr index) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addAttribute("index", index);
  tblgen_state.addTypes(resultTypes);
}

void TupleGetOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TupleGetOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTupleGetOp(parser, result);
}

void TupleGetOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TupleGetOp::verify() {
  auto tblgen_index = this->getAttr("index");
  if (!tblgen_index) return emitOpError("requires attribute 'index'");
  {
    if (!((tblgen_index.isa<IntegerAttr>()))) return emitOpError("attribute 'index' failed to satisfy constraint: arbitrary integer attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
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
// vector::TupleOp definitions
//===----------------------------------------------------------------------===//

TupleOpOperandAdaptor::TupleOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TupleOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> TupleOpOperandAdaptor::vectors() {
  return getODSOperands(0);
}

StringRef TupleOp::getOperationName() {
  return "vector.tuple";
}

Operation::operand_range TupleOp::getODSOperands(unsigned index) {
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

Operation::operand_range TupleOp::vectors() {
  return getODSOperands(0);
}

Operation::result_range TupleOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void TupleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, ValueRange vectors) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addTypes(resultType0);
}

void TupleOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange vectors) {
  tblgen_state.addOperands(vectors);
  tblgen_state.addTypes(resultTypes);
}

void TupleOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TupleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTupleOp(parser, result);
}

void TupleOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TupleOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
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
// vector::TypeCastOp definitions
//===----------------------------------------------------------------------===//

TypeCastOpOperandAdaptor::TypeCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> TypeCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  TypeCastOpOperandAdaptor::memref() {
  return *getODSOperands(0).begin();
}

StringRef TypeCastOp::getOperationName() {
  return "vector.type_cast";
}

Operation::operand_range TypeCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  TypeCastOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::result_range TypeCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}



void TypeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value memref) {
  tblgen_state.addOperands(memref);
  tblgen_state.addTypes(resultType0);
}

void TypeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value memref) {
  tblgen_state.addOperands(memref);
  tblgen_state.addTypes(resultTypes);
}

void TypeCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult TypeCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void TypeCastOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TypeCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && ((v.getType().cast<ShapedType>().hasStaticShape())))) {
        return emitOpError("operand #") << index << " must be statically shaped memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}


#endif  // GET_OP_CLASSES

