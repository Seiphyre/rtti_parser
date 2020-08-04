/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

quant::ConstFakeQuant,
quant::ConstFakeQuantPerAxis,
quant::CoupledRefOp,
quant::DequantizeCastOp,
quant::QuantizeCastOp,
quant::StatisticsOp,
quant::StatisticsRefOp,
quant::StorageCastOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// quant::ConstFakeQuant definitions
//===----------------------------------------------------------------------===//

ConstFakeQuantOperandAdaptor::ConstFakeQuantOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstFakeQuantOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConstFakeQuantOperandAdaptor::inputs() {
  return *getODSOperands(0).begin();
}

StringRef ConstFakeQuant::getOperationName() {
  return "quant.const_fake_quant";
}

Operation::operand_range ConstFakeQuant::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConstFakeQuant::inputs() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConstFakeQuant::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConstFakeQuant::outputs() {
  return *getODSResults(0).begin();
}

FloatAttr ConstFakeQuant::minAttr() {
  return this->getAttr("min").cast<FloatAttr>();
}

APFloat ConstFakeQuant::min() {
  auto attr = minAttr();
  return attr.getValue();
}

FloatAttr ConstFakeQuant::maxAttr() {
  return this->getAttr("max").cast<FloatAttr>();
}

APFloat ConstFakeQuant::max() {
  auto attr = maxAttr();
  return attr.getValue();
}

IntegerAttr ConstFakeQuant::num_bitsAttr() {
  return this->getAttr("num_bits").cast<IntegerAttr>();
}

APInt ConstFakeQuant::num_bits() {
  auto attr = num_bitsAttr();
  return attr.getValue();
}

BoolAttr ConstFakeQuant::narrow_rangeAttr() {
  return this->getAttr("narrow_range").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuant::narrow_range() {
  auto attr = narrow_rangeAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

BoolAttr ConstFakeQuant::is_signedAttr() {
  return this->getAttr("is_signed").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuant::is_signed() {
  auto attr = is_signedAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void ConstFakeQuant::build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes(outputs);
}

void ConstFakeQuant::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuant::build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", (*tblgen_builder).getFloatAttr((*tblgen_builder).getF32Type(), min));
  tblgen_state.addAttribute("max", (*tblgen_builder).getFloatAttr((*tblgen_builder).getF32Type(), max));
  tblgen_state.addAttribute("num_bits", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), num_bits));
  tblgen_state.addAttribute("narrow_range", (*tblgen_builder).getBoolAttr(narrow_range));
  tblgen_state.addAttribute("is_signed", (*tblgen_builder).getBoolAttr(is_signed));
  tblgen_state.addTypes(outputs);
}

void ConstFakeQuant::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", (*tblgen_builder).getFloatAttr((*tblgen_builder).getF32Type(), min));
  tblgen_state.addAttribute("max", (*tblgen_builder).getFloatAttr((*tblgen_builder).getF32Type(), max));
  tblgen_state.addAttribute("num_bits", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), num_bits));
  tblgen_state.addAttribute("narrow_range", (*tblgen_builder).getBoolAttr(narrow_range));
  tblgen_state.addAttribute("is_signed", (*tblgen_builder).getBoolAttr(is_signed));
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuant::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuant::build(Builder *tblgen_builder, OperationState &tblgen_state, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes({inputs.getType()});

}

