/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

spirv::AccessChainOp,
spirv::AddressOfOp,
spirv::AtomicAndOp,
spirv::AtomicCompareExchangeWeakOp,
spirv::AtomicIAddOp,
spirv::AtomicIDecrementOp,
spirv::AtomicIIncrementOp,
spirv::AtomicISubOp,
spirv::AtomicOrOp,
spirv::AtomicSMaxOp,
spirv::AtomicSMinOp,
spirv::AtomicUMaxOp,
spirv::AtomicUMinOp,
spirv::AtomicXorOp,
spirv::BitCountOp,
spirv::BitFieldInsertOp,
spirv::BitFieldSExtractOp,
spirv::BitFieldUExtractOp,
spirv::BitReverseOp,
spirv::BitcastOp,
spirv::BitwiseAndOp,
spirv::BitwiseOrOp,
spirv::BitwiseXorOp,
spirv::BranchConditionalOp,
spirv::BranchOp,
spirv::CompositeConstructOp,
spirv::CompositeExtractOp,
spirv::CompositeInsertOp,
spirv::ConstantOp,
spirv::ControlBarrierOp,
spirv::ConvertFToSOp,
spirv::ConvertFToUOp,
spirv::ConvertSToFOp,
spirv::ConvertUToFOp,
spirv::EntryPointOp,
spirv::ExecutionModeOp,
spirv::FAddOp,
spirv::FConvertOp,
spirv::FDivOp,
spirv::FModOp,
spirv::FMulOp,
spirv::FNegateOp,
spirv::FOrdEqualOp,
spirv::FOrdGreaterThanEqualOp,
spirv::FOrdGreaterThanOp,
spirv::FOrdLessThanEqualOp,
spirv::FOrdLessThanOp,
spirv::FOrdNotEqualOp,
spirv::FRemOp,
spirv::FSubOp,
spirv::FUnordEqualOp,
spirv::FUnordGreaterThanEqualOp,
spirv::FUnordGreaterThanOp,
spirv::FUnordLessThanEqualOp,
spirv::FUnordLessThanOp,
spirv::FUnordNotEqualOp,
spirv::FunctionCallOp,
spirv::GLSLCeilOp,
spirv::GLSLCosOp,
spirv::GLSLExpOp,
spirv::GLSLFAbsOp,
spirv::GLSLFMaxOp,
spirv::GLSLFMinOp,
spirv::GLSLFSignOp,
spirv::GLSLFloorOp,
spirv::GLSLInverseSqrtOp,
spirv::GLSLLogOp,
spirv::GLSLSAbsOp,
spirv::GLSLSMaxOp,
spirv::GLSLSMinOp,
spirv::GLSLSSignOp,
spirv::GLSLSqrtOp,
spirv::GLSLTanhOp,
spirv::GlobalVariableOp,
spirv::GroupNonUniformBallotOp,
spirv::IAddOp,
spirv::IEqualOp,
spirv::IMulOp,
spirv::INotEqualOp,
spirv::ISubOp,
spirv::LoadOp,
spirv::LogicalAndOp,
spirv::LogicalEqualOp,
spirv::LogicalNotEqualOp,
spirv::LogicalNotOp,
spirv::LogicalOrOp,
spirv::LoopOp,
spirv::MemoryBarrierOp,
spirv::MergeOp,
spirv::ModuleEndOp,
spirv::ModuleOp,
spirv::NotOp,
spirv::ReferenceOfOp,
spirv::ReturnOp,
spirv::ReturnValueOp,
spirv::SConvertOp,
spirv::SDivOp,
spirv::SGreaterThanEqualOp,
spirv::SGreaterThanOp,
spirv::SLessThanEqualOp,
spirv::SLessThanOp,
spirv::SModOp,
spirv::SRemOp,
spirv::SelectOp,
spirv::SelectionOp,
spirv::ShiftLeftLogicalOp,
spirv::ShiftRightArithmeticOp,
spirv::ShiftRightLogicalOp,
spirv::SpecConstantOp,
spirv::StoreOp,
spirv::SubgroupBallotKHROp,
spirv::UConvertOp,
spirv::UDivOp,
spirv::UGreaterThanEqualOp,
spirv::UGreaterThanOp,
spirv::ULessThanEqualOp,
spirv::ULessThanOp,
spirv::UModOp,
spirv::UndefOp,
spirv::UnreachableOp,
spirv::VariableOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// spirv::AccessChainOp definitions
//===----------------------------------------------------------------------===//

AccessChainOpOperandAdaptor::AccessChainOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AccessChainOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  AccessChainOpOperandAdaptor::base_ptr() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> AccessChainOpOperandAdaptor::indices() {
  return getODSOperands(1);
}

StringRef AccessChainOp::getOperationName() {
  return "spv.AccessChain";
}

Operation::operand_range AccessChainOp::getODSOperands(unsigned index) {
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

Value  AccessChainOp::base_ptr() {
  return *getODSOperands(0).begin();
}

Operation::operand_range AccessChainOp::indices() {
  return getODSOperands(1);
}

Operation::result_range AccessChainOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AccessChainOp::component_ptr() {
  return *getODSResults(0).begin();
}



void AccessChainOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type component_ptr, Value base_ptr, ValueRange indices) {
  tblgen_state.addOperands(base_ptr);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(component_ptr);
}

void AccessChainOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base_ptr, ValueRange indices) {
  tblgen_state.addOperands(base_ptr);
  tblgen_state.addOperands(indices);
  tblgen_state.addTypes(resultTypes);
}

void AccessChainOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AccessChainOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAccessChainOp(parser, result);
}

void AccessChainOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult AccessChainOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("result #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
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
// spirv::AddressOfOp definitions
//===----------------------------------------------------------------------===//

AddressOfOpOperandAdaptor::AddressOfOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AddressOfOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef AddressOfOp::getOperationName() {
  return "spv._address_of";
}

Operation::operand_range AddressOfOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range AddressOfOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AddressOfOp::pointer() {
  return *getODSResults(0).begin();
}

FlatSymbolRefAttr AddressOfOp::variableAttr() {
  return this->getAttr("variable").cast<FlatSymbolRefAttr>();
}

StringRef AddressOfOp::variable() {
  auto attr = variableAttr();
  return attr.getValue();
}



void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, FlatSymbolRefAttr variable) {
  tblgen_state.addAttribute("variable", variable);
  tblgen_state.addTypes(pointer);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr variable) {
  tblgen_state.addAttribute("variable", variable);
  tblgen_state.addTypes(resultTypes);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, StringRef variable) {
  tblgen_state.addAttribute("variable", (*tblgen_builder).getSymbolRefAttr(variable));
  tblgen_state.addTypes(pointer);
}

void AddressOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef variable) {
  tblgen_state.addAttribute("variable", (*tblgen_builder).getSymbolRefAttr(variable));
  tblgen_state.addTypes(resultTypes);
}

void AddressOfOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AddressOfOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAddressOfOp(parser, result);
}

void AddressOfOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult AddressOfOp::verify() {
  auto tblgen_variable = this->getAttr("variable");
  if (!tblgen_variable) return emitOpError("requires attribute 'variable'");
  {
    if (!((tblgen_variable.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'variable' failed to satisfy constraint: flat symbol reference attribute");
  }
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("result #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
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
// spirv::AtomicAndOp definitions
//===----------------------------------------------------------------------===//

AtomicAndOpOperandAdaptor::AtomicAndOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicAndOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicAndOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicAndOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicAndOp::getOperationName() {
  return "spv.AtomicAnd";
}

Operation::operand_range AtomicAndOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicAndOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicAndOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicAndOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicAndOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicAndOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicAndOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicAndOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicAndOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicAndOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicAndOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicAndOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicAndOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicCompareExchangeWeakOp definitions
//===----------------------------------------------------------------------===//

AtomicCompareExchangeWeakOpOperandAdaptor::AtomicCompareExchangeWeakOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicCompareExchangeWeakOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicCompareExchangeWeakOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicCompareExchangeWeakOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

Value  AtomicCompareExchangeWeakOpOperandAdaptor::comparator() {
  return *getODSOperands(2).begin();
}

StringRef AtomicCompareExchangeWeakOp::getOperationName() {
  return "spv.AtomicCompareExchangeWeak";
}

Operation::operand_range AtomicCompareExchangeWeakOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicCompareExchangeWeakOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicCompareExchangeWeakOp::value() {
  return *getODSOperands(1).begin();
}

Value  AtomicCompareExchangeWeakOp::comparator() {
  return *getODSOperands(2).begin();
}

Operation::result_range AtomicCompareExchangeWeakOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicCompareExchangeWeakOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicCompareExchangeWeakOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicCompareExchangeWeakOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicCompareExchangeWeakOp::equal_semanticsAttr() {
  return this->getAttr("equal_semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicCompareExchangeWeakOp::equal_semantics() {
  auto attr = equal_semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

IntegerAttr AtomicCompareExchangeWeakOp::unequal_semanticsAttr() {
  return this->getAttr("unequal_semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicCompareExchangeWeakOp::unequal_semantics() {
  auto attr = unequal_semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicCompareExchangeWeakOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(comparator);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("equal_semantics", equal_semantics);
  tblgen_state.addAttribute("unequal_semantics", unequal_semantics);
  tblgen_state.addTypes(result);
}

void AtomicCompareExchangeWeakOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(comparator);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("equal_semantics", equal_semantics);
  tblgen_state.addAttribute("unequal_semantics", unequal_semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicCompareExchangeWeakOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(comparator);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("equal_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(equal_semantics)));
  tblgen_state.addAttribute("unequal_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(unequal_semantics)));
  tblgen_state.addTypes(result);
}

void AtomicCompareExchangeWeakOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addOperands(comparator);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("equal_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(equal_semantics)));
  tblgen_state.addAttribute("unequal_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(unequal_semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicCompareExchangeWeakOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicCompareExchangeWeakOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicCompareExchangeWeakOp(parser, result);
}

void AtomicCompareExchangeWeakOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult AtomicCompareExchangeWeakOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_equal_semantics = this->getAttr("equal_semantics");
  if (!tblgen_equal_semantics) return emitOpError("requires attribute 'equal_semantics'");
  {
    if (!((((tblgen_equal_semantics.isa<IntegerAttr>())) && ((tblgen_equal_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_equal_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'equal_semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  auto tblgen_unequal_semantics = this->getAttr("unequal_semantics");
  if (!tblgen_unequal_semantics) return emitOpError("requires attribute 'unequal_semantics'");
  {
    if (!((((tblgen_unequal_semantics.isa<IntegerAttr>())) && ((tblgen_unequal_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_unequal_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'unequal_semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
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
// spirv::AtomicIAddOp definitions
//===----------------------------------------------------------------------===//

AtomicIAddOpOperandAdaptor::AtomicIAddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicIAddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicIAddOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicIAddOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicIAddOp::getOperationName() {
  return "spv.AtomicIAdd";
}

Operation::operand_range AtomicIAddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicIAddOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicIAddOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicIAddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicIAddOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicIAddOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicIAddOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicIAddOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicIAddOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicIAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicIAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicIAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicIAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicIAddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicIAddOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicIAddOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicIAddOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicIDecrementOp definitions
//===----------------------------------------------------------------------===//

AtomicIDecrementOpOperandAdaptor::AtomicIDecrementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicIDecrementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicIDecrementOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

StringRef AtomicIDecrementOp::getOperationName() {
  return "spv.AtomicIDecrement";
}

Operation::operand_range AtomicIDecrementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicIDecrementOp::pointer() {
  return *getODSOperands(0).begin();
}

Operation::result_range AtomicIDecrementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicIDecrementOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicIDecrementOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicIDecrementOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicIDecrementOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicIDecrementOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicIDecrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicIDecrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicIDecrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicIDecrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicIDecrementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicIDecrementOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, false);
}

void AtomicIDecrementOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicIDecrementOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicIIncrementOp definitions
//===----------------------------------------------------------------------===//

AtomicIIncrementOpOperandAdaptor::AtomicIIncrementOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicIIncrementOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicIIncrementOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

StringRef AtomicIIncrementOp::getOperationName() {
  return "spv.AtomicIIncrement";
}

Operation::operand_range AtomicIIncrementOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicIIncrementOp::pointer() {
  return *getODSOperands(0).begin();
}

Operation::result_range AtomicIIncrementOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicIIncrementOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicIIncrementOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicIIncrementOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicIIncrementOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicIIncrementOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicIIncrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicIIncrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicIIncrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicIIncrementOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicIIncrementOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicIIncrementOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, false);
}

void AtomicIIncrementOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicIIncrementOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicISubOp definitions
//===----------------------------------------------------------------------===//

AtomicISubOpOperandAdaptor::AtomicISubOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicISubOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicISubOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicISubOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicISubOp::getOperationName() {
  return "spv.AtomicISub";
}

Operation::operand_range AtomicISubOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicISubOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicISubOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicISubOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicISubOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicISubOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicISubOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicISubOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicISubOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicISubOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicISubOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicISubOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicISubOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicOrOp definitions
//===----------------------------------------------------------------------===//

AtomicOrOpOperandAdaptor::AtomicOrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicOrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicOrOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicOrOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicOrOp::getOperationName() {
  return "spv.AtomicOr";
}

Operation::operand_range AtomicOrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicOrOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicOrOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicOrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicOrOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicOrOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicOrOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicOrOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicOrOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicOrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicOrOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicOrOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicOrOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicSMaxOp definitions
//===----------------------------------------------------------------------===//

AtomicSMaxOpOperandAdaptor::AtomicSMaxOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicSMaxOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicSMaxOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicSMaxOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicSMaxOp::getOperationName() {
  return "spv.AtomicSMax";
}

Operation::operand_range AtomicSMaxOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicSMaxOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicSMaxOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicSMaxOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicSMaxOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicSMaxOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicSMaxOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicSMaxOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicSMaxOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicSMaxOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicSMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicSMaxOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicSMaxOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicSMinOp definitions
//===----------------------------------------------------------------------===//

AtomicSMinOpOperandAdaptor::AtomicSMinOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicSMinOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicSMinOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicSMinOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicSMinOp::getOperationName() {
  return "spv.AtomicSMin";
}

Operation::operand_range AtomicSMinOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicSMinOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicSMinOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicSMinOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicSMinOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicSMinOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicSMinOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicSMinOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicSMinOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicSMinOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicSMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicSMinOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicSMinOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicUMaxOp definitions
//===----------------------------------------------------------------------===//

AtomicUMaxOpOperandAdaptor::AtomicUMaxOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicUMaxOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicUMaxOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicUMaxOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicUMaxOp::getOperationName() {
  return "spv.AtomicUMax";
}

Operation::operand_range AtomicUMaxOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicUMaxOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicUMaxOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicUMaxOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicUMaxOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicUMaxOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicUMaxOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicUMaxOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicUMaxOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicUMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicUMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicUMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicUMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicUMaxOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicUMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicUMaxOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicUMaxOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicUMinOp definitions
//===----------------------------------------------------------------------===//

AtomicUMinOpOperandAdaptor::AtomicUMinOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicUMinOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicUMinOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicUMinOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicUMinOp::getOperationName() {
  return "spv.AtomicUMin";
}

Operation::operand_range AtomicUMinOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicUMinOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicUMinOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicUMinOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicUMinOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicUMinOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicUMinOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicUMinOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicUMinOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicUMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicUMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicUMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicUMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicUMinOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicUMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicUMinOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicUMinOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::AtomicXorOp definitions
//===----------------------------------------------------------------------===//

AtomicXorOpOperandAdaptor::AtomicXorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> AtomicXorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  AtomicXorOpOperandAdaptor::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicXorOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef AtomicXorOp::getOperationName() {
  return "spv.AtomicXor";
}

Operation::operand_range AtomicXorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  AtomicXorOp::pointer() {
  return *getODSOperands(0).begin();
}

Value  AtomicXorOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range AtomicXorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  AtomicXorOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicXorOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope AtomicXorOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr AtomicXorOp::semanticsAttr() {
  return this->getAttr("semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics AtomicXorOp::semantics() {
  auto attr = semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void AtomicXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(result);
}

void AtomicXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("semantics", semantics);
  tblgen_state.addTypes(resultTypes);
}

void AtomicXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(result);
}

void AtomicXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value) {
  tblgen_state.addOperands(pointer);
  tblgen_state.addOperands(value);
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(semantics)));
  tblgen_state.addTypes(resultTypes);
}

void AtomicXorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult AtomicXorOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAtomicUpdateOp(parser, result, true);
}

void AtomicXorOp::print(OpAsmPrinter &p) {
  return ::printAtomicUpdateOp(getOperation(), p);
}

LogicalResult AtomicXorOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_semantics = this->getAttr("semantics");
  if (!tblgen_semantics) return emitOpError("requires attribute 'semantics'");
  {
    if (!((((tblgen_semantics.isa<IntegerAttr>())) && ((tblgen_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyAtomicUpdateOp(getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::BitCountOp definitions
//===----------------------------------------------------------------------===//

BitCountOpOperandAdaptor::BitCountOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitCountOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitCountOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef BitCountOp::getOperationName() {
  return "spv.BitCount";
}

Operation::operand_range BitCountOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitCountOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range BitCountOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitCountOp::result() {
  return *getODSResults(0).begin();
}

void BitCountOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void BitCountOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void BitCountOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void BitCountOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void BitCountOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult BitCountOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseUnaryOp(parser, result);
}

void BitCountOp::print(OpAsmPrinter &p) {
  return ::printUnaryOp(getOperation(), p);
}

LogicalResult BitCountOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::BitFieldInsertOp definitions
//===----------------------------------------------------------------------===//

BitFieldInsertOpOperandAdaptor::BitFieldInsertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitFieldInsertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitFieldInsertOpOperandAdaptor::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldInsertOpOperandAdaptor::insert() {
  return *getODSOperands(1).begin();
}

Value  BitFieldInsertOpOperandAdaptor::offset() {
  return *getODSOperands(2).begin();
}

Value  BitFieldInsertOpOperandAdaptor::count() {
  return *getODSOperands(3).begin();
}

StringRef BitFieldInsertOp::getOperationName() {
  return "spv.BitFieldInsert";
}

Operation::operand_range BitFieldInsertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitFieldInsertOp::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldInsertOp::insert() {
  return *getODSOperands(1).begin();
}

Value  BitFieldInsertOp::offset() {
  return *getODSOperands(2).begin();
}

Value  BitFieldInsertOp::count() {
  return *getODSOperands(3).begin();
}

Operation::result_range BitFieldInsertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitFieldInsertOp::result() {
  return *getODSResults(0).begin();
}

void BitFieldInsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value insert, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(insert);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(result);
}

void BitFieldInsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value insert, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(insert);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(resultTypes);
}

void BitFieldInsertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BitFieldInsertOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBitFieldInsertOp(parser, result);
}

void BitFieldInsertOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult BitFieldInsertOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(3)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
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
// spirv::BitFieldSExtractOp definitions
//===----------------------------------------------------------------------===//

BitFieldSExtractOpOperandAdaptor::BitFieldSExtractOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitFieldSExtractOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitFieldSExtractOpOperandAdaptor::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldSExtractOpOperandAdaptor::offset() {
  return *getODSOperands(1).begin();
}

Value  BitFieldSExtractOpOperandAdaptor::count() {
  return *getODSOperands(2).begin();
}

StringRef BitFieldSExtractOp::getOperationName() {
  return "spv.BitFieldSExtract";
}

Operation::operand_range BitFieldSExtractOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitFieldSExtractOp::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldSExtractOp::offset() {
  return *getODSOperands(1).begin();
}

Value  BitFieldSExtractOp::count() {
  return *getODSOperands(2).begin();
}

Operation::result_range BitFieldSExtractOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitFieldSExtractOp::result() {
  return *getODSResults(0).begin();
}

void BitFieldSExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(result);
}

void BitFieldSExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(resultTypes);
}

void BitFieldSExtractOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BitFieldSExtractOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBitFieldExtractOp(parser, result);
}

void BitFieldSExtractOp::print(OpAsmPrinter &p) {
  ::printBitFieldExtractOp(this->getOperation(), p);
}

LogicalResult BitFieldSExtractOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyBitFieldExtractOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::BitFieldUExtractOp definitions
//===----------------------------------------------------------------------===//

BitFieldUExtractOpOperandAdaptor::BitFieldUExtractOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitFieldUExtractOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitFieldUExtractOpOperandAdaptor::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldUExtractOpOperandAdaptor::offset() {
  return *getODSOperands(1).begin();
}

Value  BitFieldUExtractOpOperandAdaptor::count() {
  return *getODSOperands(2).begin();
}

StringRef BitFieldUExtractOp::getOperationName() {
  return "spv.BitFieldUExtract";
}

Operation::operand_range BitFieldUExtractOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitFieldUExtractOp::base() {
  return *getODSOperands(0).begin();
}

Value  BitFieldUExtractOp::offset() {
  return *getODSOperands(1).begin();
}

Value  BitFieldUExtractOp::count() {
  return *getODSOperands(2).begin();
}

Operation::result_range BitFieldUExtractOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitFieldUExtractOp::result() {
  return *getODSResults(0).begin();
}

void BitFieldUExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value base, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(result);
}

void BitFieldUExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value base, Value offset, Value count) {
  tblgen_state.addOperands(base);
  tblgen_state.addOperands(offset);
  tblgen_state.addOperands(count);
  tblgen_state.addTypes(resultTypes);
}

void BitFieldUExtractOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BitFieldUExtractOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBitFieldExtractOp(parser, result);
}

void BitFieldUExtractOp::print(OpAsmPrinter &p) {
  ::printBitFieldExtractOp(this->getOperation(), p);
}

LogicalResult BitFieldUExtractOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!(((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyBitFieldExtractOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::BitReverseOp definitions
//===----------------------------------------------------------------------===//

BitReverseOpOperandAdaptor::BitReverseOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitReverseOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitReverseOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef BitReverseOp::getOperationName() {
  return "spv.BitReverse";
}

Operation::operand_range BitReverseOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitReverseOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range BitReverseOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitReverseOp::result() {
  return *getODSResults(0).begin();
}

void BitReverseOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void BitReverseOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void BitReverseOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void BitReverseOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void BitReverseOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult BitReverseOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseUnaryOp(parser, result);
}

void BitReverseOp::print(OpAsmPrinter &p) {
  return ::printUnaryOp(getOperation(), p);
}

LogicalResult BitReverseOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::BitcastOp definitions
//===----------------------------------------------------------------------===//

BitcastOpOperandAdaptor::BitcastOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitcastOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitcastOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef BitcastOp::getOperationName() {
  return "spv.Bitcast";
}

Operation::operand_range BitcastOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitcastOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range BitcastOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitcastOp::result() {
  return *getODSResults(0).begin();
}

void BitcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void BitcastOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void BitcastOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult BitcastOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void BitcastOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult BitcastOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64())))) || ((v.getType().isInteger(1)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4)))))) || ((v.getType().isa<::mlir::spirv::PointerType>())))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or 16/32/64-bit float or 1-bit integer or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64())))) || ((v.getType().isInteger(1)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4)))))) || ((v.getType().isa<::mlir::spirv::PointerType>())))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or 16/32/64-bit float or 1-bit integer or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type, but got " << v.getType();
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
// spirv::BitwiseAndOp definitions
//===----------------------------------------------------------------------===//

