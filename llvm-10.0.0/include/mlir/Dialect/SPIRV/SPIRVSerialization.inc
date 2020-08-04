/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Serialization Utilities/Functions                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_SPIRV_SERIALIZATION_UTILS
template <typename OpClass> inline constexpr ::mlir::spirv::Opcode getOpcode();
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AccessChainOp>() {
  return ::mlir::spirv::Opcode::OpAccessChain;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicAndOp>() {
  return ::mlir::spirv::Opcode::OpAtomicAnd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicCompareExchangeWeakOp>() {
  return ::mlir::spirv::Opcode::OpAtomicCompareExchangeWeak;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicIAddOp>() {
  return ::mlir::spirv::Opcode::OpAtomicIAdd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicIDecrementOp>() {
  return ::mlir::spirv::Opcode::OpAtomicIDecrement;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicIIncrementOp>() {
  return ::mlir::spirv::Opcode::OpAtomicIIncrement;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicISubOp>() {
  return ::mlir::spirv::Opcode::OpAtomicISub;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicOrOp>() {
  return ::mlir::spirv::Opcode::OpAtomicOr;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicSMaxOp>() {
  return ::mlir::spirv::Opcode::OpAtomicSMax;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicSMinOp>() {
  return ::mlir::spirv::Opcode::OpAtomicSMin;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicUMaxOp>() {
  return ::mlir::spirv::Opcode::OpAtomicUMax;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicUMinOp>() {
  return ::mlir::spirv::Opcode::OpAtomicUMin;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::AtomicXorOp>() {
  return ::mlir::spirv::Opcode::OpAtomicXor;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitCountOp>() {
  return ::mlir::spirv::Opcode::OpBitCount;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitFieldInsertOp>() {
  return ::mlir::spirv::Opcode::OpBitFieldInsert;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitFieldSExtractOp>() {
  return ::mlir::spirv::Opcode::OpBitFieldSExtract;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitFieldUExtractOp>() {
  return ::mlir::spirv::Opcode::OpBitFieldUExtract;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitReverseOp>() {
  return ::mlir::spirv::Opcode::OpBitReverse;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitcastOp>() {
  return ::mlir::spirv::Opcode::OpBitcast;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitwiseAndOp>() {
  return ::mlir::spirv::Opcode::OpBitwiseAnd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitwiseOrOp>() {
  return ::mlir::spirv::Opcode::OpBitwiseOr;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BitwiseXorOp>() {
  return ::mlir::spirv::Opcode::OpBitwiseXor;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BranchConditionalOp>() {
  return ::mlir::spirv::Opcode::OpBranchConditional;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::BranchOp>() {
  return ::mlir::spirv::Opcode::OpBranch;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::CompositeConstructOp>() {
  return ::mlir::spirv::Opcode::OpCompositeConstruct;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::CompositeExtractOp>() {
  return ::mlir::spirv::Opcode::OpCompositeExtract;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::CompositeInsertOp>() {
  return ::mlir::spirv::Opcode::OpCompositeInsert;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ControlBarrierOp>() {
  return ::mlir::spirv::Opcode::OpControlBarrier;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ConvertFToSOp>() {
  return ::mlir::spirv::Opcode::OpConvertFToS;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ConvertFToUOp>() {
  return ::mlir::spirv::Opcode::OpConvertFToU;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ConvertSToFOp>() {
  return ::mlir::spirv::Opcode::OpConvertSToF;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ConvertUToFOp>() {
  return ::mlir::spirv::Opcode::OpConvertUToF;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::EntryPointOp>() {
  return ::mlir::spirv::Opcode::OpEntryPoint;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ExecutionModeOp>() {
  return ::mlir::spirv::Opcode::OpExecutionMode;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FAddOp>() {
  return ::mlir::spirv::Opcode::OpFAdd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FConvertOp>() {
  return ::mlir::spirv::Opcode::OpFConvert;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FDivOp>() {
  return ::mlir::spirv::Opcode::OpFDiv;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FModOp>() {
  return ::mlir::spirv::Opcode::OpFMod;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FMulOp>() {
  return ::mlir::spirv::Opcode::OpFMul;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FNegateOp>() {
  return ::mlir::spirv::Opcode::OpFNegate;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdEqualOp>() {
  return ::mlir::spirv::Opcode::OpFOrdEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdGreaterThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpFOrdGreaterThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdGreaterThanOp>() {
  return ::mlir::spirv::Opcode::OpFOrdGreaterThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdLessThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpFOrdLessThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdLessThanOp>() {
  return ::mlir::spirv::Opcode::OpFOrdLessThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FOrdNotEqualOp>() {
  return ::mlir::spirv::Opcode::OpFOrdNotEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FRemOp>() {
  return ::mlir::spirv::Opcode::OpFRem;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FSubOp>() {
  return ::mlir::spirv::Opcode::OpFSub;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordEqualOp>() {
  return ::mlir::spirv::Opcode::OpFUnordEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordGreaterThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpFUnordGreaterThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordGreaterThanOp>() {
  return ::mlir::spirv::Opcode::OpFUnordGreaterThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordLessThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpFUnordLessThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordLessThanOp>() {
  return ::mlir::spirv::Opcode::OpFUnordLessThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FUnordNotEqualOp>() {
  return ::mlir::spirv::Opcode::OpFUnordNotEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::FunctionCallOp>() {
  return ::mlir::spirv::Opcode::OpFunctionCall;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::GroupNonUniformBallotOp>() {
  return ::mlir::spirv::Opcode::OpGroupNonUniformBallot;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::IAddOp>() {
  return ::mlir::spirv::Opcode::OpIAdd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::IEqualOp>() {
  return ::mlir::spirv::Opcode::OpIEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::IMulOp>() {
  return ::mlir::spirv::Opcode::OpIMul;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::INotEqualOp>() {
  return ::mlir::spirv::Opcode::OpINotEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ISubOp>() {
  return ::mlir::spirv::Opcode::OpISub;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LoadOp>() {
  return ::mlir::spirv::Opcode::OpLoad;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LogicalAndOp>() {
  return ::mlir::spirv::Opcode::OpLogicalAnd;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LogicalEqualOp>() {
  return ::mlir::spirv::Opcode::OpLogicalEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LogicalNotEqualOp>() {
  return ::mlir::spirv::Opcode::OpLogicalNotEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LogicalNotOp>() {
  return ::mlir::spirv::Opcode::OpLogicalNot;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::LogicalOrOp>() {
  return ::mlir::spirv::Opcode::OpLogicalOr;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::MemoryBarrierOp>() {
  return ::mlir::spirv::Opcode::OpMemoryBarrier;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::NotOp>() {
  return ::mlir::spirv::Opcode::OpNot;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ReturnOp>() {
  return ::mlir::spirv::Opcode::OpReturn;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ReturnValueOp>() {
  return ::mlir::spirv::Opcode::OpReturnValue;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SConvertOp>() {
  return ::mlir::spirv::Opcode::OpSConvert;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SDivOp>() {
  return ::mlir::spirv::Opcode::OpSDiv;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SGreaterThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpSGreaterThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SGreaterThanOp>() {
  return ::mlir::spirv::Opcode::OpSGreaterThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SLessThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpSLessThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SLessThanOp>() {
  return ::mlir::spirv::Opcode::OpSLessThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SModOp>() {
  return ::mlir::spirv::Opcode::OpSMod;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SRemOp>() {
  return ::mlir::spirv::Opcode::OpSRem;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SelectOp>() {
  return ::mlir::spirv::Opcode::OpSelect;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ShiftLeftLogicalOp>() {
  return ::mlir::spirv::Opcode::OpShiftLeftLogical;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ShiftRightArithmeticOp>() {
  return ::mlir::spirv::Opcode::OpShiftRightArithmetic;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ShiftRightLogicalOp>() {
  return ::mlir::spirv::Opcode::OpShiftRightLogical;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::StoreOp>() {
  return ::mlir::spirv::Opcode::OpStore;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::SubgroupBallotKHROp>() {
  return ::mlir::spirv::Opcode::OpSubgroupBallotKHR;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UConvertOp>() {
  return ::mlir::spirv::Opcode::OpUConvert;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UDivOp>() {
  return ::mlir::spirv::Opcode::OpUDiv;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UGreaterThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpUGreaterThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UGreaterThanOp>() {
  return ::mlir::spirv::Opcode::OpUGreaterThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ULessThanEqualOp>() {
  return ::mlir::spirv::Opcode::OpULessThanEqual;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::ULessThanOp>() {
  return ::mlir::spirv::Opcode::OpULessThan;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UModOp>() {
  return ::mlir::spirv::Opcode::OpUMod;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::UnreachableOp>() {
  return ::mlir::spirv::Opcode::OpUnreachable;
}
template <> constexpr inline ::mlir::spirv::Opcode getOpcode<spirv::VariableOp>() {
  return ::mlir::spirv::Opcode::OpVariable;
}
#endif // GET_SPIRV_SERIALIZATION_UTILS

#ifdef GET_SERIALIZATION_FNS

template <> LogicalResult
Serializer::processOp<spirv::AccessChainOp>(spirv::AccessChainOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AccessChainOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicAndOp>(spirv::AtomicAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicAndOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicCompareExchangeWeakOp>(spirv::AtomicCompareExchangeWeakOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("equal_semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("equal_semantics");
  }
  {
    auto attr = op.getAttr("unequal_semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("unequal_semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicCompareExchangeWeakOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIAddOp>(spirv::AtomicIAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicIAddOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIDecrementOp>(spirv::AtomicIDecrementOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicIDecrementOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIIncrementOp>(spirv::AtomicIIncrementOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicIIncrementOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicISubOp>(spirv::AtomicISubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicISubOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicOrOp>(spirv::AtomicOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicOrOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicSMaxOp>(spirv::AtomicSMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicSMaxOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicSMinOp>(spirv::AtomicSMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicSMinOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicUMaxOp>(spirv::AtomicUMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicUMaxOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicUMinOp>(spirv::AtomicUMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicUMinOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicXorOp>(spirv::AtomicXorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    auto attr = op.getAttr("semantics");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::AtomicXorOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitCountOp>(spirv::BitCountOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitCountOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldInsertOp>(spirv::BitFieldInsertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(3)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #3 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitFieldInsertOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldSExtractOp>(spirv::BitFieldSExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitFieldSExtractOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldUExtractOp>(spirv::BitFieldUExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitFieldUExtractOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitReverseOp>(spirv::BitReverseOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitReverseOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitcastOp>(spirv::BitcastOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitcastOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseAndOp>(spirv::BitwiseAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitwiseAndOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseOrOp>(spirv::BitwiseOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitwiseOrOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseXorOp>(spirv::BitwiseXorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::BitwiseXorOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeConstructOp>(spirv::CompositeConstructOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::CompositeConstructOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeExtractOp>(spirv::CompositeExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("indices");
    if (attr) {
      for (auto attrElem : attr.cast<ArrayAttr>()) {
        operands.push_back(static_cast<uint32_t>(attrElem.cast<IntegerAttr>().getValue().getZExtValue()));
      }
    }
    elidedAttrs.push_back("indices");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::CompositeExtractOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeInsertOp>(spirv::CompositeInsertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("indices");
    if (attr) {
      for (auto attrElem : attr.cast<ArrayAttr>()) {
        operands.push_back(static_cast<uint32_t>(attrElem.cast<IntegerAttr>().getValue().getZExtValue()));
      }
    }
    elidedAttrs.push_back("indices");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::CompositeInsertOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertFToSOp>(spirv::ConvertFToSOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ConvertFToSOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertFToUOp>(spirv::ConvertFToUOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ConvertFToUOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertSToFOp>(spirv::ConvertSToFOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ConvertSToFOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertUToFOp>(spirv::ConvertUToFOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ConvertUToFOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FAddOp>(spirv::FAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FAddOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FConvertOp>(spirv::FConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FConvertOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FDivOp>(spirv::FDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FDivOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FModOp>(spirv::FModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FModOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FMulOp>(spirv::FMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FMulOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FNegateOp>(spirv::FNegateOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FNegateOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdEqualOp>(spirv::FOrdEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdGreaterThanEqualOp>(spirv::FOrdGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdGreaterThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdGreaterThanOp>(spirv::FOrdGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdGreaterThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdLessThanEqualOp>(spirv::FOrdLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdLessThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdLessThanOp>(spirv::FOrdLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdLessThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdNotEqualOp>(spirv::FOrdNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FOrdNotEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FRemOp>(spirv::FRemOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FRemOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FSubOp>(spirv::FSubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FSubOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordEqualOp>(spirv::FUnordEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordGreaterThanEqualOp>(spirv::FUnordGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordGreaterThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordGreaterThanOp>(spirv::FUnordGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordGreaterThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordLessThanEqualOp>(spirv::FUnordLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordLessThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordLessThanOp>(spirv::FUnordLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordLessThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordNotEqualOp>(spirv::FUnordNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::FUnordNotEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLCeilOp>(spirv::GLSLCeilOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 9, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLCosOp>(spirv::GLSLCosOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 14, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLExpOp>(spirv::GLSLExpOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 27, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFAbsOp>(spirv::GLSLFAbsOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 4, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFMaxOp>(spirv::GLSLFMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 40, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFMinOp>(spirv::GLSLFMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 37, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFSignOp>(spirv::GLSLFSignOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 6, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFloorOp>(spirv::GLSLFloorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 8, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLInverseSqrtOp>(spirv::GLSLInverseSqrtOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 32, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLLogOp>(spirv::GLSLLogOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 28, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSAbsOp>(spirv::GLSLSAbsOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 5, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSMaxOp>(spirv::GLSLSMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 42, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSMinOp>(spirv::GLSLSMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 39, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSSignOp>(spirv::GLSLSSignOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 7, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSqrtOp>(spirv::GLSLSqrtOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 31, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLTanhOp>(spirv::GLSLTanhOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 21, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformBallotOp>(spirv::GroupNonUniformBallotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    auto attr = op.getAttr("execution_scope");
    if (attr) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::GroupNonUniformBallotOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IAddOp>(spirv::IAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::IAddOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IEqualOp>(spirv::IEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::IEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IMulOp>(spirv::IMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::IMulOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::INotEqualOp>(spirv::INotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::INotEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ISubOp>(spirv::ISubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ISubOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LoadOp>(spirv::LoadOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_access");
    if (attr) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("memory_access");
  }
  {
    auto attr = op.getAttr("alignment");
    if (attr) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("alignment");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LoadOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalAndOp>(spirv::LogicalAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LogicalAndOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalEqualOp>(spirv::LogicalEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LogicalEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalNotEqualOp>(spirv::LogicalNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LogicalNotEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalNotOp>(spirv::LogicalNotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LogicalNotOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalOrOp>(spirv::LogicalOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::LogicalOrOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::NotOp>(spirv::NotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::NotOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ReturnOp>(spirv::ReturnOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ReturnOp>(), operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ReturnValueOp>(spirv::ReturnValueOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ReturnValueOp>(), operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SConvertOp>(spirv::SConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SConvertOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SDivOp>(spirv::SDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SDivOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SGreaterThanEqualOp>(spirv::SGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SGreaterThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SGreaterThanOp>(spirv::SGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SGreaterThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SLessThanEqualOp>(spirv::SLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SLessThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SLessThanOp>(spirv::SLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SLessThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SModOp>(spirv::SModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SModOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SRemOp>(spirv::SRemOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SRemOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SelectOp>(spirv::SelectOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SelectOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftLeftLogicalOp>(spirv::ShiftLeftLogicalOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ShiftLeftLogicalOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftRightArithmeticOp>(spirv::ShiftRightArithmeticOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ShiftRightArithmeticOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftRightLogicalOp>(spirv::ShiftRightLogicalOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ShiftRightLogicalOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::StoreOp>(spirv::StoreOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    auto attr = op.getAttr("memory_access");
    if (attr) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("memory_access");
  }
  {
    auto attr = op.getAttr("alignment");
    if (attr) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("alignment");
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::StoreOp>(), operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SubgroupBallotKHROp>(spirv::SubgroupBallotKHROp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::SubgroupBallotKHROp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UConvertOp>(spirv::UConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UConvertOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UDivOp>(spirv::UDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UDivOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UGreaterThanEqualOp>(spirv::UGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UGreaterThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UGreaterThanOp>(spirv::UGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UGreaterThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ULessThanEqualOp>(spirv::ULessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ULessThanEqualOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ULessThanOp>(spirv::ULessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::ULessThanOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UModOp>(spirv::UModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UModOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UnreachableOp>(spirv::UnreachableOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::UnreachableOp>(), operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::VariableOp>(spirv::VariableOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    auto attr = op.getAttr("storage_class");
    if (attr) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("storage_class");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  encodeInstructionInto(functionBody, spirv::getOpcode<spirv::VariableOp>(), operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first.is(elided);})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

LogicalResult Serializer::dispatchToAutogenSerialization(Operation *op) {
   if (isa<spirv::AccessChainOp>(op)) {
    return processOp(cast<spirv::AccessChainOp>(op));
  } else  if (isa<spirv::AtomicAndOp>(op)) {
    return processOp(cast<spirv::AtomicAndOp>(op));
  } else  if (isa<spirv::AtomicCompareExchangeWeakOp>(op)) {
    return processOp(cast<spirv::AtomicCompareExchangeWeakOp>(op));
  } else  if (isa<spirv::AtomicIAddOp>(op)) {
    return processOp(cast<spirv::AtomicIAddOp>(op));
  } else  if (isa<spirv::AtomicIDecrementOp>(op)) {
    return processOp(cast<spirv::AtomicIDecrementOp>(op));
  } else  if (isa<spirv::AtomicIIncrementOp>(op)) {
    return processOp(cast<spirv::AtomicIIncrementOp>(op));
  } else  if (isa<spirv::AtomicISubOp>(op)) {
    return processOp(cast<spirv::AtomicISubOp>(op));
  } else  if (isa<spirv::AtomicOrOp>(op)) {
    return processOp(cast<spirv::AtomicOrOp>(op));
  } else  if (isa<spirv::AtomicSMaxOp>(op)) {
    return processOp(cast<spirv::AtomicSMaxOp>(op));
  } else  if (isa<spirv::AtomicSMinOp>(op)) {
    return processOp(cast<spirv::AtomicSMinOp>(op));
  } else  if (isa<spirv::AtomicUMaxOp>(op)) {
    return processOp(cast<spirv::AtomicUMaxOp>(op));
  } else  if (isa<spirv::AtomicUMinOp>(op)) {
    return processOp(cast<spirv::AtomicUMinOp>(op));
  } else  if (isa<spirv::AtomicXorOp>(op)) {
    return processOp(cast<spirv::AtomicXorOp>(op));
  } else  if (isa<spirv::BitCountOp>(op)) {
    return processOp(cast<spirv::BitCountOp>(op));
  } else  if (isa<spirv::BitFieldInsertOp>(op)) {
    return processOp(cast<spirv::BitFieldInsertOp>(op));
  } else  if (isa<spirv::BitFieldSExtractOp>(op)) {
    return processOp(cast<spirv::BitFieldSExtractOp>(op));
  } else  if (isa<spirv::BitFieldUExtractOp>(op)) {
    return processOp(cast<spirv::BitFieldUExtractOp>(op));
  } else  if (isa<spirv::BitReverseOp>(op)) {
    return processOp(cast<spirv::BitReverseOp>(op));
  } else  if (isa<spirv::BitcastOp>(op)) {
    return processOp(cast<spirv::BitcastOp>(op));
  } else  if (isa<spirv::BitwiseAndOp>(op)) {
    return processOp(cast<spirv::BitwiseAndOp>(op));
  } else  if (isa<spirv::BitwiseOrOp>(op)) {
    return processOp(cast<spirv::BitwiseOrOp>(op));
  } else  if (isa<spirv::BitwiseXorOp>(op)) {
    return processOp(cast<spirv::BitwiseXorOp>(op));
  } else  if (isa<spirv::BranchConditionalOp>(op)) {
    return processOp(cast<spirv::BranchConditionalOp>(op));
  } else  if (isa<spirv::BranchOp>(op)) {
    return processOp(cast<spirv::BranchOp>(op));
  } else  if (isa<spirv::CompositeConstructOp>(op)) {
    return processOp(cast<spirv::CompositeConstructOp>(op));
  } else  if (isa<spirv::CompositeExtractOp>(op)) {
    return processOp(cast<spirv::CompositeExtractOp>(op));
  } else  if (isa<spirv::CompositeInsertOp>(op)) {
    return processOp(cast<spirv::CompositeInsertOp>(op));
  } else  if (isa<spirv::ControlBarrierOp>(op)) {
    return processOp(cast<spirv::ControlBarrierOp>(op));
  } else  if (isa<spirv::ConvertFToSOp>(op)) {
    return processOp(cast<spirv::ConvertFToSOp>(op));
  } else  if (isa<spirv::ConvertFToUOp>(op)) {
    return processOp(cast<spirv::ConvertFToUOp>(op));
  } else  if (isa<spirv::ConvertSToFOp>(op)) {
    return processOp(cast<spirv::ConvertSToFOp>(op));
  } else  if (isa<spirv::ConvertUToFOp>(op)) {
    return processOp(cast<spirv::ConvertUToFOp>(op));
  } else  if (isa<spirv::EntryPointOp>(op)) {
    return processOp(cast<spirv::EntryPointOp>(op));
  } else  if (isa<spirv::ExecutionModeOp>(op)) {
    return processOp(cast<spirv::ExecutionModeOp>(op));
  } else  if (isa<spirv::FAddOp>(op)) {
    return processOp(cast<spirv::FAddOp>(op));
  } else  if (isa<spirv::FConvertOp>(op)) {
    return processOp(cast<spirv::FConvertOp>(op));
  } else  if (isa<spirv::FDivOp>(op)) {
    return processOp(cast<spirv::FDivOp>(op));
  } else  if (isa<spirv::FModOp>(op)) {
    return processOp(cast<spirv::FModOp>(op));
  } else  if (isa<spirv::FMulOp>(op)) {
    return processOp(cast<spirv::FMulOp>(op));
  } else  if (isa<spirv::FNegateOp>(op)) {
    return processOp(cast<spirv::FNegateOp>(op));
  } else  if (isa<spirv::FOrdEqualOp>(op)) {
    return processOp(cast<spirv::FOrdEqualOp>(op));
  } else  if (isa<spirv::FOrdGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::FOrdGreaterThanEqualOp>(op));
  } else  if (isa<spirv::FOrdGreaterThanOp>(op)) {
    return processOp(cast<spirv::FOrdGreaterThanOp>(op));
  } else  if (isa<spirv::FOrdLessThanEqualOp>(op)) {
    return processOp(cast<spirv::FOrdLessThanEqualOp>(op));
  } else  if (isa<spirv::FOrdLessThanOp>(op)) {
    return processOp(cast<spirv::FOrdLessThanOp>(op));
  } else  if (isa<spirv::FOrdNotEqualOp>(op)) {
    return processOp(cast<spirv::FOrdNotEqualOp>(op));
  } else  if (isa<spirv::FRemOp>(op)) {
    return processOp(cast<spirv::FRemOp>(op));
  } else  if (isa<spirv::FSubOp>(op)) {
    return processOp(cast<spirv::FSubOp>(op));
  } else  if (isa<spirv::FUnordEqualOp>(op)) {
    return processOp(cast<spirv::FUnordEqualOp>(op));
  } else  if (isa<spirv::FUnordGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::FUnordGreaterThanEqualOp>(op));
  } else  if (isa<spirv::FUnordGreaterThanOp>(op)) {
    return processOp(cast<spirv::FUnordGreaterThanOp>(op));
  } else  if (isa<spirv::FUnordLessThanEqualOp>(op)) {
    return processOp(cast<spirv::FUnordLessThanEqualOp>(op));
  } else  if (isa<spirv::FUnordLessThanOp>(op)) {
    return processOp(cast<spirv::FUnordLessThanOp>(op));
  } else  if (isa<spirv::FUnordNotEqualOp>(op)) {
    return processOp(cast<spirv::FUnordNotEqualOp>(op));
  } else  if (isa<spirv::FunctionCallOp>(op)) {
    return processOp(cast<spirv::FunctionCallOp>(op));
  } else  if (isa<spirv::GLSLCeilOp>(op)) {
    return processOp(cast<spirv::GLSLCeilOp>(op));
  } else  if (isa<spirv::GLSLCosOp>(op)) {
    return processOp(cast<spirv::GLSLCosOp>(op));
  } else  if (isa<spirv::GLSLExpOp>(op)) {
    return processOp(cast<spirv::GLSLExpOp>(op));
  } else  if (isa<spirv::GLSLFAbsOp>(op)) {
    return processOp(cast<spirv::GLSLFAbsOp>(op));
  } else  if (isa<spirv::GLSLFMaxOp>(op)) {
    return processOp(cast<spirv::GLSLFMaxOp>(op));
  } else  if (isa<spirv::GLSLFMinOp>(op)) {
    return processOp(cast<spirv::GLSLFMinOp>(op));
  } else  if (isa<spirv::GLSLFSignOp>(op)) {
    return processOp(cast<spirv::GLSLFSignOp>(op));
  } else  if (isa<spirv::GLSLFloorOp>(op)) {
    return processOp(cast<spirv::GLSLFloorOp>(op));
  } else  if (isa<spirv::GLSLInverseSqrtOp>(op)) {
    return processOp(cast<spirv::GLSLInverseSqrtOp>(op));
  } else  if (isa<spirv::GLSLLogOp>(op)) {
    return processOp(cast<spirv::GLSLLogOp>(op));
  } else  if (isa<spirv::GLSLSAbsOp>(op)) {
    return processOp(cast<spirv::GLSLSAbsOp>(op));
  } else  if (isa<spirv::GLSLSMaxOp>(op)) {
    return processOp(cast<spirv::GLSLSMaxOp>(op));
  } else  if (isa<spirv::GLSLSMinOp>(op)) {
    return processOp(cast<spirv::GLSLSMinOp>(op));
  } else  if (isa<spirv::GLSLSSignOp>(op)) {
    return processOp(cast<spirv::GLSLSSignOp>(op));
  } else  if (isa<spirv::GLSLSqrtOp>(op)) {
    return processOp(cast<spirv::GLSLSqrtOp>(op));
  } else  if (isa<spirv::GLSLTanhOp>(op)) {
    return processOp(cast<spirv::GLSLTanhOp>(op));
  } else  if (isa<spirv::GroupNonUniformBallotOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformBallotOp>(op));
  } else  if (isa<spirv::IAddOp>(op)) {
    return processOp(cast<spirv::IAddOp>(op));
  } else  if (isa<spirv::IEqualOp>(op)) {
    return processOp(cast<spirv::IEqualOp>(op));
  } else  if (isa<spirv::IMulOp>(op)) {
    return processOp(cast<spirv::IMulOp>(op));
  } else  if (isa<spirv::INotEqualOp>(op)) {
    return processOp(cast<spirv::INotEqualOp>(op));
  } else  if (isa<spirv::ISubOp>(op)) {
    return processOp(cast<spirv::ISubOp>(op));
  } else  if (isa<spirv::LoadOp>(op)) {
    return processOp(cast<spirv::LoadOp>(op));
  } else  if (isa<spirv::LogicalAndOp>(op)) {
    return processOp(cast<spirv::LogicalAndOp>(op));
  } else  if (isa<spirv::LogicalEqualOp>(op)) {
    return processOp(cast<spirv::LogicalEqualOp>(op));
  } else  if (isa<spirv::LogicalNotEqualOp>(op)) {
    return processOp(cast<spirv::LogicalNotEqualOp>(op));
  } else  if (isa<spirv::LogicalNotOp>(op)) {
    return processOp(cast<spirv::LogicalNotOp>(op));
  } else  if (isa<spirv::LogicalOrOp>(op)) {
    return processOp(cast<spirv::LogicalOrOp>(op));
  } else  if (isa<spirv::MemoryBarrierOp>(op)) {
    return processOp(cast<spirv::MemoryBarrierOp>(op));
  } else  if (isa<spirv::NotOp>(op)) {
    return processOp(cast<spirv::NotOp>(op));
  } else  if (isa<spirv::ReturnOp>(op)) {
    return processOp(cast<spirv::ReturnOp>(op));
  } else  if (isa<spirv::ReturnValueOp>(op)) {
    return processOp(cast<spirv::ReturnValueOp>(op));
  } else  if (isa<spirv::SConvertOp>(op)) {
    return processOp(cast<spirv::SConvertOp>(op));
  } else  if (isa<spirv::SDivOp>(op)) {
    return processOp(cast<spirv::SDivOp>(op));
  } else  if (isa<spirv::SGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::SGreaterThanEqualOp>(op));
  } else  if (isa<spirv::SGreaterThanOp>(op)) {
    return processOp(cast<spirv::SGreaterThanOp>(op));
  } else  if (isa<spirv::SLessThanEqualOp>(op)) {
    return processOp(cast<spirv::SLessThanEqualOp>(op));
  } else  if (isa<spirv::SLessThanOp>(op)) {
    return processOp(cast<spirv::SLessThanOp>(op));
  } else  if (isa<spirv::SModOp>(op)) {
    return processOp(cast<spirv::SModOp>(op));
  } else  if (isa<spirv::SRemOp>(op)) {
    return processOp(cast<spirv::SRemOp>(op));
  } else  if (isa<spirv::SelectOp>(op)) {
    return processOp(cast<spirv::SelectOp>(op));
  } else  if (isa<spirv::ShiftLeftLogicalOp>(op)) {
    return processOp(cast<spirv::ShiftLeftLogicalOp>(op));
  } else  if (isa<spirv::ShiftRightArithmeticOp>(op)) {
    return processOp(cast<spirv::ShiftRightArithmeticOp>(op));
  } else  if (isa<spirv::ShiftRightLogicalOp>(op)) {
    return processOp(cast<spirv::ShiftRightLogicalOp>(op));
  } else  if (isa<spirv::StoreOp>(op)) {
    return processOp(cast<spirv::StoreOp>(op));
  } else  if (isa<spirv::SubgroupBallotKHROp>(op)) {
    return processOp(cast<spirv::SubgroupBallotKHROp>(op));
  } else  if (isa<spirv::UConvertOp>(op)) {
    return processOp(cast<spirv::UConvertOp>(op));
  } else  if (isa<spirv::UDivOp>(op)) {
    return processOp(cast<spirv::UDivOp>(op));
  } else  if (isa<spirv::UGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::UGreaterThanEqualOp>(op));
  } else  if (isa<spirv::UGreaterThanOp>(op)) {
    return processOp(cast<spirv::UGreaterThanOp>(op));
  } else  if (isa<spirv::ULessThanEqualOp>(op)) {
    return processOp(cast<spirv::ULessThanEqualOp>(op));
  } else  if (isa<spirv::ULessThanOp>(op)) {
    return processOp(cast<spirv::ULessThanOp>(op));
  } else  if (isa<spirv::UModOp>(op)) {
    return processOp(cast<spirv::UModOp>(op));
  } else  if (isa<spirv::UnreachableOp>(op)) {
    return processOp(cast<spirv::UnreachableOp>(op));
  } else  if (isa<spirv::VariableOp>(op)) {
    return processOp(cast<spirv::VariableOp>(op));
  } else {
    return op->emitError("unhandled operation serialization");
  }
  return success();
}

#endif // GET_SERIALIZATION_FNS

#ifdef GET_DESERIALIZATION_FNS

template <> LogicalResult
Deserializer::processOp<spirv::AccessChainOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AccessChainOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AccessChainOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AccessChainOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AccessChainOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicAndOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicCompareExchangeWeakOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicCompareExchangeWeakOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicCompareExchangeWeakOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("equal_semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("unequal_semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicCompareExchangeWeakOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicCompareExchangeWeakOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicIAddOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIDecrementOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIDecrementOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIDecrementOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIDecrementOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicIDecrementOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIIncrementOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIIncrementOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIIncrementOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIIncrementOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicIIncrementOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicISubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicISubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicISubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicISubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicISubOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicOrOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicSMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicSMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicSMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicSMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicSMaxOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicSMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicSMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicSMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicSMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicSMinOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicUMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicUMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicUMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicUMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicUMaxOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicUMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicUMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicUMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicUMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicUMinOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicXorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicXorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicXorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicXorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::AtomicXorOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitCountOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitCountOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitCountOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitCountOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitCountOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldInsertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldInsertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldInsertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldInsertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitFieldInsertOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldSExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldSExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldSExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldSExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitFieldSExtractOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldUExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldUExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldUExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldUExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitFieldUExtractOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitReverseOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitReverseOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitReverseOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitReverseOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitReverseOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitcastOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitcastOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitcastOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitcastOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitcastOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitwiseAndOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitwiseOrOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseXorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseXorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseXorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseXorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::BitwiseXorOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeConstructOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeConstructOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeConstructOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeConstructOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::CompositeConstructOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    SmallVector<Attribute, 4> attrListElems;
    while (wordIndex < words.size()) {
      attrListElems.push_back(opBuilder.getI32IntegerAttr(words[wordIndex++]));
    }
    attributes.push_back(opBuilder.getNamedAttr("indices", opBuilder.getArrayAttr(attrListElems)));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::CompositeExtractOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeInsertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeInsertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeInsertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    SmallVector<Attribute, 4> attrListElems;
    while (wordIndex < words.size()) {
      attrListElems.push_back(opBuilder.getI32IntegerAttr(words[wordIndex++]));
    }
    attributes.push_back(opBuilder.getNamedAttr("indices", opBuilder.getArrayAttr(attrListElems)));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeInsertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::CompositeInsertOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertFToSOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertFToSOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertFToSOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertFToSOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ConvertFToSOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertFToUOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertFToUOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertFToUOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertFToUOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ConvertFToUOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertSToFOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertSToFOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertSToFOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertSToFOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ConvertSToFOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertUToFOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertUToFOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertUToFOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertUToFOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ConvertUToFOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FAddOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FConvertOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FDivOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FModOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FMulOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FNegateOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FNegateOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FNegateOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FNegateOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FNegateOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdGreaterThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdGreaterThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdLessThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdLessThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FOrdNotEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FRemOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FRemOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FRemOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FRemOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FRemOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FSubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FSubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FSubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FSubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FSubOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordGreaterThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordGreaterThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordLessThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordLessThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::FUnordNotEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLCeilOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLCeilOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLCeilOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLCeilOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLCeilOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLCosOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLCosOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLCosOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLCosOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLCosOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLExpOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLExpOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLExpOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLExpOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLExpOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFAbsOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFAbsOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFAbsOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFAbsOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLFAbsOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLFMaxOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLFMinOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFSignOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFSignOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFSignOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFSignOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLFSignOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFloorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFloorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFloorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFloorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLFloorOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLInverseSqrtOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLInverseSqrtOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLInverseSqrtOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLInverseSqrtOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLInverseSqrtOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLLogOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLLogOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLLogOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLLogOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLLogOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSAbsOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSAbsOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSAbsOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSAbsOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLSAbsOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLSMaxOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLSMinOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSSignOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSSignOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSSignOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSSignOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLSSignOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSqrtOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSqrtOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSqrtOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSqrtOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLSqrtOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLTanhOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLTanhOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLTanhOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLTanhOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GLSLTanhOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformBallotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformBallotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformBallotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformBallotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::GroupNonUniformBallotOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::IAddOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::IEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::IMulOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::INotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::INotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::INotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::INotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::INotEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ISubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ISubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ISubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ISubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ISubOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LoadOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LoadOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LoadOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("alignment", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LoadOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LoadOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LogicalAndOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LogicalEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LogicalNotEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalNotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalNotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalNotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalNotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LogicalNotOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::LogicalOrOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::NotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::NotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::NotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::NotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::NotOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ReturnOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ReturnOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ReturnOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ReturnValueOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ReturnValueOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ReturnValueOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SConvertOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SDivOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SGreaterThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SGreaterThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SLessThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SLessThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SModOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SRemOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SRemOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SRemOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SRemOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SRemOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SelectOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SelectOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SelectOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SelectOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SelectOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftLeftLogicalOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftLeftLogicalOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftLeftLogicalOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftLeftLogicalOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ShiftLeftLogicalOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftRightArithmeticOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftRightArithmeticOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftRightArithmeticOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftRightArithmeticOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ShiftRightArithmeticOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftRightLogicalOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftRightLogicalOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftRightLogicalOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftRightLogicalOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ShiftRightLogicalOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::StoreOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("alignment", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::StoreOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::StoreOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SubgroupBallotKHROp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SubgroupBallotKHROp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SubgroupBallotKHROp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SubgroupBallotKHROp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::SubgroupBallotKHROp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UConvertOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UDivOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UGreaterThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UGreaterThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ULessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ULessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ULessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ULessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ULessThanEqualOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ULessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ULessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ULessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ULessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::ULessThanOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UModOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UnreachableOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UnreachableOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::UnreachableOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::VariableOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::VariableOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::VariableOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("storage_class", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::VariableOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  auto op = opBuilder.create<spirv::VariableOp>(unknownLoc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

LogicalResult Deserializer::dispatchToAutogenDeserialization(spirv::Opcode opcode, ArrayRef<uint32_t> words) {
  switch (opcode) {
  case spirv::Opcode::OpAccessChain:
    return processOp<spirv::AccessChainOp>(words);
  case spirv::Opcode::OpAtomicAnd:
    return processOp<spirv::AtomicAndOp>(words);
  case spirv::Opcode::OpAtomicCompareExchangeWeak:
    return processOp<spirv::AtomicCompareExchangeWeakOp>(words);
  case spirv::Opcode::OpAtomicIAdd:
    return processOp<spirv::AtomicIAddOp>(words);
  case spirv::Opcode::OpAtomicIDecrement:
    return processOp<spirv::AtomicIDecrementOp>(words);
  case spirv::Opcode::OpAtomicIIncrement:
    return processOp<spirv::AtomicIIncrementOp>(words);
  case spirv::Opcode::OpAtomicISub:
    return processOp<spirv::AtomicISubOp>(words);
  case spirv::Opcode::OpAtomicOr:
    return processOp<spirv::AtomicOrOp>(words);
  case spirv::Opcode::OpAtomicSMax:
    return processOp<spirv::AtomicSMaxOp>(words);
  case spirv::Opcode::OpAtomicSMin:
    return processOp<spirv::AtomicSMinOp>(words);
  case spirv::Opcode::OpAtomicUMax:
    return processOp<spirv::AtomicUMaxOp>(words);
  case spirv::Opcode::OpAtomicUMin:
    return processOp<spirv::AtomicUMinOp>(words);
  case spirv::Opcode::OpAtomicXor:
    return processOp<spirv::AtomicXorOp>(words);
  case spirv::Opcode::OpBitCount:
    return processOp<spirv::BitCountOp>(words);
  case spirv::Opcode::OpBitFieldInsert:
    return processOp<spirv::BitFieldInsertOp>(words);
  case spirv::Opcode::OpBitFieldSExtract:
    return processOp<spirv::BitFieldSExtractOp>(words);
  case spirv::Opcode::OpBitFieldUExtract:
    return processOp<spirv::BitFieldUExtractOp>(words);
  case spirv::Opcode::OpBitReverse:
    return processOp<spirv::BitReverseOp>(words);
  case spirv::Opcode::OpBitcast:
    return processOp<spirv::BitcastOp>(words);
  case spirv::Opcode::OpBitwiseAnd:
    return processOp<spirv::BitwiseAndOp>(words);
  case spirv::Opcode::OpBitwiseOr:
    return processOp<spirv::BitwiseOrOp>(words);
  case spirv::Opcode::OpBitwiseXor:
    return processOp<spirv::BitwiseXorOp>(words);
  case spirv::Opcode::OpBranchConditional:
    return processOp<spirv::BranchConditionalOp>(words);
  case spirv::Opcode::OpBranch:
    return processOp<spirv::BranchOp>(words);
  case spirv::Opcode::OpCompositeConstruct:
    return processOp<spirv::CompositeConstructOp>(words);
  case spirv::Opcode::OpCompositeExtract:
    return processOp<spirv::CompositeExtractOp>(words);
  case spirv::Opcode::OpCompositeInsert:
    return processOp<spirv::CompositeInsertOp>(words);
  case spirv::Opcode::OpControlBarrier:
    return processOp<spirv::ControlBarrierOp>(words);
  case spirv::Opcode::OpConvertFToS:
    return processOp<spirv::ConvertFToSOp>(words);
  case spirv::Opcode::OpConvertFToU:
    return processOp<spirv::ConvertFToUOp>(words);
  case spirv::Opcode::OpConvertSToF:
    return processOp<spirv::ConvertSToFOp>(words);
  case spirv::Opcode::OpConvertUToF:
    return processOp<spirv::ConvertUToFOp>(words);
  case spirv::Opcode::OpEntryPoint:
    return processOp<spirv::EntryPointOp>(words);
  case spirv::Opcode::OpExecutionMode:
    return processOp<spirv::ExecutionModeOp>(words);
  case spirv::Opcode::OpFAdd:
    return processOp<spirv::FAddOp>(words);
  case spirv::Opcode::OpFConvert:
    return processOp<spirv::FConvertOp>(words);
  case spirv::Opcode::OpFDiv:
    return processOp<spirv::FDivOp>(words);
  case spirv::Opcode::OpFMod:
    return processOp<spirv::FModOp>(words);
  case spirv::Opcode::OpFMul:
    return processOp<spirv::FMulOp>(words);
  case spirv::Opcode::OpFNegate:
    return processOp<spirv::FNegateOp>(words);
  case spirv::Opcode::OpFOrdEqual:
    return processOp<spirv::FOrdEqualOp>(words);
  case spirv::Opcode::OpFOrdGreaterThanEqual:
    return processOp<spirv::FOrdGreaterThanEqualOp>(words);
  case spirv::Opcode::OpFOrdGreaterThan:
    return processOp<spirv::FOrdGreaterThanOp>(words);
  case spirv::Opcode::OpFOrdLessThanEqual:
    return processOp<spirv::FOrdLessThanEqualOp>(words);
  case spirv::Opcode::OpFOrdLessThan:
    return processOp<spirv::FOrdLessThanOp>(words);
  case spirv::Opcode::OpFOrdNotEqual:
    return processOp<spirv::FOrdNotEqualOp>(words);
  case spirv::Opcode::OpFRem:
    return processOp<spirv::FRemOp>(words);
  case spirv::Opcode::OpFSub:
    return processOp<spirv::FSubOp>(words);
  case spirv::Opcode::OpFUnordEqual:
    return processOp<spirv::FUnordEqualOp>(words);
  case spirv::Opcode::OpFUnordGreaterThanEqual:
    return processOp<spirv::FUnordGreaterThanEqualOp>(words);
  case spirv::Opcode::OpFUnordGreaterThan:
    return processOp<spirv::FUnordGreaterThanOp>(words);
  case spirv::Opcode::OpFUnordLessThanEqual:
    return processOp<spirv::FUnordLessThanEqualOp>(words);
  case spirv::Opcode::OpFUnordLessThan:
    return processOp<spirv::FUnordLessThanOp>(words);
  case spirv::Opcode::OpFUnordNotEqual:
    return processOp<spirv::FUnordNotEqualOp>(words);
  case spirv::Opcode::OpFunctionCall:
    return processOp<spirv::FunctionCallOp>(words);
  case spirv::Opcode::OpGroupNonUniformBallot:
    return processOp<spirv::GroupNonUniformBallotOp>(words);
  case spirv::Opcode::OpIAdd:
    return processOp<spirv::IAddOp>(words);
  case spirv::Opcode::OpIEqual:
    return processOp<spirv::IEqualOp>(words);
  case spirv::Opcode::OpIMul:
    return processOp<spirv::IMulOp>(words);
  case spirv::Opcode::OpINotEqual:
    return processOp<spirv::INotEqualOp>(words);
  case spirv::Opcode::OpISub:
    return processOp<spirv::ISubOp>(words);
  case spirv::Opcode::OpLoad:
    return processOp<spirv::LoadOp>(words);
  case spirv::Opcode::OpLogicalAnd:
    return processOp<spirv::LogicalAndOp>(words);
  case spirv::Opcode::OpLogicalEqual:
    return processOp<spirv::LogicalEqualOp>(words);
  case spirv::Opcode::OpLogicalNotEqual:
    return processOp<spirv::LogicalNotEqualOp>(words);
  case spirv::Opcode::OpLogicalNot:
    return processOp<spirv::LogicalNotOp>(words);
  case spirv::Opcode::OpLogicalOr:
    return processOp<spirv::LogicalOrOp>(words);
  case spirv::Opcode::OpMemoryBarrier:
    return processOp<spirv::MemoryBarrierOp>(words);
  case spirv::Opcode::OpNot:
    return processOp<spirv::NotOp>(words);
  case spirv::Opcode::OpReturn:
    return processOp<spirv::ReturnOp>(words);
  case spirv::Opcode::OpReturnValue:
    return processOp<spirv::ReturnValueOp>(words);
  case spirv::Opcode::OpSConvert:
    return processOp<spirv::SConvertOp>(words);
  case spirv::Opcode::OpSDiv:
    return processOp<spirv::SDivOp>(words);
  case spirv::Opcode::OpSGreaterThanEqual:
    return processOp<spirv::SGreaterThanEqualOp>(words);
  case spirv::Opcode::OpSGreaterThan:
    return processOp<spirv::SGreaterThanOp>(words);
  case spirv::Opcode::OpSLessThanEqual:
    return processOp<spirv::SLessThanEqualOp>(words);
  case spirv::Opcode::OpSLessThan:
    return processOp<spirv::SLessThanOp>(words);
  case spirv::Opcode::OpSMod:
    return processOp<spirv::SModOp>(words);
  case spirv::Opcode::OpSRem:
    return processOp<spirv::SRemOp>(words);
  case spirv::Opcode::OpSelect:
    return processOp<spirv::SelectOp>(words);
  case spirv::Opcode::OpShiftLeftLogical:
    return processOp<spirv::ShiftLeftLogicalOp>(words);
  case spirv::Opcode::OpShiftRightArithmetic:
    return processOp<spirv::ShiftRightArithmeticOp>(words);
  case spirv::Opcode::OpShiftRightLogical:
    return processOp<spirv::ShiftRightLogicalOp>(words);
  case spirv::Opcode::OpStore:
    return processOp<spirv::StoreOp>(words);
  case spirv::Opcode::OpSubgroupBallotKHR:
    return processOp<spirv::SubgroupBallotKHROp>(words);
  case spirv::Opcode::OpUConvert:
    return processOp<spirv::UConvertOp>(words);
  case spirv::Opcode::OpUDiv:
    return processOp<spirv::UDivOp>(words);
  case spirv::Opcode::OpUGreaterThanEqual:
    return processOp<spirv::UGreaterThanEqualOp>(words);
  case spirv::Opcode::OpUGreaterThan:
    return processOp<spirv::UGreaterThanOp>(words);
  case spirv::Opcode::OpULessThanEqual:
    return processOp<spirv::ULessThanEqualOp>(words);
  case spirv::Opcode::OpULessThan:
    return processOp<spirv::ULessThanOp>(words);
  case spirv::Opcode::OpUMod:
    return processOp<spirv::UModOp>(words);
  case spirv::Opcode::OpUnreachable:
    return processOp<spirv::UnreachableOp>(words);
  case spirv::Opcode::OpVariable:
    return processOp<spirv::VariableOp>(words);
  default:
    ;
  }
  auto opcodeString = spirv::stringifyOpcode(opcode);
  if (!opcodeString.empty()) {
    return emitError(unknownLoc, "unhandled deserialization of ") << opcodeString;
  } else {
   return emitError(unknownLoc, "unhandled opcode ") << static_cast<uint32_t>(opcode);
  }
}
LogicalResult Deserializer::dispatchToExtensionSetAutogenDeserialization(StringRef extensionSetName, uint32_t instructionID, ArrayRef<uint32_t> words) {
  if (extensionSetName == "GLSL.std.450") {
    switch (instructionID) {
    case 9:
      return processOp<spirv::GLSLCeilOp>(words);
    case 14:
      return processOp<spirv::GLSLCosOp>(words);
    case 27:
      return processOp<spirv::GLSLExpOp>(words);
    case 4:
      return processOp<spirv::GLSLFAbsOp>(words);
    case 40:
      return processOp<spirv::GLSLFMaxOp>(words);
    case 37:
      return processOp<spirv::GLSLFMinOp>(words);
    case 6:
      return processOp<spirv::GLSLFSignOp>(words);
    case 8:
      return processOp<spirv::GLSLFloorOp>(words);
    case 32:
      return processOp<spirv::GLSLInverseSqrtOp>(words);
    case 28:
      return processOp<spirv::GLSLLogOp>(words);
    case 5:
      return processOp<spirv::GLSLSAbsOp>(words);
    case 42:
      return processOp<spirv::GLSLSMaxOp>(words);
    case 39:
      return processOp<spirv::GLSLSMinOp>(words);
    case 7:
      return processOp<spirv::GLSLSSignOp>(words);
    case 31:
      return processOp<spirv::GLSLSqrtOp>(words);
    case 21:
      return processOp<spirv::GLSLTanhOp>(words);
    default:
      return emitError(unknownLoc, "unhandled deserializations of ") << instructionID << " from extension set " << extensionSetName;
    }
  }
  return emitError(unknownLoc, "unhandled deserialization of extended instruction set extensionSetName");
}
#endif // GET_DESERIALIZATION_FNS