void ConstFakeQuant::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult ConstFakeQuant::verify() {
  auto tblgen_min = this->getAttr("min");
  if (!tblgen_min) return emitOpError("requires attribute 'min'");
  {
    if (!(((tblgen_min.isa<FloatAttr>())) && ((tblgen_min.cast<FloatAttr>().getType().isF32())))) return emitOpError("attribute 'min' failed to satisfy constraint: 32-bit float attribute");
  }
  auto tblgen_max = this->getAttr("max");
  if (!tblgen_max) return emitOpError("requires attribute 'max'");
  {
    if (!(((tblgen_max.isa<FloatAttr>())) && ((tblgen_max.cast<FloatAttr>().getType().isF32())))) return emitOpError("attribute 'max' failed to satisfy constraint: 32-bit float attribute");
  }
  auto tblgen_num_bits = this->getAttr("num_bits");
  if (!tblgen_num_bits) return emitOpError("requires attribute 'num_bits'");
  {
    if (!(((tblgen_num_bits.isa<IntegerAttr>())) && ((tblgen_num_bits.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'num_bits' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_narrow_range = this->getAttr("narrow_range");
  if (tblgen_narrow_range) {
    if (!((tblgen_narrow_range.isa<BoolAttr>()))) return emitOpError("attribute 'narrow_range' failed to satisfy constraint: bool attribute");
  }
  auto tblgen_is_signed = this->getAttr("is_signed");
  if (tblgen_is_signed) {
    if (!((tblgen_is_signed.isa<BoolAttr>()))) return emitOpError("attribute 'is_signed' failed to satisfy constraint: bool attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("operand #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("result #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
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
// quant::ConstFakeQuantPerAxis definitions
//===----------------------------------------------------------------------===//

ConstFakeQuantPerAxisOperandAdaptor::ConstFakeQuantPerAxisOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstFakeQuantPerAxisOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConstFakeQuantPerAxisOperandAdaptor::inputs() {
  return *getODSOperands(0).begin();
}

StringRef ConstFakeQuantPerAxis::getOperationName() {
  return "quant.const_fake_quant_per_axis";
}

Operation::operand_range ConstFakeQuantPerAxis::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConstFakeQuantPerAxis::inputs() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConstFakeQuantPerAxis::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConstFakeQuantPerAxis::outputs() {
  return *getODSResults(0).begin();
}

ArrayAttr ConstFakeQuantPerAxis::minAttr() {
  return this->getAttr("min").cast<ArrayAttr>();
}

ArrayAttr ConstFakeQuantPerAxis::min() {
  auto attr = minAttr();
  return attr;
}

ArrayAttr ConstFakeQuantPerAxis::maxAttr() {
  return this->getAttr("max").cast<ArrayAttr>();
}

ArrayAttr ConstFakeQuantPerAxis::max() {
  auto attr = maxAttr();
  return attr;
}

IntegerAttr ConstFakeQuantPerAxis::axisAttr() {
  return this->getAttr("axis").cast<IntegerAttr>();
}

APInt ConstFakeQuantPerAxis::axis() {
  auto attr = axisAttr();
  return attr.getValue();
}

IntegerAttr ConstFakeQuantPerAxis::num_bitsAttr() {
  return this->getAttr("num_bits").cast<IntegerAttr>();
}

APInt ConstFakeQuantPerAxis::num_bits() {
  auto attr = num_bitsAttr();
  return attr.getValue();
}

BoolAttr ConstFakeQuantPerAxis::narrow_rangeAttr() {
  return this->getAttr("narrow_range").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuantPerAxis::narrow_range() {
  auto attr = narrow_rangeAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

BoolAttr ConstFakeQuantPerAxis::is_signedAttr() {
  return this->getAttr("is_signed").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuantPerAxis::is_signed() {
  auto attr = is_signedAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void ConstFakeQuantPerAxis::build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("axis", axis);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes(outputs);
}

void ConstFakeQuantPerAxis::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("axis", axis);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(Builder *tblgen_builder, OperationState &tblgen_state, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("axis", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), axis));
  tblgen_state.addAttribute("num_bits", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), num_bits));
  tblgen_state.addAttribute("narrow_range", (*tblgen_builder).getBoolAttr(narrow_range));
  tblgen_state.addAttribute("is_signed", (*tblgen_builder).getBoolAttr(is_signed));
  tblgen_state.addTypes(outputs);
}

void ConstFakeQuantPerAxis::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("axis", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), axis));
  tblgen_state.addAttribute("num_bits", (*tblgen_builder).getIntegerAttr((*tblgen_builder).getIntegerType(64), num_bits));
  tblgen_state.addAttribute("narrow_range", (*tblgen_builder).getBoolAttr(narrow_range));
  tblgen_state.addAttribute("is_signed", (*tblgen_builder).getBoolAttr(is_signed));
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(Builder *tblgen_builder, OperationState &tblgen_state, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  tblgen_state.addOperands(inputs);
  tblgen_state.addAttribute("min", min);
  tblgen_state.addAttribute("max", max);
  tblgen_state.addAttribute("axis", axis);
  tblgen_state.addAttribute("num_bits", num_bits);
  tblgen_state.addAttribute("narrow_range", narrow_range);
  tblgen_state.addAttribute("is_signed", is_signed);
  tblgen_state.addTypes({inputs.getType()});

}

void ConstFakeQuantPerAxis::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult ConstFakeQuantPerAxis::verify() {
  auto tblgen_min = this->getAttr("min");
  if (!tblgen_min) return emitOpError("requires attribute 'min'");
  {
    if (!(((tblgen_min.isa<ArrayAttr>())) && (llvm::all_of(tblgen_min.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<FloatAttr>())) && ((attr.cast<FloatAttr>().getType().isF32())); })))) return emitOpError("attribute 'min' failed to satisfy constraint: 32-bit float array attribute");
  }
  auto tblgen_max = this->getAttr("max");
  if (!tblgen_max) return emitOpError("requires attribute 'max'");
  {
    if (!(((tblgen_max.isa<ArrayAttr>())) && (llvm::all_of(tblgen_max.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<FloatAttr>())) && ((attr.cast<FloatAttr>().getType().isF32())); })))) return emitOpError("attribute 'max' failed to satisfy constraint: 32-bit float array attribute");
  }
  auto tblgen_axis = this->getAttr("axis");
  if (!tblgen_axis) return emitOpError("requires attribute 'axis'");
  {
    if (!(((tblgen_axis.isa<IntegerAttr>())) && ((tblgen_axis.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'axis' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_num_bits = this->getAttr("num_bits");
  if (!tblgen_num_bits) return emitOpError("requires attribute 'num_bits'");
  {
    if (!(((tblgen_num_bits.isa<IntegerAttr>())) && ((tblgen_num_bits.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'num_bits' failed to satisfy constraint: 64-bit integer attribute");
  }
  auto tblgen_narrow_range = this->getAttr("narrow_range");
  if (tblgen_narrow_range) {
    if (!((tblgen_narrow_range.isa<BoolAttr>()))) return emitOpError("attribute 'narrow_range' failed to satisfy constraint: bool attribute");
  }
  auto tblgen_is_signed = this->getAttr("is_signed");
  if (tblgen_is_signed) {
    if (!((tblgen_is_signed.isa<BoolAttr>()))) return emitOpError("attribute 'is_signed' failed to satisfy constraint: bool attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("operand #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("result #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
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
// quant::CoupledRefOp definitions
//===----------------------------------------------------------------------===//

CoupledRefOpOperandAdaptor::CoupledRefOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CoupledRefOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CoupledRefOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef CoupledRefOp::getOperationName() {
  return "quant.coupled_ref";
}

Operation::operand_range CoupledRefOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CoupledRefOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range CoupledRefOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr CoupledRefOp::coupledKeyAttr() {
  return this->getAttr("coupledKey").cast<StringAttr>();
}

StringRef CoupledRefOp::coupledKey() {
  auto attr = coupledKeyAttr();
  return attr.getValue();
}

void CoupledRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringAttr coupledKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("coupledKey", coupledKey);
  tblgen_state.addTypes(resultType0);
}

void CoupledRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringAttr coupledKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("coupledKey", coupledKey);
  tblgen_state.addTypes(resultTypes);
}

void CoupledRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringRef coupledKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("coupledKey", (*tblgen_builder).getStringAttr("coupledKey"));
  tblgen_state.addTypes(resultType0);
}

void CoupledRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringRef coupledKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("coupledKey", (*tblgen_builder).getStringAttr("coupledKey"));
  tblgen_state.addTypes(resultTypes);
}

void CoupledRefOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void CoupledRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, StringAttr coupledKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("coupledKey", coupledKey);
  tblgen_state.addTypes({arg.getType()});

}

void CoupledRefOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult CoupledRefOp::verify() {
  auto tblgen_coupledKey = this->getAttr("coupledKey");
  if (!tblgen_coupledKey) return emitOpError("requires attribute 'coupledKey'");
  {
    if (!((tblgen_coupledKey.isa<StringAttr>()))) return emitOpError("attribute 'coupledKey' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// quant::DequantizeCastOp definitions
//===----------------------------------------------------------------------===//

DequantizeCastOpOperandAdaptor::DequantizeCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> DequantizeCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  DequantizeCastOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef DequantizeCastOp::getOperationName() {
  return "quant.dcast";
}

Operation::operand_range DequantizeCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  DequantizeCastOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range DequantizeCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void DequantizeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultType0);
}

void DequantizeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void DequantizeCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult DequantizeCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// quant::QuantizeCastOp definitions
//===----------------------------------------------------------------------===//

QuantizeCastOpOperandAdaptor::QuantizeCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> QuantizeCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  QuantizeCastOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef QuantizeCastOp::getOperationName() {
  return "quant.qcast";
}

Operation::operand_range QuantizeCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  QuantizeCastOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range QuantizeCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void QuantizeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultType0);
}

void QuantizeCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void QuantizeCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult QuantizeCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// quant::StatisticsOp definitions
//===----------------------------------------------------------------------===//

StatisticsOpOperandAdaptor::StatisticsOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StatisticsOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StatisticsOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef StatisticsOp::getOperationName() {
  return "quant.stats";
}

Operation::operand_range StatisticsOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StatisticsOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range StatisticsOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ElementsAttr StatisticsOp::layerStatsAttr() {
  return this->getAttr("layerStats").cast<ElementsAttr>();
}

ElementsAttr StatisticsOp::layerStats() {
  auto attr = layerStatsAttr();
  return attr;
}

ElementsAttr StatisticsOp::axisStatsAttr() {
  return this->getAttr("axisStats").dyn_cast_or_null<ElementsAttr>();
}

Optional< ElementsAttr > StatisticsOp::axisStats() {
  auto attr = axisStatsAttr();
  return attr ? Optional< ElementsAttr >(attr) : (llvm::None);
}

IntegerAttr StatisticsOp::axisAttr() {
  return this->getAttr("axis").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > StatisticsOp::axis() {
  auto attr = axisAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void StatisticsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("layerStats", layerStats);
  if (axisStats) {
  tblgen_state.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  tblgen_state.addAttribute("axis", axis);
  }
  tblgen_state.addTypes(resultType0);
}

void StatisticsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("layerStats", layerStats);
  if (axisStats) {
  tblgen_state.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  tblgen_state.addAttribute("axis", axis);
  }
  tblgen_state.addTypes(resultTypes);
}

void StatisticsOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void StatisticsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("layerStats", layerStats);
  if (axisStats) {
  tblgen_state.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  tblgen_state.addAttribute("axis", axis);
  }
  tblgen_state.addTypes({arg.getType()});

}

void StatisticsOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult StatisticsOp::verify() {
  auto tblgen_layerStats = this->getAttr("layerStats");
  if (!tblgen_layerStats) return emitOpError("requires attribute 'layerStats'");
  {
    if (!((tblgen_layerStats.isa<ElementsAttr>()))) return emitOpError("attribute 'layerStats' failed to satisfy constraint: constant vector/tensor attribute");
  }
  auto tblgen_axisStats = this->getAttr("axisStats");
  if (tblgen_axisStats) {
    if (!((tblgen_axisStats.isa<ElementsAttr>()))) return emitOpError("attribute 'axisStats' failed to satisfy constraint: constant vector/tensor attribute");
  }
  auto tblgen_axis = this->getAttr("axis");
  if (tblgen_axis) {
    if (!(((tblgen_axis.isa<IntegerAttr>())) && ((tblgen_axis.cast<IntegerAttr>().getType().isInteger(64))))) return emitOpError("attribute 'axis' failed to satisfy constraint: 64-bit integer attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  auto tensorArg = arg().getType().dyn_cast<TensorType>();
    if (!tensorArg) return emitOpError("arg needs to be tensor type.");

    // Verify layerStats attribute.
    {
      auto layerStatsType = layerStats().getType();
      if (!layerStatsType.getElementType().isa<FloatType>()) {
        return emitOpError(
            "layerStats must have a floating point element type");
      }
      if (layerStatsType.getRank() != 1 || layerStatsType.getDimSize(0) != 2) {
        return emitOpError("layerStats must have shape [2]");
      }
    }
    // Verify axisStats (optional) attribute.
    if (axisStats()) {
      if (!axis()) return emitOpError("axis must be specified for axisStats");

      auto shape = tensorArg.getShape();
      auto argSliceSize = std::accumulate(std::next(shape.begin(),
        axis()->getSExtValue()), shape.end(), 1, std::multiplies<int64_t>());

      auto axisStatsType = axisStats()->getType();
      if (!axisStatsType.getElementType().isa<FloatType>()) {
        return emitOpError("axisStats must have a floating point element type");
      }
      if (axisStatsType.getRank() != 2 ||
          axisStatsType.getDimSize(1) != 2 ||
          axisStatsType.getDimSize(0) != argSliceSize) {
        return emitOpError("axisStats must have shape [N,2] "
                           "where N = the slice size defined by the axis dim");
      }
    }
    return success();
}


//===----------------------------------------------------------------------===//
// quant::StatisticsRefOp definitions
//===----------------------------------------------------------------------===//

StatisticsRefOpOperandAdaptor::StatisticsRefOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StatisticsRefOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StatisticsRefOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef StatisticsRefOp::getOperationName() {
  return "quant.stats_ref";
}

Operation::operand_range StatisticsRefOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StatisticsRefOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range StatisticsRefOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr StatisticsRefOp::statsKeyAttr() {
  return this->getAttr("statsKey").cast<StringAttr>();
}

StringRef StatisticsRefOp::statsKey() {
  auto attr = statsKeyAttr();
  return attr.getValue();
}

void StatisticsRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringAttr statsKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("statsKey", statsKey);
  tblgen_state.addTypes(resultType0);
}

void StatisticsRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringAttr statsKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("statsKey", statsKey);
  tblgen_state.addTypes(resultTypes);
}

void StatisticsRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg, StringRef statsKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("statsKey", (*tblgen_builder).getStringAttr("statsKey"));
  tblgen_state.addTypes(resultType0);
}

void StatisticsRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg, StringRef statsKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("statsKey", (*tblgen_builder).getStringAttr("statsKey"));
  tblgen_state.addTypes(resultTypes);
}

void StatisticsRefOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void StatisticsRefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value arg, StringAttr statsKey) {
  tblgen_state.addOperands(arg);
  tblgen_state.addAttribute("statsKey", statsKey);
  tblgen_state.addTypes({arg.getType()});

}

void StatisticsRefOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

LogicalResult StatisticsRefOp::verify() {
  auto tblgen_statsKey = this->getAttr("statsKey");
  if (!tblgen_statsKey) return emitOpError("requires attribute 'statsKey'");
  {
    if (!((tblgen_statsKey.isa<StringAttr>()))) return emitOpError("attribute 'statsKey' failed to satisfy constraint: string attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
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
// quant::StorageCastOp definitions
//===----------------------------------------------------------------------===//

StorageCastOpOperandAdaptor::StorageCastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StorageCastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StorageCastOpOperandAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringRef StorageCastOp::getOperationName() {
  return "quant.scast";
}

Operation::operand_range StorageCastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StorageCastOp::arg() {
  return *getODSOperands(0).begin();
}

Operation::result_range StorageCastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void StorageCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type resultType0, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultType0);
}

void StorageCastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value arg) {
  tblgen_state.addOperands(arg);
  tblgen_state.addTypes(resultTypes);
}

void StorageCastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

LogicalResult StorageCastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))) || ((((v.getType().isa<IntegerType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))))) {
        return emitOpError("operand #") << index << " must be quant_RealOrStorageValueType, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))) || ((((v.getType().isa<IntegerType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<IntegerType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))))) {
        return emitOpError("result #") << index << " must be quant_RealOrStorageValueType, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return mlir::success();
}




#endif  // GET_OP_CLASSES