BitwiseAndOpOperandAdaptor::BitwiseAndOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitwiseAndOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitwiseAndOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseAndOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef BitwiseAndOp::getOperationName() {
  return "spv.BitwiseAnd";
}

Operation::operand_range BitwiseAndOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitwiseAndOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseAndOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range BitwiseAndOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitwiseAndOp::result() {
  return *getODSResults(0).begin();
}

void BitwiseAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void BitwiseAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void BitwiseAndOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void BitwiseAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void BitwiseAndOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult BitwiseAndOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void BitwiseAndOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult BitwiseAndOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::BitwiseOrOp definitions
//===----------------------------------------------------------------------===//

BitwiseOrOpOperandAdaptor::BitwiseOrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitwiseOrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitwiseOrOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseOrOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef BitwiseOrOp::getOperationName() {
  return "spv.BitwiseOr";
}

Operation::operand_range BitwiseOrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitwiseOrOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseOrOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range BitwiseOrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitwiseOrOp::result() {
  return *getODSResults(0).begin();
}

void BitwiseOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void BitwiseOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void BitwiseOrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void BitwiseOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void BitwiseOrOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult BitwiseOrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void BitwiseOrOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult BitwiseOrOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::BitwiseXorOp definitions
//===----------------------------------------------------------------------===//

BitwiseXorOpOperandAdaptor::BitwiseXorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BitwiseXorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  BitwiseXorOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseXorOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef BitwiseXorOp::getOperationName() {
  return "spv.BitwiseXor";
}

Operation::operand_range BitwiseXorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  BitwiseXorOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  BitwiseXorOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range BitwiseXorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  BitwiseXorOp::result() {
  return *getODSResults(0).begin();
}

void BitwiseXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void BitwiseXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void BitwiseXorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void BitwiseXorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void BitwiseXorOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult BitwiseXorOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void BitwiseXorOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult BitwiseXorOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::BranchConditionalOp definitions
//===----------------------------------------------------------------------===//

BranchConditionalOpOperandAdaptor::BranchConditionalOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BranchConditionalOpOperandAdaptor::getODSOperands(unsigned index) {
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

Value  BranchConditionalOpOperandAdaptor::condition() {
  return *getODSOperands(0).begin();
}

ArrayRef<Value> BranchConditionalOpOperandAdaptor::branch_arguments() {
  return getODSOperands(1);
}

StringRef BranchConditionalOp::getOperationName() {
  return "spv.BranchConditional";
}

Operation::operand_range BranchConditionalOp::getODSOperands(unsigned index) {
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

Value  BranchConditionalOp::condition() {
  return *getODSOperands(0).begin();
}

Operation::operand_range BranchConditionalOp::branch_arguments() {
  return getODSOperands(1);
}

Operation::result_range BranchConditionalOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

ArrayAttr BranchConditionalOp::branch_weightsAttr() {
  return this->getAttr("branch_weights").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > BranchConditionalOp::branch_weights() {
  auto attr = branch_weightsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

void BranchConditionalOp::build(Builder *builder, OperationState &state, Value condition, Block *trueBlock, ValueRange trueArguments, Block *falseBlock, ValueRange falseArguments, Optional<std::pair<uint32_t, uint32_t>> weights ) {
        state.addOperands(condition);
        state.addSuccessor(trueBlock, trueArguments);
        state.addSuccessor(falseBlock, falseArguments);
        if (weights) {
          auto attr =
              builder->getI32ArrayAttr({static_cast<int32_t>(weights->first),
                                        static_cast<int32_t>(weights->second)});
          state.addAttribute("branch_weights", attr);
        }
      
}

ParseResult BranchConditionalOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBranchConditionalOp(parser, result);
}

void BranchConditionalOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult BranchConditionalOp::verify() {
  auto tblgen_branch_weights = this->getAttr("branch_weights");
  if (tblgen_branch_weights) {
    if (!(((tblgen_branch_weights.isa<ArrayAttr>())) && (llvm::all_of(tblgen_branch_weights.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(32))); })))) return emitOpError("attribute 'branch_weights' failed to satisfy constraint: 32-bit integer array attribute");
  }
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
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










//===----------------------------------------------------------------------===//
// spirv::BranchOp definitions
//===----------------------------------------------------------------------===//

BranchOpOperandAdaptor::BranchOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> BranchOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> BranchOpOperandAdaptor::block_arguments() {
  return getODSOperands(0);
}

StringRef BranchOp::getOperationName() {
  return "spv.Branch";
}

Operation::operand_range BranchOp::getODSOperands(unsigned index) {
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

Operation::operand_range BranchOp::block_arguments() {
  return getODSOperands(0);
}

Operation::result_range BranchOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void BranchOp::build(Builder *, OperationState &state, Block *successor, ValueRange arguments ) {
        state.addSuccessor(successor, arguments);
      
}

ParseResult BranchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseBranchOp(parser, result);
}

void BranchOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult BranchOp::verify() {
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
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
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verify(*this);
}










//===----------------------------------------------------------------------===//
// spirv::CompositeConstructOp definitions
//===----------------------------------------------------------------------===//

CompositeConstructOpOperandAdaptor::CompositeConstructOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CompositeConstructOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> CompositeConstructOpOperandAdaptor::constituents() {
  return getODSOperands(0);
}

StringRef CompositeConstructOp::getOperationName() {
  return "spv.CompositeConstruct";
}

Operation::operand_range CompositeConstructOp::getODSOperands(unsigned index) {
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

Operation::operand_range CompositeConstructOp::constituents() {
  return getODSOperands(0);
}

Operation::result_range CompositeConstructOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  CompositeConstructOp::result() {
  return *getODSResults(0).begin();
}

void CompositeConstructOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, ValueRange constituents) {
  tblgen_state.addOperands(constituents);
  tblgen_state.addTypes(result);
}

void CompositeConstructOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange constituents) {
  tblgen_state.addOperands(constituents);
  tblgen_state.addTypes(resultTypes);
}

void CompositeConstructOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CompositeConstructOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCompositeConstructOp(parser, result);
}

void CompositeConstructOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult CompositeConstructOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::CompositeExtractOp definitions
//===----------------------------------------------------------------------===//

CompositeExtractOpOperandAdaptor::CompositeExtractOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CompositeExtractOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CompositeExtractOpOperandAdaptor::composite() {
  return *getODSOperands(0).begin();
}

StringRef CompositeExtractOp::getOperationName() {
  return "spv.CompositeExtract";
}

Operation::operand_range CompositeExtractOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CompositeExtractOp::composite() {
  return *getODSOperands(0).begin();
}

Operation::result_range CompositeExtractOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  CompositeExtractOp::component() {
  return *getODSResults(0).begin();
}

ArrayAttr CompositeExtractOp::indicesAttr() {
  return this->getAttr("indices").cast<ArrayAttr>();
}

ArrayAttr CompositeExtractOp::indices() {
  auto attr = indicesAttr();
  return attr;
}



void CompositeExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type component, Value composite, ArrayAttr indices) {
  tblgen_state.addOperands(composite);
  tblgen_state.addAttribute("indices", indices);
  tblgen_state.addTypes(component);
}

void CompositeExtractOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value composite, ArrayAttr indices) {
  tblgen_state.addOperands(composite);
  tblgen_state.addAttribute("indices", indices);
  tblgen_state.addTypes(resultTypes);
}

void CompositeExtractOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CompositeExtractOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCompositeExtractOp(parser, result);
}

void CompositeExtractOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult CompositeExtractOp::verify() {
  auto tblgen_indices = this->getAttr("indices");
  if (!tblgen_indices) return emitOpError("requires attribute 'indices'");
  {
    if (!(((tblgen_indices.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indices.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(32))); })))) return emitOpError("attribute 'indices' failed to satisfy constraint: 32-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::CompositeInsertOp definitions
//===----------------------------------------------------------------------===//

CompositeInsertOpOperandAdaptor::CompositeInsertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> CompositeInsertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  CompositeInsertOpOperandAdaptor::object() {
  return *getODSOperands(0).begin();
}

Value  CompositeInsertOpOperandAdaptor::composite() {
  return *getODSOperands(1).begin();
}

StringRef CompositeInsertOp::getOperationName() {
  return "spv.CompositeInsert";
}

Operation::operand_range CompositeInsertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  CompositeInsertOp::object() {
  return *getODSOperands(0).begin();
}

Value  CompositeInsertOp::composite() {
  return *getODSOperands(1).begin();
}

Operation::result_range CompositeInsertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  CompositeInsertOp::result() {
  return *getODSResults(0).begin();
}

ArrayAttr CompositeInsertOp::indicesAttr() {
  return this->getAttr("indices").cast<ArrayAttr>();
}

ArrayAttr CompositeInsertOp::indices() {
  auto attr = indicesAttr();
  return attr;
}

void CompositeInsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value object, Value composite, ArrayAttr indices) {
  tblgen_state.addOperands(object);
  tblgen_state.addOperands(composite);
  tblgen_state.addAttribute("indices", indices);
  tblgen_state.addTypes(result);
}

void CompositeInsertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value object, Value composite, ArrayAttr indices) {
  tblgen_state.addOperands(object);
  tblgen_state.addOperands(composite);
  tblgen_state.addAttribute("indices", indices);
  tblgen_state.addTypes(resultTypes);
}

void CompositeInsertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult CompositeInsertOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseCompositeInsertOp(parser, result);
}

void CompositeInsertOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult CompositeInsertOp::verify() {
  auto tblgen_indices = this->getAttr("indices");
  if (!tblgen_indices) return emitOpError("requires attribute 'indices'");
  {
    if (!(((tblgen_indices.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indices.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(32))); })))) return emitOpError("attribute 'indices' failed to satisfy constraint: 32-bit integer array attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::ConstantOp definitions
//===----------------------------------------------------------------------===//

ConstantOpOperandAdaptor::ConstantOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConstantOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ConstantOp::getOperationName() {
  return "spv.constant";
}

Operation::operand_range ConstantOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ConstantOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConstantOp::constant() {
  return *getODSResults(0).begin();
}

Attribute ConstantOp::valueAttr() {
  return this->getAttr("value").cast<Attribute>();
}

Attribute ConstantOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type constant, Attribute value) {
  tblgen_state.addAttribute("value", value);
  tblgen_state.addTypes(constant);
}

void ConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Attribute value) {
  tblgen_state.addAttribute("value", value);
  tblgen_state.addTypes(resultTypes);
}

void ConstantOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConstantOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseConstantOp(parser, result);
}

void ConstantOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ConstantOp::verify() {
  auto tblgen_value = this->getAttr("value");
  if (!tblgen_value) return emitOpError("requires attribute 'value'");
  {
    if (!((true))) return emitOpError("attribute 'value' failed to satisfy constraint: any attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::ControlBarrierOp definitions
//===----------------------------------------------------------------------===//

ControlBarrierOpOperandAdaptor::ControlBarrierOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ControlBarrierOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ControlBarrierOp::getOperationName() {
  return "spv.ControlBarrier";
}

Operation::operand_range ControlBarrierOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ControlBarrierOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr ControlBarrierOp::execution_scopeAttr() {
  return this->getAttr("execution_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope ControlBarrierOp::execution_scope() {
  auto attr = execution_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr ControlBarrierOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope ControlBarrierOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr ControlBarrierOp::memory_semanticsAttr() {
  return this->getAttr("memory_semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics ControlBarrierOp::memory_semantics() {
  auto attr = memory_semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void ControlBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics) {
  tblgen_state.addAttribute("execution_scope", execution_scope);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("memory_semantics", memory_semantics);
}

void ControlBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics) {
  tblgen_state.addAttribute("execution_scope", execution_scope);
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("memory_semantics", memory_semantics);
  tblgen_state.addTypes(resultTypes);
}

void ControlBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics) {
  tblgen_state.addAttribute("execution_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_scope)));
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("memory_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_semantics)));
}

void ControlBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics) {
  tblgen_state.addAttribute("execution_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_scope)));
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("memory_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_semantics)));
  tblgen_state.addTypes(resultTypes);
}

void ControlBarrierOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ControlBarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseControlBarrierOp(parser, result);
}

void ControlBarrierOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ControlBarrierOp::verify() {
  auto tblgen_execution_scope = this->getAttr("execution_scope");
  if (!tblgen_execution_scope) return emitOpError("requires attribute 'execution_scope'");
  {
    if (!((((tblgen_execution_scope.isa<IntegerAttr>())) && ((tblgen_execution_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'execution_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_memory_semantics = this->getAttr("memory_semantics");
  if (!tblgen_memory_semantics) return emitOpError("requires attribute 'memory_semantics'");
  {
    if (!((((tblgen_memory_semantics.isa<IntegerAttr>())) && ((tblgen_memory_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_memory_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'memory_semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyMemorySemantics(*this);
}










//===----------------------------------------------------------------------===//
// spirv::ConvertFToSOp definitions
//===----------------------------------------------------------------------===//

ConvertFToSOpOperandAdaptor::ConvertFToSOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertFToSOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertFToSOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertFToSOp::getOperationName() {
  return "spv.ConvertFToS";
}

Operation::operand_range ConvertFToSOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertFToSOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertFToSOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConvertFToSOp::result() {
  return *getODSResults(0).begin();
}

void ConvertFToSOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void ConvertFToSOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertFToSOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConvertFToSOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ConvertFToSOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ConvertFToSOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::ConvertFToUOp definitions
//===----------------------------------------------------------------------===//

ConvertFToUOpOperandAdaptor::ConvertFToUOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertFToUOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertFToUOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertFToUOp::getOperationName() {
  return "spv.ConvertFToU";
}

Operation::operand_range ConvertFToUOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertFToUOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertFToUOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConvertFToUOp::result() {
  return *getODSResults(0).begin();
}

void ConvertFToUOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void ConvertFToUOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertFToUOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConvertFToUOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ConvertFToUOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ConvertFToUOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::ConvertSToFOp definitions
//===----------------------------------------------------------------------===//

ConvertSToFOpOperandAdaptor::ConvertSToFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertSToFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertSToFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertSToFOp::getOperationName() {
  return "spv.ConvertSToF";
}

Operation::operand_range ConvertSToFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertSToFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertSToFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConvertSToFOp::result() {
  return *getODSResults(0).begin();
}

void ConvertSToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void ConvertSToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertSToFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConvertSToFOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ConvertSToFOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ConvertSToFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::ConvertUToFOp definitions
//===----------------------------------------------------------------------===//

ConvertUToFOpOperandAdaptor::ConvertUToFOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ConvertUToFOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ConvertUToFOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef ConvertUToFOp::getOperationName() {
  return "spv.ConvertUToF";
}

Operation::operand_range ConvertUToFOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ConvertUToFOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range ConvertUToFOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ConvertUToFOp::result() {
  return *getODSResults(0).begin();
}

void ConvertUToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void ConvertUToFOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void ConvertUToFOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ConvertUToFOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ConvertUToFOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ConvertUToFOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::EntryPointOp definitions
//===----------------------------------------------------------------------===//

EntryPointOpOperandAdaptor::EntryPointOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> EntryPointOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef EntryPointOp::getOperationName() {
  return "spv.EntryPoint";
}

Operation::operand_range EntryPointOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range EntryPointOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr EntryPointOp::execution_modelAttr() {
  return this->getAttr("execution_model").cast<IntegerAttr>();
}

::mlir::spirv::ExecutionModel EntryPointOp::execution_model() {
  auto attr = execution_modelAttr();
  return static_cast<::mlir::spirv::ExecutionModel>(attr.getInt());
}

FlatSymbolRefAttr EntryPointOp::fnAttr() {
  return this->getAttr("fn").cast<FlatSymbolRefAttr>();
}

StringRef EntryPointOp::fn() {
  auto attr = fnAttr();
  return attr.getValue();
}

ArrayAttr EntryPointOp::interfaceAttr() {
  return this->getAttr("interface").cast<ArrayAttr>();
}

ArrayAttr EntryPointOp::interface() {
  auto attr = interfaceAttr();
  return attr;
}



void EntryPointOp::build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface) {
  tblgen_state.addAttribute("execution_model", execution_model);
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addAttribute("interface", interface);
}

void EntryPointOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface) {
  tblgen_state.addAttribute("execution_model", execution_model);
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addAttribute("interface", interface);
  tblgen_state.addTypes(resultTypes);
}

void EntryPointOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface) {
  tblgen_state.addAttribute("execution_model", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_model)));
  tblgen_state.addAttribute("fn", (*tblgen_builder).getSymbolRefAttr(fn));
  tblgen_state.addAttribute("interface", interface);
}

void EntryPointOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface) {
  tblgen_state.addAttribute("execution_model", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_model)));
  tblgen_state.addAttribute("fn", (*tblgen_builder).getSymbolRefAttr(fn));
  tblgen_state.addAttribute("interface", interface);
  tblgen_state.addTypes(resultTypes);
}

void EntryPointOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult EntryPointOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseEntryPointOp(parser, result);
}

void EntryPointOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult EntryPointOp::verify() {
  auto tblgen_execution_model = this->getAttr("execution_model");
  if (!tblgen_execution_model) return emitOpError("requires attribute 'execution_model'");
  {
    if (!((((tblgen_execution_model.isa<IntegerAttr>())) && ((tblgen_execution_model.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_execution_model.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5267)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5268)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5313)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5314)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5315)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5316)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5317)) || ((tblgen_execution_model.cast<IntegerAttr>().getInt() == 5318))))) return emitOpError("attribute 'execution_model' failed to satisfy constraint: valid SPIR-V ExecutionModel");
  }
  auto tblgen_fn = this->getAttr("fn");
  if (!tblgen_fn) return emitOpError("requires attribute 'fn'");
  {
    if (!((tblgen_fn.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'fn' failed to satisfy constraint: flat symbol reference attribute");
  }
  auto tblgen_interface = this->getAttr("interface");
  if (!tblgen_interface) return emitOpError("requires attribute 'interface'");
  {
    if (!(((tblgen_interface.isa<ArrayAttr>())) && (llvm::all_of(tblgen_interface.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<SymbolRefAttr>()); })))) return emitOpError("attribute 'interface' failed to satisfy constraint: symbol ref array attribute");
  }
  if (!((llvm::isa_and_nonnull<spirv::ModuleOp>((*this->getOperation()).getParentOp())))) {
    return emitOpError("failed to verify that op must appear in a 'spv.module' block");
  }
  {
    unsigned index = 0; (void)index;
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
// spirv::ExecutionModeOp definitions
//===----------------------------------------------------------------------===//

ExecutionModeOpOperandAdaptor::ExecutionModeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ExecutionModeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ExecutionModeOp::getOperationName() {
  return "spv.ExecutionMode";
}

Operation::operand_range ExecutionModeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ExecutionModeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

FlatSymbolRefAttr ExecutionModeOp::fnAttr() {
  return this->getAttr("fn").cast<FlatSymbolRefAttr>();
}

StringRef ExecutionModeOp::fn() {
  auto attr = fnAttr();
  return attr.getValue();
}

IntegerAttr ExecutionModeOp::execution_modeAttr() {
  return this->getAttr("execution_mode").cast<IntegerAttr>();
}

::mlir::spirv::ExecutionMode ExecutionModeOp::execution_mode() {
  auto attr = execution_modeAttr();
  return static_cast<::mlir::spirv::ExecutionMode>(attr.getInt());
}

ArrayAttr ExecutionModeOp::valuesAttr() {
  return this->getAttr("values").cast<ArrayAttr>();
}

ArrayAttr ExecutionModeOp::values() {
  auto attr = valuesAttr();
  return attr;
}



void ExecutionModeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values) {
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addAttribute("execution_mode", execution_mode);
  tblgen_state.addAttribute("values", values);
}

void ExecutionModeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values) {
  tblgen_state.addAttribute("fn", fn);
  tblgen_state.addAttribute("execution_mode", execution_mode);
  tblgen_state.addAttribute("values", values);
  tblgen_state.addTypes(resultTypes);
}

void ExecutionModeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values) {
  tblgen_state.addAttribute("fn", (*tblgen_builder).getSymbolRefAttr(fn));
  tblgen_state.addAttribute("execution_mode", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_mode)));
  tblgen_state.addAttribute("values", values);
}

void ExecutionModeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values) {
  tblgen_state.addAttribute("fn", (*tblgen_builder).getSymbolRefAttr(fn));
  tblgen_state.addAttribute("execution_mode", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_mode)));
  tblgen_state.addAttribute("values", values);
  tblgen_state.addTypes(resultTypes);
}

void ExecutionModeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ExecutionModeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExecutionModeOp(parser, result);
}

void ExecutionModeOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ExecutionModeOp::verify() {
  auto tblgen_fn = this->getAttr("fn");
  if (!tblgen_fn) return emitOpError("requires attribute 'fn'");
  {
    if (!((tblgen_fn.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'fn' failed to satisfy constraint: flat symbol reference attribute");
  }
  auto tblgen_execution_mode = this->getAttr("execution_mode");
  if (!tblgen_execution_mode) return emitOpError("requires attribute 'execution_mode'");
  {
    if (!((((tblgen_execution_mode.isa<IntegerAttr>())) && ((tblgen_execution_mode.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 12)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 14)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 15)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 16)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 17)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 18)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 19)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 20)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 21)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 22)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 23)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 24)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 25)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 26)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 27)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 28)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 29)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 30)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 31)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 33)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 34)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 35)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 36)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 37)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 38)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 39)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4446)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4459)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4460)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4461)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4462)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 4463)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5027)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5269)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5270)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5289)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5290)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5298)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5366)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5367)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5368)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5369)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5370)) || ((tblgen_execution_mode.cast<IntegerAttr>().getInt() == 5371))))) return emitOpError("attribute 'execution_mode' failed to satisfy constraint: valid SPIR-V ExecutionMode");
  }
  auto tblgen_values = this->getAttr("values");
  if (!tblgen_values) return emitOpError("requires attribute 'values'");
  {
    if (!(((tblgen_values.isa<ArrayAttr>())) && (llvm::all_of(tblgen_values.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isInteger(32))); })))) return emitOpError("attribute 'values' failed to satisfy constraint: 32-bit integer array attribute");
  }
  if (!((llvm::isa_and_nonnull<spirv::ModuleOp>((*this->getOperation()).getParentOp())))) {
    return emitOpError("failed to verify that op must appear in a 'spv.module' block");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FAddOp definitions
//===----------------------------------------------------------------------===//

FAddOpOperandAdaptor::FAddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FAddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FAddOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FAddOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FAddOp::getOperationName() {
  return "spv.FAdd";
}

Operation::operand_range FAddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FAddOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FAddOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FAddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FAddOp::result() {
  return *getODSResults(0).begin();
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FAddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FAddOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FAddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FAddOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FAddOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FConvertOp definitions
//===----------------------------------------------------------------------===//

FConvertOpOperandAdaptor::FConvertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FConvertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FConvertOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef FConvertOp::getOperationName() {
  return "spv.FConvert";
}

Operation::operand_range FConvertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FConvertOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range FConvertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FConvertOp::result() {
  return *getODSResults(0).begin();
}

void FConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void FConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void FConvertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FConvertOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FConvertOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FConvertOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation(), false);
}










//===----------------------------------------------------------------------===//
// spirv::FDivOp definitions
//===----------------------------------------------------------------------===//

FDivOpOperandAdaptor::FDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FDivOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FDivOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FDivOp::getOperationName() {
  return "spv.FDiv";
}

Operation::operand_range FDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FDivOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FDivOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FDivOp::result() {
  return *getODSResults(0).begin();
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FDivOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FDivOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FModOp definitions
//===----------------------------------------------------------------------===//

FModOpOperandAdaptor::FModOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FModOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FModOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FModOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FModOp::getOperationName() {
  return "spv.FMod";
}

Operation::operand_range FModOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FModOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FModOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FModOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FModOp::result() {
  return *getODSResults(0).begin();
}

void FModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FModOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FModOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FModOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FModOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FModOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FMulOp definitions
//===----------------------------------------------------------------------===//

FMulOpOperandAdaptor::FMulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FMulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FMulOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FMulOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FMulOp::getOperationName() {
  return "spv.FMul";
}

Operation::operand_range FMulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FMulOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FMulOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FMulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FMulOp::result() {
  return *getODSResults(0).begin();
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FMulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FMulOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FMulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FMulOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FMulOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FNegateOp definitions
//===----------------------------------------------------------------------===//

FNegateOpOperandAdaptor::FNegateOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FNegateOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FNegateOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef FNegateOp::getOperationName() {
  return "spv.FNegate";
}

Operation::operand_range FNegateOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FNegateOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range FNegateOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FNegateOp::result() {
  return *getODSResults(0).begin();
}

void FNegateOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void FNegateOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void FNegateOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FNegateOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void FNegateOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FNegateOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseUnaryOp(parser, result);
}

void FNegateOp::print(OpAsmPrinter &p) {
  return ::printUnaryOp(getOperation(), p);
}

LogicalResult FNegateOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdEqualOp definitions
//===----------------------------------------------------------------------===//

FOrdEqualOpOperandAdaptor::FOrdEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdEqualOp::getOperationName() {
  return "spv.FOrdEqual";
}

Operation::operand_range FOrdEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdEqualOp::result() {
  return *getODSResults(0).begin();
}

void FOrdEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanEqualOp definitions
//===----------------------------------------------------------------------===//

FOrdGreaterThanEqualOpOperandAdaptor::FOrdGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdGreaterThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdGreaterThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdGreaterThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdGreaterThanEqualOp::getOperationName() {
  return "spv.FOrdGreaterThanEqual";
}

Operation::operand_range FOrdGreaterThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdGreaterThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdGreaterThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdGreaterThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdGreaterThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void FOrdGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdGreaterThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdGreaterThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdGreaterThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdGreaterThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanOp definitions
//===----------------------------------------------------------------------===//

FOrdGreaterThanOpOperandAdaptor::FOrdGreaterThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdGreaterThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdGreaterThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdGreaterThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdGreaterThanOp::getOperationName() {
  return "spv.FOrdGreaterThan";
}

Operation::operand_range FOrdGreaterThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdGreaterThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdGreaterThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdGreaterThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdGreaterThanOp::result() {
  return *getODSResults(0).begin();
}

void FOrdGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdGreaterThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdGreaterThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdGreaterThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdGreaterThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanEqualOp definitions
//===----------------------------------------------------------------------===//

FOrdLessThanEqualOpOperandAdaptor::FOrdLessThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdLessThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdLessThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdLessThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdLessThanEqualOp::getOperationName() {
  return "spv.FOrdLessThanEqual";
}

Operation::operand_range FOrdLessThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdLessThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdLessThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdLessThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdLessThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void FOrdLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdLessThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdLessThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdLessThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdLessThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanOp definitions
//===----------------------------------------------------------------------===//

FOrdLessThanOpOperandAdaptor::FOrdLessThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdLessThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdLessThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdLessThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdLessThanOp::getOperationName() {
  return "spv.FOrdLessThan";
}

Operation::operand_range FOrdLessThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdLessThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdLessThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdLessThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdLessThanOp::result() {
  return *getODSResults(0).begin();
}

void FOrdLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdLessThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdLessThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdLessThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdLessThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FOrdNotEqualOp definitions
//===----------------------------------------------------------------------===//

FOrdNotEqualOpOperandAdaptor::FOrdNotEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FOrdNotEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FOrdNotEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdNotEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FOrdNotEqualOp::getOperationName() {
  return "spv.FOrdNotEqual";
}

Operation::operand_range FOrdNotEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FOrdNotEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FOrdNotEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FOrdNotEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FOrdNotEqualOp::result() {
  return *getODSResults(0).begin();
}

void FOrdNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FOrdNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FOrdNotEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FOrdNotEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FOrdNotEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FOrdNotEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FRemOp definitions
//===----------------------------------------------------------------------===//

FRemOpOperandAdaptor::FRemOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FRemOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FRemOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FRemOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FRemOp::getOperationName() {
  return "spv.FRem";
}

Operation::operand_range FRemOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FRemOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FRemOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FRemOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FRemOp::result() {
  return *getODSResults(0).begin();
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FRemOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FRemOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FRemOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FRemOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FSubOp definitions
//===----------------------------------------------------------------------===//

FSubOpOperandAdaptor::FSubOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FSubOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FSubOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FSubOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FSubOp::getOperationName() {
  return "spv.FSub";
}

Operation::operand_range FSubOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FSubOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FSubOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FSubOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FSubOp::result() {
  return *getODSResults(0).begin();
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FSubOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void FSubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void FSubOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult FSubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FSubOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult FSubOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordEqualOp definitions
//===----------------------------------------------------------------------===//

FUnordEqualOpOperandAdaptor::FUnordEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordEqualOp::getOperationName() {
  return "spv.FUnordEqual";
}

Operation::operand_range FUnordEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordEqualOp::result() {
  return *getODSResults(0).begin();
}

void FUnordEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanEqualOp definitions
//===----------------------------------------------------------------------===//

FUnordGreaterThanEqualOpOperandAdaptor::FUnordGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordGreaterThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordGreaterThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordGreaterThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordGreaterThanEqualOp::getOperationName() {
  return "spv.FUnordGreaterThanEqual";
}

Operation::operand_range FUnordGreaterThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordGreaterThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordGreaterThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordGreaterThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordGreaterThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void FUnordGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordGreaterThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordGreaterThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordGreaterThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordGreaterThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanOp definitions
//===----------------------------------------------------------------------===//

FUnordGreaterThanOpOperandAdaptor::FUnordGreaterThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordGreaterThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordGreaterThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordGreaterThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordGreaterThanOp::getOperationName() {
  return "spv.FUnordGreaterThan";
}

Operation::operand_range FUnordGreaterThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordGreaterThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordGreaterThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordGreaterThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordGreaterThanOp::result() {
  return *getODSResults(0).begin();
}

void FUnordGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordGreaterThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordGreaterThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordGreaterThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordGreaterThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanEqualOp definitions
//===----------------------------------------------------------------------===//

FUnordLessThanEqualOpOperandAdaptor::FUnordLessThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordLessThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordLessThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordLessThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordLessThanEqualOp::getOperationName() {
  return "spv.FUnordLessThanEqual";
}

Operation::operand_range FUnordLessThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordLessThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordLessThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordLessThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordLessThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void FUnordLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordLessThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordLessThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordLessThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordLessThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanOp definitions
//===----------------------------------------------------------------------===//

FUnordLessThanOpOperandAdaptor::FUnordLessThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordLessThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordLessThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordLessThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordLessThanOp::getOperationName() {
  return "spv.FUnordLessThan";
}

Operation::operand_range FUnordLessThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordLessThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordLessThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordLessThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordLessThanOp::result() {
  return *getODSResults(0).begin();
}

void FUnordLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordLessThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordLessThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordLessThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordLessThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FUnordNotEqualOp definitions
//===----------------------------------------------------------------------===//

FUnordNotEqualOpOperandAdaptor::FUnordNotEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FUnordNotEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  FUnordNotEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordNotEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef FUnordNotEqualOp::getOperationName() {
  return "spv.FUnordNotEqual";
}

Operation::operand_range FUnordNotEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  FUnordNotEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  FUnordNotEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range FUnordNotEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  FUnordNotEqualOp::result() {
  return *getODSResults(0).begin();
}

void FUnordNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void FUnordNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void FUnordNotEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult FUnordNotEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void FUnordNotEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult FUnordNotEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::FunctionCallOp definitions
//===----------------------------------------------------------------------===//

FunctionCallOpOperandAdaptor::FunctionCallOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> FunctionCallOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> FunctionCallOpOperandAdaptor::arguments() {
  return getODSOperands(0);
}

StringRef FunctionCallOp::getOperationName() {
  return "spv.FunctionCall";
}

Operation::operand_range FunctionCallOp::getODSOperands(unsigned index) {
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

Operation::operand_range FunctionCallOp::arguments() {
  return getODSOperands(0);
}

Operation::result_range FunctionCallOp::getODSResults(unsigned index) {
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

Operation::result_range FunctionCallOp::result() {
  return getODSResults(0);
}

FlatSymbolRefAttr FunctionCallOp::calleeAttr() {
  return this->getAttr("callee").cast<FlatSymbolRefAttr>();
}

StringRef FunctionCallOp::callee() {
  auto attr = calleeAttr();
  return attr.getValue();
}

void FunctionCallOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> result, FlatSymbolRefAttr callee, ValueRange arguments) {
  tblgen_state.addOperands(arguments);
  tblgen_state.addAttribute("callee", callee);
  tblgen_state.addTypes(result);
}

void FunctionCallOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> result, StringRef callee, ValueRange arguments) {
  tblgen_state.addOperands(arguments);
  tblgen_state.addAttribute("callee", (*tblgen_builder).getSymbolRefAttr(callee));
  tblgen_state.addTypes(result);
}

void FunctionCallOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes(resultTypes);
}

ParseResult FunctionCallOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseFunctionCallOp(parser, result);
}

void FunctionCallOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult FunctionCallOp::verify() {
  auto tblgen_callee = this->getAttr("callee");
  if (!tblgen_callee) return emitOpError("requires attribute 'callee'");
  {
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
  }
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::GLSLCeilOp definitions
//===----------------------------------------------------------------------===//

GLSLCeilOpOperandAdaptor::GLSLCeilOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLCeilOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLCeilOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLCeilOp::getOperationName() {
  return "spv.GLSL.Ceil";
}

Operation::operand_range GLSLCeilOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLCeilOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLCeilOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLCeilOp::result() {
  return *getODSResults(0).begin();
}

void GLSLCeilOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLCeilOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLCeilOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLCeilOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLCeilOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLCeilOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLCosOp definitions
//===----------------------------------------------------------------------===//

GLSLCosOpOperandAdaptor::GLSLCosOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLCosOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLCosOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLCosOp::getOperationName() {
  return "spv.GLSL.Cos";
}

Operation::operand_range GLSLCosOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLCosOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLCosOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLCosOp::result() {
  return *getODSResults(0).begin();
}

void GLSLCosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLCosOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLCosOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLCosOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLCosOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLCosOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLExpOp definitions
//===----------------------------------------------------------------------===//

GLSLExpOpOperandAdaptor::GLSLExpOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLExpOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLExpOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLExpOp::getOperationName() {
  return "spv.GLSL.Exp";
}

Operation::operand_range GLSLExpOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLExpOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLExpOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLExpOp::result() {
  return *getODSResults(0).begin();
}

void GLSLExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLExpOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLExpOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLExpOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLExpOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLExpOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLFAbsOp definitions
//===----------------------------------------------------------------------===//

GLSLFAbsOpOperandAdaptor::GLSLFAbsOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLFAbsOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLFAbsOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLFAbsOp::getOperationName() {
  return "spv.GLSL.FAbs";
}

Operation::operand_range GLSLFAbsOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLFAbsOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLFAbsOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLFAbsOp::result() {
  return *getODSResults(0).begin();
}

void GLSLFAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLFAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLFAbsOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLFAbsOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLFAbsOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLFAbsOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLFMaxOp definitions
//===----------------------------------------------------------------------===//

GLSLFMaxOpOperandAdaptor::GLSLFMaxOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLFMaxOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLFMaxOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLFMaxOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef GLSLFMaxOp::getOperationName() {
  return "spv.GLSL.FMax";
}

Operation::operand_range GLSLFMaxOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLFMaxOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLFMaxOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range GLSLFMaxOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLFMaxOp::result() {
  return *getODSResults(0).begin();
}

void GLSLFMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(result);
}

void GLSLFMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void GLSLFMaxOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLFMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void GLSLFMaxOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult GLSLFMaxOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLFMinOp definitions
//===----------------------------------------------------------------------===//

GLSLFMinOpOperandAdaptor::GLSLFMinOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLFMinOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLFMinOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLFMinOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef GLSLFMinOp::getOperationName() {
  return "spv.GLSL.FMin";
}

Operation::operand_range GLSLFMinOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLFMinOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLFMinOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range GLSLFMinOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLFMinOp::result() {
  return *getODSResults(0).begin();
}

void GLSLFMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(result);
}

void GLSLFMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void GLSLFMinOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLFMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void GLSLFMinOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult GLSLFMinOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLFSignOp definitions
//===----------------------------------------------------------------------===//

GLSLFSignOpOperandAdaptor::GLSLFSignOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLFSignOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLFSignOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLFSignOp::getOperationName() {
  return "spv.GLSL.FSign";
}

Operation::operand_range GLSLFSignOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLFSignOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLFSignOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLFSignOp::result() {
  return *getODSResults(0).begin();
}

void GLSLFSignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLFSignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLFSignOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLFSignOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLFSignOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLFSignOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLFloorOp definitions
//===----------------------------------------------------------------------===//

GLSLFloorOpOperandAdaptor::GLSLFloorOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLFloorOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLFloorOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLFloorOp::getOperationName() {
  return "spv.GLSL.Floor";
}

Operation::operand_range GLSLFloorOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLFloorOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLFloorOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLFloorOp::result() {
  return *getODSResults(0).begin();
}

void GLSLFloorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLFloorOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLFloorOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLFloorOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLFloorOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLFloorOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLInverseSqrtOp definitions
//===----------------------------------------------------------------------===//

GLSLInverseSqrtOpOperandAdaptor::GLSLInverseSqrtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLInverseSqrtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLInverseSqrtOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLInverseSqrtOp::getOperationName() {
  return "spv.GLSL.InverseSqrt";
}

Operation::operand_range GLSLInverseSqrtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLInverseSqrtOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLInverseSqrtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLInverseSqrtOp::result() {
  return *getODSResults(0).begin();
}

void GLSLInverseSqrtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLInverseSqrtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLInverseSqrtOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLInverseSqrtOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLInverseSqrtOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLInverseSqrtOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLLogOp definitions
//===----------------------------------------------------------------------===//

GLSLLogOpOperandAdaptor::GLSLLogOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLLogOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLLogOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLLogOp::getOperationName() {
  return "spv.GLSL.Log";
}

Operation::operand_range GLSLLogOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLLogOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLLogOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLLogOp::result() {
  return *getODSResults(0).begin();
}

void GLSLLogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLLogOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLLogOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLLogOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLLogOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLLogOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLSAbsOp definitions
//===----------------------------------------------------------------------===//

GLSLSAbsOpOperandAdaptor::GLSLSAbsOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLSAbsOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLSAbsOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLSAbsOp::getOperationName() {
  return "spv.GLSL.SAbs";
}

Operation::operand_range GLSLSAbsOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLSAbsOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLSAbsOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLSAbsOp::result() {
  return *getODSResults(0).begin();
}

void GLSLSAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLSAbsOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLSAbsOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLSAbsOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLSAbsOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLSAbsOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLSMaxOp definitions
//===----------------------------------------------------------------------===//

GLSLSMaxOpOperandAdaptor::GLSLSMaxOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLSMaxOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLSMaxOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLSMaxOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef GLSLSMaxOp::getOperationName() {
  return "spv.GLSL.SMax";
}

Operation::operand_range GLSLSMaxOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLSMaxOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLSMaxOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range GLSLSMaxOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLSMaxOp::result() {
  return *getODSResults(0).begin();
}

void GLSLSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(result);
}

void GLSLSMaxOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void GLSLSMaxOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLSMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void GLSLSMaxOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult GLSLSMaxOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLSMinOp definitions
//===----------------------------------------------------------------------===//

GLSLSMinOpOperandAdaptor::GLSLSMinOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLSMinOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLSMinOpOperandAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLSMinOpOperandAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringRef GLSLSMinOp::getOperationName() {
  return "spv.GLSL.SMin";
}

Operation::operand_range GLSLSMinOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLSMinOp::lhs() {
  return *getODSOperands(0).begin();
}

Value  GLSLSMinOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::result_range GLSLSMinOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLSMinOp::result() {
  return *getODSResults(0).begin();
}

void GLSLSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(result);
}

void GLSLSMinOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  tblgen_state.addOperands(lhs);
  tblgen_state.addOperands(rhs);
  tblgen_state.addTypes(resultTypes);
}

void GLSLSMinOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLSMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void GLSLSMinOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult GLSLSMinOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLSSignOp definitions
//===----------------------------------------------------------------------===//

GLSLSSignOpOperandAdaptor::GLSLSSignOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLSSignOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLSSignOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLSSignOp::getOperationName() {
  return "spv.GLSL.SSign";
}

Operation::operand_range GLSLSSignOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLSSignOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLSSignOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLSSignOp::result() {
  return *getODSResults(0).begin();
}

void GLSLSSignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLSSignOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLSSignOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLSSignOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLSSignOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLSSignOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLSqrtOp definitions
//===----------------------------------------------------------------------===//

GLSLSqrtOpOperandAdaptor::GLSLSqrtOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLSqrtOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLSqrtOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLSqrtOp::getOperationName() {
  return "spv.GLSL.Sqrt";
}

Operation::operand_range GLSLSqrtOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLSqrtOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLSqrtOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLSqrtOp::result() {
  return *getODSResults(0).begin();
}

void GLSLSqrtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLSqrtOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLSqrtOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLSqrtOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLSqrtOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLSqrtOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32/64-bit float or vector of 16/32/64-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GLSLTanhOp definitions
//===----------------------------------------------------------------------===//

GLSLTanhOpOperandAdaptor::GLSLTanhOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GLSLTanhOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GLSLTanhOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef GLSLTanhOp::getOperationName() {
  return "spv.GLSL.Tanh";
}

Operation::operand_range GLSLTanhOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GLSLTanhOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range GLSLTanhOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GLSLTanhOp::result() {
  return *getODSResults(0).begin();
}

void GLSLTanhOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void GLSLTanhOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void GLSLTanhOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GLSLTanhOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseUnaryOp(parser, result);
}

void GLSLTanhOp::print(OpAsmPrinter &p) {
  return printUnaryOp(getOperation(), p);
}

LogicalResult GLSLTanhOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isF16())) || ((v.getType().isF32()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 16/32-bit float or vector of 16/32-bit float values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::GlobalVariableOp definitions
//===----------------------------------------------------------------------===//

GlobalVariableOpOperandAdaptor::GlobalVariableOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GlobalVariableOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef GlobalVariableOp::getOperationName() {
  return "spv.globalVariable";
}

Operation::operand_range GlobalVariableOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range GlobalVariableOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

TypeAttr GlobalVariableOp::typeAttr() {
  return this->getAttr("type").cast<TypeAttr>();
}

Type GlobalVariableOp::type() {
  auto attr = typeAttr();
  return attr.getValue().cast<Type>();
}

StringAttr GlobalVariableOp::sym_nameAttr() {
  return this->getAttr("sym_name").cast<StringAttr>();
}

StringRef GlobalVariableOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

FlatSymbolRefAttr GlobalVariableOp::initializerAttr() {
  return this->getAttr("initializer").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > GlobalVariableOp::initializer() {
  auto attr = initializerAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void GlobalVariableOp::build(Builder *builder, OperationState &state, TypeAttr type, ArrayRef<NamedAttribute> namedAttrs) {
      state.addAttribute("type", type);
      state.addAttributes(namedAttrs);
    
}





void GlobalVariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer) {
  tblgen_state.addAttribute("type", type);
  tblgen_state.addAttribute("sym_name", sym_name);
  if (initializer) {
  tblgen_state.addAttribute("initializer", initializer);
  }
}

void GlobalVariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer) {
  tblgen_state.addAttribute("type", type);
  tblgen_state.addAttribute("sym_name", sym_name);
  if (initializer) {
  tblgen_state.addAttribute("initializer", initializer);
  }
  tblgen_state.addTypes(resultTypes);
}

void GlobalVariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer) {
  tblgen_state.addAttribute("type", type);
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  if (initializer) {
  tblgen_state.addAttribute("initializer", initializer);
  }
}

void GlobalVariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer) {
  tblgen_state.addAttribute("type", type);
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  if (initializer) {
  tblgen_state.addAttribute("initializer", initializer);
  }
  tblgen_state.addTypes(resultTypes);
}

void GlobalVariableOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GlobalVariableOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGlobalVariableOp(parser, result);
}

void GlobalVariableOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult GlobalVariableOp::verify() {
  auto tblgen_type = this->getAttr("type");
  if (!tblgen_type) return emitOpError("requires attribute 'type'");
  {
    if (!(((tblgen_type.isa<TypeAttr>())) && ((tblgen_type.cast<TypeAttr>().getValue().isa<Type>())))) return emitOpError("attribute 'type' failed to satisfy constraint: any type attribute");
  }
  auto tblgen_sym_name = this->getAttr("sym_name");
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  {
    if (!((tblgen_sym_name.isa<StringAttr>()))) return emitOpError("attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  auto tblgen_initializer = this->getAttr("initializer");
  if (tblgen_initializer) {
    if (!((tblgen_initializer.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'initializer' failed to satisfy constraint: flat symbol reference attribute");
  }
  if (!((llvm::isa_and_nonnull<spirv::ModuleOp>((*this->getOperation()).getParentOp())))) {
    return emitOpError("failed to verify that op must appear in a 'spv.module' block");
  }
  {
    unsigned index = 0; (void)index;
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
// spirv::GroupNonUniformBallotOp definitions
//===----------------------------------------------------------------------===//

GroupNonUniformBallotOpOperandAdaptor::GroupNonUniformBallotOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> GroupNonUniformBallotOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  GroupNonUniformBallotOpOperandAdaptor::predicate() {
  return *getODSOperands(0).begin();
}

StringRef GroupNonUniformBallotOp::getOperationName() {
  return "spv.GroupNonUniformBallot";
}

Operation::operand_range GroupNonUniformBallotOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  GroupNonUniformBallotOp::predicate() {
  return *getODSOperands(0).begin();
}

Operation::result_range GroupNonUniformBallotOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  GroupNonUniformBallotOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr GroupNonUniformBallotOp::execution_scopeAttr() {
  return this->getAttr("execution_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope GroupNonUniformBallotOp::execution_scope() {
  auto attr = execution_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

void GroupNonUniformBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, IntegerAttr execution_scope, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addAttribute("execution_scope", execution_scope);
  tblgen_state.addTypes(result);
}

void GroupNonUniformBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addAttribute("execution_scope", execution_scope);
  tblgen_state.addTypes(resultTypes);
}

void GroupNonUniformBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, ::mlir::spirv::Scope execution_scope, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addAttribute("execution_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_scope)));
  tblgen_state.addTypes(result);
}

void GroupNonUniformBallotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addAttribute("execution_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(execution_scope)));
  tblgen_state.addTypes(resultTypes);
}

void GroupNonUniformBallotOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult GroupNonUniformBallotOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGroupNonUniformBallotOp(parser, result);
}

void GroupNonUniformBallotOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult GroupNonUniformBallotOp::verify() {
  auto tblgen_execution_scope = this->getAttr("execution_scope");
  if (!tblgen_execution_scope) return emitOpError("requires attribute 'execution_scope'");
  {
    if (!((((tblgen_execution_scope.isa<IntegerAttr>())) && ((tblgen_execution_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_execution_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'execution_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) {
        return emitOpError("result #") << index << " must be vector of 8/16/32/64-bit integer values of length 4, but got " << v.getType();
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
// spirv::IAddOp definitions
//===----------------------------------------------------------------------===//

IAddOpOperandAdaptor::IAddOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IAddOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IAddOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  IAddOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef IAddOp::getOperationName() {
  return "spv.IAdd";
}

Operation::operand_range IAddOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IAddOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  IAddOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range IAddOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  IAddOp::result() {
  return *getODSResults(0).begin();
}

void IAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void IAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void IAddOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void IAddOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void IAddOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult IAddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void IAddOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult IAddOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}












//===----------------------------------------------------------------------===//
// spirv::IEqualOp definitions
//===----------------------------------------------------------------------===//

IEqualOpOperandAdaptor::IEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  IEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef IEqualOp::getOperationName() {
  return "spv.IEqual";
}

Operation::operand_range IEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  IEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range IEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  IEqualOp::result() {
  return *getODSResults(0).begin();
}

void IEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void IEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void IEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult IEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void IEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult IEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::IMulOp definitions
//===----------------------------------------------------------------------===//

IMulOpOperandAdaptor::IMulOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> IMulOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  IMulOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  IMulOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef IMulOp::getOperationName() {
  return "spv.IMul";
}

Operation::operand_range IMulOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  IMulOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  IMulOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range IMulOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  IMulOp::result() {
  return *getODSResults(0).begin();
}

void IMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void IMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void IMulOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void IMulOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void IMulOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult IMulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void IMulOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult IMulOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}












//===----------------------------------------------------------------------===//
// spirv::INotEqualOp definitions
//===----------------------------------------------------------------------===//

INotEqualOpOperandAdaptor::INotEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> INotEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  INotEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  INotEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef INotEqualOp::getOperationName() {
  return "spv.INotEqual";
}

Operation::operand_range INotEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  INotEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  INotEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range INotEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  INotEqualOp::result() {
  return *getODSResults(0).begin();
}

void INotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void INotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void INotEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult INotEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void INotEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult INotEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::ISubOp definitions
//===----------------------------------------------------------------------===//

ISubOpOperandAdaptor::ISubOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ISubOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ISubOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ISubOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ISubOp::getOperationName() {
  return "spv.ISub";
}

Operation::operand_range ISubOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ISubOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ISubOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ISubOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ISubOp::result() {
  return *getODSResults(0).begin();
}

void ISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ISubOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void ISubOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void ISubOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult ISubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ISubOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult ISubOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}












//===----------------------------------------------------------------------===//
// spirv::LoadOp definitions
//===----------------------------------------------------------------------===//

LoadOpOperandAdaptor::LoadOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LoadOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LoadOpOperandAdaptor::ptr() {
  return *getODSOperands(0).begin();
}

StringRef LoadOp::getOperationName() {
  return "spv.Load";
}

Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LoadOp::ptr() {
  return *getODSOperands(0).begin();
}

Operation::result_range LoadOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LoadOp::value() {
  return *getODSResults(0).begin();
}

IntegerAttr LoadOp::memory_accessAttr() {
  return this->getAttr("memory_access").dyn_cast_or_null<IntegerAttr>();
}

Optional<::mlir::spirv::MemoryAccess> LoadOp::memory_access() {
  auto attr = memory_accessAttr();
  return attr ? Optional<::mlir::spirv::MemoryAccess>(static_cast<::mlir::spirv::MemoryAccess>(attr.getInt())) : (llvm::None);
}

IntegerAttr LoadOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > LoadOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}



void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type value, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(ptr);
  if (memory_access) {
  tblgen_state.addAttribute("memory_access", memory_access);
  }
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(value);
}

void LoadOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(ptr);
  if (memory_access) {
  tblgen_state.addAttribute("memory_access", memory_access);
  }
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(resultTypes);
}

void LoadOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLoadOp(parser, result);
}

void LoadOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult LoadOp::verify() {
  auto tblgen_memory_access = this->getAttr("memory_access");
  if (tblgen_memory_access) {
    if (!((((tblgen_memory_access.isa<IntegerAttr>())) && ((tblgen_memory_access.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_memory_access.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|1u|2u|4u|8u|16u|32u))))))) return emitOpError("attribute 'memory_access' failed to satisfy constraint: valid SPIR-V MemoryAccess");
  }
  auto tblgen_alignment = this->getAttr("alignment");
  if (tblgen_alignment) {
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isInteger(32))))) return emitOpError("attribute 'alignment' failed to satisfy constraint: 32-bit integer attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::LogicalAndOp definitions
//===----------------------------------------------------------------------===//

LogicalAndOpOperandAdaptor::LogicalAndOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogicalAndOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogicalAndOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalAndOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef LogicalAndOp::getOperationName() {
  return "spv.LogicalAnd";
}

Operation::operand_range LogicalAndOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogicalAndOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalAndOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range LogicalAndOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogicalAndOp::result() {
  return *getODSResults(0).begin();
}

void LogicalAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void LogicalAndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void LogicalAndOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LogicalAndOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void LogicalAndOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult LogicalAndOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::LogicalEqualOp definitions
//===----------------------------------------------------------------------===//

LogicalEqualOpOperandAdaptor::LogicalEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogicalEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogicalEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef LogicalEqualOp::getOperationName() {
  return "spv.LogicalEqual";
}

Operation::operand_range LogicalEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogicalEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range LogicalEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogicalEqualOp::result() {
  return *getODSResults(0).begin();
}

void LogicalEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void LogicalEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void LogicalEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LogicalEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void LogicalEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult LogicalEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::LogicalNotEqualOp definitions
//===----------------------------------------------------------------------===//

LogicalNotEqualOpOperandAdaptor::LogicalNotEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogicalNotEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogicalNotEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalNotEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef LogicalNotEqualOp::getOperationName() {
  return "spv.LogicalNotEqual";
}

Operation::operand_range LogicalNotEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogicalNotEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalNotEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range LogicalNotEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogicalNotEqualOp::result() {
  return *getODSResults(0).begin();
}

void LogicalNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void LogicalNotEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void LogicalNotEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LogicalNotEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void LogicalNotEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult LogicalNotEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::LogicalNotOp definitions
//===----------------------------------------------------------------------===//

LogicalNotOpOperandAdaptor::LogicalNotOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogicalNotOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogicalNotOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef LogicalNotOp::getOperationName() {
  return "spv.LogicalNot";
}

Operation::operand_range LogicalNotOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogicalNotOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range LogicalNotOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogicalNotOp::result() {
  return *getODSResults(0).begin();
}

void LogicalNotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void LogicalNotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void LogicalNotOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LogicalNotOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalUnaryOp(parser, result);
}

void LogicalNotOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult LogicalNotOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}












//===----------------------------------------------------------------------===//
// spirv::LogicalOrOp definitions
//===----------------------------------------------------------------------===//

LogicalOrOpOperandAdaptor::LogicalOrOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LogicalOrOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  LogicalOrOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalOrOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef LogicalOrOp::getOperationName() {
  return "spv.LogicalOr";
}

Operation::operand_range LogicalOrOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  LogicalOrOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  LogicalOrOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range LogicalOrOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  LogicalOrOp::result() {
  return *getODSResults(0).begin();
}

void LogicalOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void LogicalOrOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void LogicalOrOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LogicalOrOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void LogicalOrOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult LogicalOrOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::LoopOp definitions
//===----------------------------------------------------------------------===//

LoopOpOperandAdaptor::LoopOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> LoopOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef LoopOp::getOperationName() {
  return "spv.loop";
}

Operation::operand_range LoopOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range LoopOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &LoopOp::body() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr LoopOp::loop_controlAttr() {
  return this->getAttr("loop_control").cast<IntegerAttr>();
}

::mlir::spirv::LoopControl LoopOp::loop_control() {
  auto attr = loop_controlAttr();
  return static_cast<::mlir::spirv::LoopControl>(attr.getInt());
}



void LoopOp::build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr loop_control) {
  tblgen_state.addAttribute("loop_control", loop_control);
  (void)tblgen_state.addRegion();
}

void LoopOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr loop_control) {
  tblgen_state.addAttribute("loop_control", loop_control);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void LoopOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::LoopControl loop_control) {
  tblgen_state.addAttribute("loop_control", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(loop_control)));
  (void)tblgen_state.addRegion();
}

void LoopOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::LoopControl loop_control) {
  tblgen_state.addAttribute("loop_control", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(loop_control)));
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void LoopOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult LoopOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLoopOp(parser, result);
}

void LoopOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult LoopOp::verify() {
  auto tblgen_loop_control = this->getAttr("loop_control");
  if (!tblgen_loop_control) return emitOpError("requires attribute 'loop_control'");
  {
    if (!((((tblgen_loop_control.isa<IntegerAttr>())) && ((tblgen_loop_control.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_loop_control.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|1u|2u|4u|8u|16u|32u|64u|128u|256u))))))) return emitOpError("attribute 'loop_control' failed to satisfy constraint: valid SPIR-V LoopControl");
  }
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((true))) {
    return emitOpError("region #0 ('body') failed to verify constraint: any region");
  }
  return ::verify(*this);
}










//===----------------------------------------------------------------------===//
// spirv::MemoryBarrierOp definitions
//===----------------------------------------------------------------------===//

MemoryBarrierOpOperandAdaptor::MemoryBarrierOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MemoryBarrierOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef MemoryBarrierOp::getOperationName() {
  return "spv.MemoryBarrier";
}

Operation::operand_range MemoryBarrierOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range MemoryBarrierOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr MemoryBarrierOp::memory_scopeAttr() {
  return this->getAttr("memory_scope").cast<IntegerAttr>();
}

::mlir::spirv::Scope MemoryBarrierOp::memory_scope() {
  auto attr = memory_scopeAttr();
  return static_cast<::mlir::spirv::Scope>(attr.getInt());
}

IntegerAttr MemoryBarrierOp::memory_semanticsAttr() {
  return this->getAttr("memory_semantics").cast<IntegerAttr>();
}

::mlir::spirv::MemorySemantics MemoryBarrierOp::memory_semantics() {
  auto attr = memory_semanticsAttr();
  return static_cast<::mlir::spirv::MemorySemantics>(attr.getInt());
}

void MemoryBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr memory_scope, IntegerAttr memory_semantics) {
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("memory_semantics", memory_semantics);
}

void MemoryBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr memory_scope, IntegerAttr memory_semantics) {
  tblgen_state.addAttribute("memory_scope", memory_scope);
  tblgen_state.addAttribute("memory_semantics", memory_semantics);
  tblgen_state.addTypes(resultTypes);
}

void MemoryBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics) {
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("memory_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_semantics)));
}

void MemoryBarrierOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics) {
  tblgen_state.addAttribute("memory_scope", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_scope)));
  tblgen_state.addAttribute("memory_semantics", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(memory_semantics)));
  tblgen_state.addTypes(resultTypes);
}

void MemoryBarrierOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MemoryBarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseMemoryBarrierOp(parser, result);
}

void MemoryBarrierOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult MemoryBarrierOp::verify() {
  auto tblgen_memory_scope = this->getAttr("memory_scope");
  if (!tblgen_memory_scope) return emitOpError("requires attribute 'memory_scope'");
  {
    if (!((((tblgen_memory_scope.isa<IntegerAttr>())) && ((tblgen_memory_scope.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_memory_scope.cast<IntegerAttr>().getInt() == 5))))) return emitOpError("attribute 'memory_scope' failed to satisfy constraint: valid SPIR-V Scope");
  }
  auto tblgen_memory_semantics = this->getAttr("memory_semantics");
  if (!tblgen_memory_semantics) return emitOpError("requires attribute 'memory_semantics'");
  {
    if (!((((tblgen_memory_semantics.isa<IntegerAttr>())) && ((tblgen_memory_semantics.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_memory_semantics.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|2u|4u|8u|16u|64u|128u|256u|512u|1024u|2048u|4096u|8192u|16384u|32768u))))))) return emitOpError("attribute 'memory_semantics' failed to satisfy constraint: valid SPIR-V MemorySemantics");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyMemorySemantics(*this);
}










//===----------------------------------------------------------------------===//
// spirv::MergeOp definitions
//===----------------------------------------------------------------------===//

MergeOpOperandAdaptor::MergeOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> MergeOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef MergeOp::getOperationName() {
  return "spv._merge";
}

Operation::operand_range MergeOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range MergeOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void MergeOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void MergeOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void MergeOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult MergeOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNoIOOp(parser, result);
}

void MergeOp::print(OpAsmPrinter &p) {
  printNoIOOp(getOperation(), p);
}

LogicalResult MergeOp::verify() {
  {
    unsigned index = 0; (void)index;
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
// spirv::ModuleEndOp definitions
//===----------------------------------------------------------------------===//

ModuleEndOpOperandAdaptor::ModuleEndOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ModuleEndOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ModuleEndOp::getOperationName() {
  return "spv._module_end";
}

Operation::operand_range ModuleEndOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ModuleEndOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ModuleEndOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void ModuleEndOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ModuleEndOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ModuleEndOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNoIOOp(parser, result);
}

void ModuleEndOp::print(OpAsmPrinter &p) {
  printNoIOOp(getOperation(), p);
}

LogicalResult ModuleEndOp::verify() {
  if (!((llvm::isa_and_nonnull<spirv::ModuleOp>((*this->getOperation()).getParentOp())))) {
    return emitOpError("failed to verify that op must appear in a 'spv.module' block");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::ModuleOp definitions
//===----------------------------------------------------------------------===//

ModuleOpOperandAdaptor::ModuleOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ModuleOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ModuleOp::getOperationName() {
  return "spv.module";
}

Operation::operand_range ModuleOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ModuleOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &ModuleOp::body() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr ModuleOp::addressing_modelAttr() {
  return this->getAttr("addressing_model").cast<IntegerAttr>();
}

::mlir::spirv::AddressingModel ModuleOp::addressing_model() {
  auto attr = addressing_modelAttr();
  return static_cast<::mlir::spirv::AddressingModel>(attr.getInt());
}

IntegerAttr ModuleOp::memory_modelAttr() {
  return this->getAttr("memory_model").cast<IntegerAttr>();
}

::mlir::spirv::MemoryModel ModuleOp::memory_model() {
  auto attr = memory_modelAttr();
  return static_cast<::mlir::spirv::MemoryModel>(attr.getInt());
}

ArrayAttr ModuleOp::capabilitiesAttr() {
  return this->getAttr("capabilities").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ModuleOp::capabilities() {
  auto attr = capabilitiesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr ModuleOp::extensionsAttr() {
  return this->getAttr("extensions").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ModuleOp::extensions() {
  auto attr = extensionsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr ModuleOp::extended_instruction_setsAttr() {
  return this->getAttr("extended_instruction_sets").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ModuleOp::extended_instruction_sets() {
  auto attr = extended_instruction_setsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}







ParseResult ModuleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseModuleOp(parser, result);
}

void ModuleOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ModuleOp::verify() {
  auto tblgen_addressing_model = this->getAttr("addressing_model");
  if (!tblgen_addressing_model) return emitOpError("requires attribute 'addressing_model'");
  {
    if (!((((tblgen_addressing_model.isa<IntegerAttr>())) && ((tblgen_addressing_model.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_addressing_model.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_addressing_model.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_addressing_model.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_addressing_model.cast<IntegerAttr>().getInt() == 5348))))) return emitOpError("attribute 'addressing_model' failed to satisfy constraint: valid SPIR-V AddressingModel");
  }
  auto tblgen_memory_model = this->getAttr("memory_model");
  if (!tblgen_memory_model) return emitOpError("requires attribute 'memory_model'");
  {
    if (!((((tblgen_memory_model.isa<IntegerAttr>())) && ((tblgen_memory_model.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_memory_model.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_memory_model.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_memory_model.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_memory_model.cast<IntegerAttr>().getInt() == 3))))) return emitOpError("attribute 'memory_model' failed to satisfy constraint: valid SPIR-V MemoryModel");
  }
  auto tblgen_capabilities = this->getAttr("capabilities");
  if (tblgen_capabilities) {
    if (!(((tblgen_capabilities.isa<ArrayAttr>())) && (llvm::all_of(tblgen_capabilities.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<StringAttr>()); })))) return emitOpError("attribute 'capabilities' failed to satisfy constraint: string array attribute");
  }
  auto tblgen_extensions = this->getAttr("extensions");
  if (tblgen_extensions) {
    if (!(((tblgen_extensions.isa<ArrayAttr>())) && (llvm::all_of(tblgen_extensions.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<StringAttr>()); })))) return emitOpError("attribute 'extensions' failed to satisfy constraint: string array attribute");
  }
  auto tblgen_extended_instruction_sets = this->getAttr("extended_instruction_sets");
  if (tblgen_extended_instruction_sets) {
    if (!(((tblgen_extended_instruction_sets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_extended_instruction_sets.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<StringAttr>()); })))) return emitOpError("attribute 'extended_instruction_sets' failed to satisfy constraint: string array attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((this->getOperation()->getRegion(0).getBlocks().size() == 1))) {
    return emitOpError("region #0 ('body') failed to verify constraint: region with 1 blocks");
  }
  return ::verify(*this);
}










//===----------------------------------------------------------------------===//
// spirv::NotOp definitions
//===----------------------------------------------------------------------===//

NotOpOperandAdaptor::NotOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> NotOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  NotOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef NotOp::getOperationName() {
  return "spv.Not";
}

Operation::operand_range NotOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  NotOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range NotOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  NotOp::result() {
  return *getODSResults(0).begin();
}

void NotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void NotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void NotOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void NotOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes({operand.getType()});

}

void NotOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult NotOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseUnaryOp(parser, result);
}

void NotOp::print(OpAsmPrinter &p) {
  return ::printUnaryOp(getOperation(), p);
}

LogicalResult NotOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::ReferenceOfOp definitions
//===----------------------------------------------------------------------===//

ReferenceOfOpOperandAdaptor::ReferenceOfOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReferenceOfOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ReferenceOfOp::getOperationName() {
  return "spv._reference_of";
}

Operation::operand_range ReferenceOfOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ReferenceOfOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ReferenceOfOp::reference() {
  return *getODSResults(0).begin();
}

FlatSymbolRefAttr ReferenceOfOp::spec_constAttr() {
  return this->getAttr("spec_const").cast<FlatSymbolRefAttr>();
}

StringRef ReferenceOfOp::spec_const() {
  auto attr = spec_constAttr();
  return attr.getValue();
}

void ReferenceOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type reference, FlatSymbolRefAttr spec_const) {
  tblgen_state.addAttribute("spec_const", spec_const);
  tblgen_state.addTypes(reference);
}

void ReferenceOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, FlatSymbolRefAttr spec_const) {
  tblgen_state.addAttribute("spec_const", spec_const);
  tblgen_state.addTypes(resultTypes);
}

void ReferenceOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type reference, StringRef spec_const) {
  tblgen_state.addAttribute("spec_const", (*tblgen_builder).getSymbolRefAttr(spec_const));
  tblgen_state.addTypes(reference);
}

void ReferenceOfOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef spec_const) {
  tblgen_state.addAttribute("spec_const", (*tblgen_builder).getSymbolRefAttr(spec_const));
  tblgen_state.addTypes(resultTypes);
}

void ReferenceOfOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReferenceOfOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReferenceOfOp(parser, result);
}

void ReferenceOfOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ReferenceOfOp::verify() {
  auto tblgen_spec_const = this->getAttr("spec_const");
  if (!tblgen_spec_const) return emitOpError("requires attribute 'spec_const'");
  {
    if (!((tblgen_spec_const.isa<FlatSymbolRefAttr>()))) return emitOpError("attribute 'spec_const' failed to satisfy constraint: flat symbol reference attribute");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::ReturnOp definitions
//===----------------------------------------------------------------------===//

ReturnOpOperandAdaptor::ReturnOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReturnOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef ReturnOp::getOperationName() {
  return "spv.Return";
}

Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range ReturnOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void ReturnOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void ReturnOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNoIOOp(parser, result);
}

void ReturnOp::print(OpAsmPrinter &p) {
  printNoIOOp(getOperation(), p);
}

LogicalResult ReturnOp::verify() {
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
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
// spirv::ReturnValueOp definitions
//===----------------------------------------------------------------------===//

ReturnValueOpOperandAdaptor::ReturnValueOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ReturnValueOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ReturnValueOpOperandAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringRef ReturnValueOp::getOperationName() {
  return "spv.ReturnValue";
}

Operation::operand_range ReturnValueOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ReturnValueOp::value() {
  return *getODSOperands(0).begin();
}

Operation::result_range ReturnValueOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void ReturnValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value value) {
  tblgen_state.addOperands(value);
}

void ReturnValueOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value value) {
  tblgen_state.addOperands(value);
  tblgen_state.addTypes(resultTypes);
}

void ReturnValueOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ReturnValueOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReturnValueOp(parser, result);
}

void ReturnValueOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult ReturnValueOp::verify() {
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::SConvertOp definitions
//===----------------------------------------------------------------------===//

SConvertOpOperandAdaptor::SConvertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SConvertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SConvertOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef SConvertOp::getOperationName() {
  return "spv.SConvert";
}

Operation::operand_range SConvertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SConvertOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range SConvertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SConvertOp::result() {
  return *getODSResults(0).begin();
}

void SConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void SConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void SConvertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SConvertOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void SConvertOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult SConvertOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation(), false);
}










//===----------------------------------------------------------------------===//
// spirv::SDivOp definitions
//===----------------------------------------------------------------------===//

SDivOpOperandAdaptor::SDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SDivOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SDivOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SDivOp::getOperationName() {
  return "spv.SDiv";
}

Operation::operand_range SDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SDivOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SDivOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SDivOp::result() {
  return *getODSResults(0).begin();
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void SDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SDivOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult SDivOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SGreaterThanEqualOp definitions
//===----------------------------------------------------------------------===//

SGreaterThanEqualOpOperandAdaptor::SGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SGreaterThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SGreaterThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SGreaterThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SGreaterThanEqualOp::getOperationName() {
  return "spv.SGreaterThanEqual";
}

Operation::operand_range SGreaterThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SGreaterThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SGreaterThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SGreaterThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SGreaterThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void SGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SGreaterThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SGreaterThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void SGreaterThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult SGreaterThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SGreaterThanOp definitions
//===----------------------------------------------------------------------===//

SGreaterThanOpOperandAdaptor::SGreaterThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SGreaterThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SGreaterThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SGreaterThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SGreaterThanOp::getOperationName() {
  return "spv.SGreaterThan";
}

Operation::operand_range SGreaterThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SGreaterThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SGreaterThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SGreaterThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SGreaterThanOp::result() {
  return *getODSResults(0).begin();
}

void SGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SGreaterThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SGreaterThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void SGreaterThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult SGreaterThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SLessThanEqualOp definitions
//===----------------------------------------------------------------------===//

SLessThanEqualOpOperandAdaptor::SLessThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SLessThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SLessThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SLessThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SLessThanEqualOp::getOperationName() {
  return "spv.SLessThanEqual";
}

Operation::operand_range SLessThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SLessThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SLessThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SLessThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SLessThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void SLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SLessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SLessThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SLessThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void SLessThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult SLessThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SLessThanOp definitions
//===----------------------------------------------------------------------===//

SLessThanOpOperandAdaptor::SLessThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SLessThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SLessThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SLessThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SLessThanOp::getOperationName() {
  return "spv.SLessThan";
}

Operation::operand_range SLessThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SLessThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SLessThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SLessThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SLessThanOp::result() {
  return *getODSResults(0).begin();
}

void SLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SLessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SLessThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SLessThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void SLessThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult SLessThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SModOp definitions
//===----------------------------------------------------------------------===//

SModOpOperandAdaptor::SModOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SModOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SModOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SModOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SModOp::getOperationName() {
  return "spv.SMod";
}

Operation::operand_range SModOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SModOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SModOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SModOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SModOp::result() {
  return *getODSResults(0).begin();
}

void SModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SModOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void SModOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SModOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SModOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult SModOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SRemOp definitions
//===----------------------------------------------------------------------===//

SRemOpOperandAdaptor::SRemOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SRemOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SRemOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  SRemOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef SRemOp::getOperationName() {
  return "spv.SRem";
}

Operation::operand_range SRemOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SRemOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  SRemOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range SRemOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SRemOp::result() {
  return *getODSResults(0).begin();
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void SRemOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void SRemOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void SRemOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult SRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SRemOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult SRemOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::SelectOp definitions
//===----------------------------------------------------------------------===//

SelectOpOperandAdaptor::SelectOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SelectOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SelectOpOperandAdaptor::condition() {
  return *getODSOperands(0).begin();
}

Value  SelectOpOperandAdaptor::true_value() {
  return *getODSOperands(1).begin();
}

Value  SelectOpOperandAdaptor::false_value() {
  return *getODSOperands(2).begin();
}

StringRef SelectOp::getOperationName() {
  return "spv.Select";
}

Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SelectOp::condition() {
  return *getODSOperands(0).begin();
}

Value  SelectOp::true_value() {
  return *getODSOperands(1).begin();
}

Value  SelectOp::false_value() {
  return *getODSOperands(2).begin();
}

Operation::result_range SelectOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SelectOp::result() {
  return *getODSResults(0).begin();
}



void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value condition, Value true_value, Value false_value) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(true_value);
  tblgen_state.addOperands(false_value);
  tblgen_state.addTypes(result);
}

void SelectOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value) {
  tblgen_state.addOperands(condition);
  tblgen_state.addOperands(true_value);
  tblgen_state.addOperands(false_value);
  tblgen_state.addTypes(resultTypes);
}

void SelectOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SelectOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSelectOp(parser, result);
}

void SelectOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult SelectOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64())))) || ((v.getType().isInteger(1)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or 16/32/64-bit float or 1-bit integer or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(2)) {
      (void)v;
      if (!((((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64())))) || ((v.getType().isInteger(1)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or 16/32/64-bit float or 1-bit integer or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64())))) || ((v.getType().isInteger(1)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or 16/32/64-bit float or 1-bit integer or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type, but got " << v.getType();
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
// spirv::SelectionOp definitions
//===----------------------------------------------------------------------===//

SelectionOpOperandAdaptor::SelectionOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SelectionOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef SelectionOp::getOperationName() {
  return "spv.selection";
}

Operation::operand_range SelectionOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range SelectionOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Region &SelectionOp::body() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr SelectionOp::selection_controlAttr() {
  return this->getAttr("selection_control").cast<IntegerAttr>();
}

::mlir::spirv::SelectionControl SelectionOp::selection_control() {
  auto attr = selection_controlAttr();
  return static_cast<::mlir::spirv::SelectionControl>(attr.getInt());
}

void SelectionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, IntegerAttr selection_control) {
  tblgen_state.addAttribute("selection_control", selection_control);
  (void)tblgen_state.addRegion();
}

void SelectionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr selection_control) {
  tblgen_state.addAttribute("selection_control", selection_control);
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void SelectionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ::mlir::spirv::SelectionControl selection_control) {
  tblgen_state.addAttribute("selection_control", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(selection_control)));
  (void)tblgen_state.addRegion();
}

void SelectionOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::SelectionControl selection_control) {
  tblgen_state.addAttribute("selection_control", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(selection_control)));
  (void)tblgen_state.addRegion();
  tblgen_state.addTypes(resultTypes);
}

void SelectionOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  (void)tblgen_state.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SelectionOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSelectionOp(parser, result);
}

void SelectionOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult SelectionOp::verify() {
  auto tblgen_selection_control = this->getAttr("selection_control");
  if (!tblgen_selection_control) return emitOpError("requires attribute 'selection_control'");
  {
    if (!((((tblgen_selection_control.isa<IntegerAttr>())) && ((tblgen_selection_control.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_selection_control.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|1u|2u))))))) return emitOpError("attribute 'selection_control' failed to satisfy constraint: valid SPIR-V SelectionControl");
  }
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  if (this->getOperation()->getNumRegions() != 1) {
    return emitOpError("has incorrect number of regions: expected 1 but found ") << this->getOperation()->getNumRegions();
  }
  if (!((true))) {
    return emitOpError("region #0 ('body') failed to verify constraint: any region");
  }
  return ::verify(*this);
}












//===----------------------------------------------------------------------===//
// spirv::ShiftLeftLogicalOp definitions
//===----------------------------------------------------------------------===//

ShiftLeftLogicalOpOperandAdaptor::ShiftLeftLogicalOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShiftLeftLogicalOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShiftLeftLogicalOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftLeftLogicalOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ShiftLeftLogicalOp::getOperationName() {
  return "spv.ShiftLeftLogical";
}

Operation::operand_range ShiftLeftLogicalOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShiftLeftLogicalOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftLeftLogicalOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShiftLeftLogicalOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShiftLeftLogicalOp::result() {
  return *getODSResults(0).begin();
}

void ShiftLeftLogicalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ShiftLeftLogicalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ShiftLeftLogicalOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShiftLeftLogicalOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseShiftOp(parser, result);
}

void ShiftLeftLogicalOp::print(OpAsmPrinter &p) {
  ::printShiftOp(this->getOperation(), p);
}

LogicalResult ShiftLeftLogicalOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyShiftOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::ShiftRightArithmeticOp definitions
//===----------------------------------------------------------------------===//

ShiftRightArithmeticOpOperandAdaptor::ShiftRightArithmeticOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShiftRightArithmeticOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShiftRightArithmeticOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftRightArithmeticOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ShiftRightArithmeticOp::getOperationName() {
  return "spv.ShiftRightArithmetic";
}

Operation::operand_range ShiftRightArithmeticOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShiftRightArithmeticOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftRightArithmeticOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShiftRightArithmeticOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShiftRightArithmeticOp::result() {
  return *getODSResults(0).begin();
}

void ShiftRightArithmeticOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ShiftRightArithmeticOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ShiftRightArithmeticOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShiftRightArithmeticOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseShiftOp(parser, result);
}

void ShiftRightArithmeticOp::print(OpAsmPrinter &p) {
  ::printShiftOp(this->getOperation(), p);
}

LogicalResult ShiftRightArithmeticOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyShiftOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::ShiftRightLogicalOp definitions
//===----------------------------------------------------------------------===//

ShiftRightLogicalOpOperandAdaptor::ShiftRightLogicalOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ShiftRightLogicalOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ShiftRightLogicalOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftRightLogicalOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ShiftRightLogicalOp::getOperationName() {
  return "spv.ShiftRightLogical";
}

Operation::operand_range ShiftRightLogicalOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ShiftRightLogicalOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ShiftRightLogicalOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ShiftRightLogicalOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ShiftRightLogicalOp::result() {
  return *getODSResults(0).begin();
}

void ShiftRightLogicalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ShiftRightLogicalOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ShiftRightLogicalOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ShiftRightLogicalOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseShiftOp(parser, result);
}

void ShiftRightLogicalOp::print(OpAsmPrinter &p) {
  ::printShiftOp(this->getOperation(), p);
}

LogicalResult ShiftRightLogicalOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return ::verifyShiftOp(this->getOperation());
}










//===----------------------------------------------------------------------===//
// spirv::SpecConstantOp definitions
//===----------------------------------------------------------------------===//

SpecConstantOpOperandAdaptor::SpecConstantOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SpecConstantOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef SpecConstantOp::getOperationName() {
  return "spv.specConstant";
}

Operation::operand_range SpecConstantOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range SpecConstantOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

StringAttr SpecConstantOp::sym_nameAttr() {
  return this->getAttr("sym_name").cast<StringAttr>();
}

StringRef SpecConstantOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

Attribute SpecConstantOp::default_valueAttr() {
  return this->getAttr("default_value").cast<Attribute>();
}

Attribute SpecConstantOp::default_value() {
  auto attr = default_valueAttr();
  return attr;
}

void SpecConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, StringAttr sym_name, Attribute default_value) {
  tblgen_state.addAttribute("sym_name", sym_name);
  tblgen_state.addAttribute("default_value", default_value);
}

void SpecConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringAttr sym_name, Attribute default_value) {
  tblgen_state.addAttribute("sym_name", sym_name);
  tblgen_state.addAttribute("default_value", default_value);
  tblgen_state.addTypes(resultTypes);
}

void SpecConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, StringRef sym_name, Attribute default_value) {
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  tblgen_state.addAttribute("default_value", default_value);
}

void SpecConstantOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, StringRef sym_name, Attribute default_value) {
  tblgen_state.addAttribute("sym_name", (*tblgen_builder).getStringAttr("sym_name"));
  tblgen_state.addAttribute("default_value", default_value);
  tblgen_state.addTypes(resultTypes);
}

void SpecConstantOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SpecConstantOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSpecConstantOp(parser, result);
}

void SpecConstantOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult SpecConstantOp::verify() {
  auto tblgen_sym_name = this->getAttr("sym_name");
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  {
    if (!((tblgen_sym_name.isa<StringAttr>()))) return emitOpError("attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  auto tblgen_default_value = this->getAttr("default_value");
  if (!tblgen_default_value) return emitOpError("requires attribute 'default_value'");
  {
    if (!((true))) return emitOpError("attribute 'default_value' failed to satisfy constraint: any attribute");
  }
  if (!((llvm::isa_and_nonnull<spirv::ModuleOp>((*this->getOperation()).getParentOp())))) {
    return emitOpError("failed to verify that op must appear in a 'spv.module' block");
  }
  {
    unsigned index = 0; (void)index;
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
// spirv::StoreOp definitions
//===----------------------------------------------------------------------===//

StoreOpOperandAdaptor::StoreOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> StoreOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  StoreOpOperandAdaptor::ptr() {
  return *getODSOperands(0).begin();
}

Value  StoreOpOperandAdaptor::value() {
  return *getODSOperands(1).begin();
}

StringRef StoreOp::getOperationName() {
  return "spv.Store";
}

Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  StoreOp::ptr() {
  return *getODSOperands(0).begin();
}

Value  StoreOp::value() {
  return *getODSOperands(1).begin();
}

Operation::result_range StoreOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

IntegerAttr StoreOp::memory_accessAttr() {
  return this->getAttr("memory_access").dyn_cast_or_null<IntegerAttr>();
}

Optional<::mlir::spirv::MemoryAccess> StoreOp::memory_access() {
  auto attr = memory_accessAttr();
  return attr ? Optional<::mlir::spirv::MemoryAccess>(static_cast<::mlir::spirv::MemoryAccess>(attr.getInt())) : (llvm::None);
}

IntegerAttr StoreOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > StoreOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void StoreOp::build(Builder *builder, OperationState &state, Value ptr, Value value, ArrayRef<NamedAttribute> namedAttrs) {
      state.addOperands(ptr);
      state.addOperands(value);
      state.addAttributes(namedAttrs);
    
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(ptr);
  tblgen_state.addOperands(value);
  if (memory_access) {
  tblgen_state.addAttribute("memory_access", memory_access);
  }
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
}

void StoreOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment) {
  tblgen_state.addOperands(ptr);
  tblgen_state.addOperands(value);
  if (memory_access) {
  tblgen_state.addAttribute("memory_access", memory_access);
  }
  if (alignment) {
  tblgen_state.addAttribute("alignment", alignment);
  }
  tblgen_state.addTypes(resultTypes);
}

void StoreOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult StoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseStoreOp(parser, result);
}

void StoreOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult StoreOp::verify() {
  auto tblgen_memory_access = this->getAttr("memory_access");
  if (tblgen_memory_access) {
    if (!((((tblgen_memory_access.isa<IntegerAttr>())) && ((tblgen_memory_access.cast<IntegerAttr>().getType().isInteger(32)))) && ((!(tblgen_memory_access.cast<IntegerAttr>().getValue().getZExtValue() & (~(0u|1u|2u|4u|8u|16u|32u))))))) return emitOpError("attribute 'memory_access' failed to satisfy constraint: valid SPIR-V MemoryAccess");
  }
  auto tblgen_alignment = this->getAttr("alignment");
  if (tblgen_alignment) {
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isInteger(32))))) return emitOpError("attribute 'alignment' failed to satisfy constraint: 32-bit integer attribute");
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("operand #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("operand #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
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
// spirv::SubgroupBallotKHROp definitions
//===----------------------------------------------------------------------===//

SubgroupBallotKHROpOperandAdaptor::SubgroupBallotKHROpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> SubgroupBallotKHROpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  SubgroupBallotKHROpOperandAdaptor::predicate() {
  return *getODSOperands(0).begin();
}

StringRef SubgroupBallotKHROp::getOperationName() {
  return "spv.SubgroupBallotKHR";
}

Operation::operand_range SubgroupBallotKHROp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  SubgroupBallotKHROp::predicate() {
  return *getODSOperands(0).begin();
}

Operation::result_range SubgroupBallotKHROp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  SubgroupBallotKHROp::result() {
  return *getODSResults(0).begin();
}

void SubgroupBallotKHROp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addTypes(result);
}

void SubgroupBallotKHROp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value predicate) {
  tblgen_state.addOperands(predicate);
  tblgen_state.addTypes(resultTypes);
}

void SubgroupBallotKHROp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult SubgroupBallotKHROp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSubgroupBallotKHROp(parser, result);
}

void SubgroupBallotKHROp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult SubgroupBallotKHROp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((v.getType().isInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(32)))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) {
        return emitOpError("result #") << index << " must be vector of 32-bit integer values of length 4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UConvertOp definitions
//===----------------------------------------------------------------------===//

UConvertOpOperandAdaptor::UConvertOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UConvertOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UConvertOpOperandAdaptor::operand() {
  return *getODSOperands(0).begin();
}

StringRef UConvertOp::getOperationName() {
  return "spv.UConvert";
}

Operation::operand_range UConvertOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UConvertOp::operand() {
  return *getODSOperands(0).begin();
}

Operation::result_range UConvertOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UConvertOp::result() {
  return *getODSResults(0).begin();
}

void UConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(result);
}

void UConvertOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand) {
  tblgen_state.addOperands(operand);
  tblgen_state.addTypes(resultTypes);
}

void UConvertOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UConvertOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void UConvertOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult UConvertOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return verifyCastOp(this->getOperation(), false);
}










//===----------------------------------------------------------------------===//
// spirv::UDivOp definitions
//===----------------------------------------------------------------------===//

UDivOpOperandAdaptor::UDivOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UDivOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UDivOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  UDivOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef UDivOp::getOperationName() {
  return "spv.UDiv";
}

Operation::operand_range UDivOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UDivOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  UDivOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range UDivOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UDivOp::result() {
  return *getODSResults(0).begin();
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void UDivOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UDivOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void UDivOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UDivOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult UDivOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UGreaterThanEqualOp definitions
//===----------------------------------------------------------------------===//

UGreaterThanEqualOpOperandAdaptor::UGreaterThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UGreaterThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UGreaterThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  UGreaterThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef UGreaterThanEqualOp::getOperationName() {
  return "spv.UGreaterThanEqual";
}

Operation::operand_range UGreaterThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UGreaterThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  UGreaterThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range UGreaterThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UGreaterThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void UGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void UGreaterThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void UGreaterThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UGreaterThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void UGreaterThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult UGreaterThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UGreaterThanOp definitions
//===----------------------------------------------------------------------===//

UGreaterThanOpOperandAdaptor::UGreaterThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UGreaterThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UGreaterThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  UGreaterThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef UGreaterThanOp::getOperationName() {
  return "spv.UGreaterThan";
}

Operation::operand_range UGreaterThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UGreaterThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  UGreaterThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range UGreaterThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UGreaterThanOp::result() {
  return *getODSResults(0).begin();
}

void UGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void UGreaterThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void UGreaterThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UGreaterThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void UGreaterThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult UGreaterThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::ULessThanEqualOp definitions
//===----------------------------------------------------------------------===//

ULessThanEqualOpOperandAdaptor::ULessThanEqualOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ULessThanEqualOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ULessThanEqualOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ULessThanEqualOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ULessThanEqualOp::getOperationName() {
  return "spv.ULessThanEqual";
}

Operation::operand_range ULessThanEqualOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ULessThanEqualOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ULessThanEqualOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ULessThanEqualOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ULessThanEqualOp::result() {
  return *getODSResults(0).begin();
}

void ULessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ULessThanEqualOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ULessThanEqualOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ULessThanEqualOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void ULessThanEqualOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult ULessThanEqualOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::ULessThanOp definitions
//===----------------------------------------------------------------------===//

ULessThanOpOperandAdaptor::ULessThanOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> ULessThanOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  ULessThanOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  ULessThanOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef ULessThanOp::getOperationName() {
  return "spv.ULessThan";
}

Operation::operand_range ULessThanOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  ULessThanOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  ULessThanOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range ULessThanOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  ULessThanOp::result() {
  return *getODSResults(0).begin();
}

void ULessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void ULessThanOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void ULessThanOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult ULessThanOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseLogicalBinaryOp(parser, result);
}

void ULessThanOp::print(OpAsmPrinter &p) {
  return ::printLogicalOp(getOperation(), p);
}

LogicalResult ULessThanOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isInteger(1))) || ((((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isInteger(1)))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 1-bit integer or vector of 1-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UModOp definitions
//===----------------------------------------------------------------------===//

UModOpOperandAdaptor::UModOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UModOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

Value  UModOpOperandAdaptor::operand1() {
  return *getODSOperands(0).begin();
}

Value  UModOpOperandAdaptor::operand2() {
  return *getODSOperands(1).begin();
}

StringRef UModOp::getOperationName() {
  return "spv.UMod";
}

Operation::operand_range UModOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Value  UModOp::operand1() {
  return *getODSOperands(0).begin();
}

Value  UModOp::operand2() {
  return *getODSOperands(1).begin();
}

Operation::result_range UModOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UModOp::result() {
  return *getODSResults(0).begin();
}

void UModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(result);
}

void UModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes(resultTypes);
}

void UModOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

void UModOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Value operand1, Value operand2) {
  tblgen_state.addOperands(operand1);
  tblgen_state.addOperands(operand2);
  tblgen_state.addTypes({operand1.getType()});

}

void UModOp::build(Builder *, OperationState &tblgen_state, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  tblgen_state.addTypes({operands[0].getType()});

}

ParseResult UModOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UModOp::print(OpAsmPrinter &p) {
  return impl::printOneResultOp(getOperation(), p);
}

LogicalResult UModOp::verify() {
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSOperands(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
    for (Value v : getODSOperands(1)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("operand #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!((((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))))) {
        return emitOpError("result #") << index << " must be 8/16/32/64-bit integer or vector of 8/16/32/64-bit integer values of length 2/3/4, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UndefOp definitions
//===----------------------------------------------------------------------===//

UndefOpOperandAdaptor::UndefOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UndefOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef UndefOp::getOperationName() {
  return "spv.undef";
}

Operation::operand_range UndefOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range UndefOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  UndefOp::result() {
  return *getODSResults(0).begin();
}

void UndefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type result) {
  tblgen_state.addTypes(result);
}

void UndefOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void UndefOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UndefOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseUndefOp(parser, result);
}

void UndefOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult UndefOp::verify() {
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    for (Value v : getODSResults(0)) {
      (void)v;
      if (!(((v.getType().isa<NoneType>())) || ((v.getType().isInteger(1))) || (((v.getType().isInteger(8))) || ((v.getType().isInteger(16))) || ((v.getType().isInteger(32))) || ((v.getType().isInteger(64)))) || (((v.getType().isF16())) || ((v.getType().isF32())) || ((v.getType().isF64()))) || ((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isInteger(1))) || (((v.getType().cast<ShapedType>().getElementType().isInteger(8))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(16))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(32))) || ((v.getType().cast<ShapedType>().getElementType().isInteger(64)))) || (((v.getType().cast<ShapedType>().getElementType().isF16())) || ((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64()))))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 2)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 3)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 4))))) || ((v.getType().isa<::mlir::spirv::PointerType>())) || ((v.getType().isa<::mlir::spirv::ArrayType>())) || ((v.getType().isa<::mlir::spirv::RuntimeArrayType>())) || ((v.getType().isa<::mlir::spirv::StructType>())))) {
        return emitOpError("result #") << index << " must be void type or 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float or vector of 1-bit integer or 8/16/32/64-bit integer or 16/32/64-bit float values of length 2/3/4 or any SPIR-V pointer type or any SPIR-V array type or any SPIR-V runtime array type or any SPIR-V struct type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (this->getOperation()->getNumRegions() != 0) {
    return emitOpError("has incorrect number of regions: expected 0 but found ") << this->getOperation()->getNumRegions();
  }
  return success();
}










//===----------------------------------------------------------------------===//
// spirv::UnreachableOp definitions
//===----------------------------------------------------------------------===//

UnreachableOpOperandAdaptor::UnreachableOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> UnreachableOpOperandAdaptor::getODSOperands(unsigned index) {
  return {std::next(tblgen_operands.begin(), index), std::next(tblgen_operands.begin(), index + 1)};
}

StringRef UnreachableOp::getOperationName() {
  return "spv.Unreachable";
}

Operation::operand_range UnreachableOp::getODSOperands(unsigned index) {
  return {std::next(getOperation()->operand_begin(), index), std::next(getOperation()->operand_begin(), index + 1)};
}

Operation::result_range UnreachableOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

void UnreachableOp::build(Builder *tblgen_builder, OperationState &tblgen_state) {

}

void UnreachableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes) {
  tblgen_state.addTypes(resultTypes);
}

void UnreachableOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult UnreachableOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNoIOOp(parser, result);
}

void UnreachableOp::print(OpAsmPrinter &p) {
  printNoIOOp(getOperation(), p);
}

LogicalResult UnreachableOp::verify() {
  if (!((((*this->getOperation()).getParentOfType<FuncOp>())))) {
    return emitOpError("failed to verify that op must appear in a 'func' block");
  }
  {
    unsigned index = 0; (void)index;
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
// spirv::VariableOp definitions
//===----------------------------------------------------------------------===//

VariableOpOperandAdaptor::VariableOpOperandAdaptor(ArrayRef<Value> values) {
  tblgen_operands = values;
}

ArrayRef<Value> VariableOpOperandAdaptor::getODSOperands(unsigned index) {
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

ArrayRef<Value> VariableOpOperandAdaptor::initializer() {
  return getODSOperands(0);
}

StringRef VariableOp::getOperationName() {
  return "spv.Variable";
}

Operation::operand_range VariableOp::getODSOperands(unsigned index) {
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

Operation::operand_range VariableOp::initializer() {
  return getODSOperands(0);
}

Operation::result_range VariableOp::getODSResults(unsigned index) {
  return {std::next(getOperation()->result_begin(), index), std::next(getOperation()->result_begin(), index + 1)};
}

Value  VariableOp::pointer() {
  return *getODSResults(0).begin();
}

IntegerAttr VariableOp::storage_classAttr() {
  return this->getAttr("storage_class").cast<IntegerAttr>();
}

::mlir::spirv::StorageClass VariableOp::storage_class() {
  auto attr = storage_classAttr();
  return static_cast<::mlir::spirv::StorageClass>(attr.getInt());
}

void VariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, IntegerAttr storage_class, ValueRange initializer) {
  tblgen_state.addOperands(initializer);
  tblgen_state.addAttribute("storage_class", storage_class);
  tblgen_state.addTypes(pointer);
}

void VariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, IntegerAttr storage_class, ValueRange initializer) {
  tblgen_state.addOperands(initializer);
  tblgen_state.addAttribute("storage_class", storage_class);
  tblgen_state.addTypes(resultTypes);
}

void VariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, Type pointer, ::mlir::spirv::StorageClass storage_class, ValueRange initializer) {
  tblgen_state.addOperands(initializer);
  tblgen_state.addAttribute("storage_class", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(storage_class)));
  tblgen_state.addTypes(pointer);
}

void VariableOp::build(Builder *tblgen_builder, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ::mlir::spirv::StorageClass storage_class, ValueRange initializer) {
  tblgen_state.addOperands(initializer);
  tblgen_state.addAttribute("storage_class", (*tblgen_builder).getI32IntegerAttr(static_cast<int32_t>(storage_class)));
  tblgen_state.addTypes(resultTypes);
}

void VariableOp::build(Builder *, OperationState &tblgen_state, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  tblgen_state.addOperands(operands);

  tblgen_state.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  tblgen_state.addTypes(resultTypes);
}

ParseResult VariableOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseVariableOp(parser, result);
}

void VariableOp::print(OpAsmPrinter &p) {
  return ::print(*this, p);
}

LogicalResult VariableOp::verify() {
  auto tblgen_storage_class = this->getAttr("storage_class");
  if (!tblgen_storage_class) return emitOpError("requires attribute 'storage_class'");
  {
    if (!((((tblgen_storage_class.isa<IntegerAttr>())) && ((tblgen_storage_class.cast<IntegerAttr>().getType().isInteger(32)))) && (((tblgen_storage_class.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 12)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5328)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5329)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5338)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5339)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5342)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5343)) || ((tblgen_storage_class.cast<IntegerAttr>().getInt() == 5349))))) return emitOpError("attribute 'storage_class' failed to satisfy constraint: valid SPIR-V StorageClass");
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
      if (!((v.getType().isa<::mlir::spirv::PointerType>()))) {
        return emitOpError("result #") << index << " must be any SPIR-V pointer type, but got " << v.getType();
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

