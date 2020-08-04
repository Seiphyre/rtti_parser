if (auto op = dyn_cast<ROCDL::BlockDimXOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_local_size", 0);
  return success();
}
if (auto op = dyn_cast<ROCDL::BlockDimYOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_local_size", 1);
  return success();
}
if (auto op = dyn_cast<ROCDL::BlockDimZOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_local_size", 2);
  return success();
}
if (auto op = dyn_cast<ROCDL::BlockIdXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workgroup_id_x);
  return success();
}
if (auto op = dyn_cast<ROCDL::BlockIdYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workgroup_id_y);
  return success();
}
if (auto op = dyn_cast<ROCDL::BlockIdZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workgroup_id_z);
  return success();
}
if (auto op = dyn_cast<ROCDL::GridDimXOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_global_size", 0);
  return success();
}
if (auto op = dyn_cast<ROCDL::GridDimYOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_global_size", 1);
  return success();
}
if (auto op = dyn_cast<ROCDL::GridDimZOp>(opInst)) {
valueMapping[op.res()] = createDeviceFunctionCall(builder, "__ockl_get_global_size", 2);
  return success();
}
if (auto op = dyn_cast<ROCDL::ThreadIdXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workitem_id_x);
  return success();
}
if (auto op = dyn_cast<ROCDL::ThreadIdYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workitem_id_y);
  return success();
}
if (auto op = dyn_cast<ROCDL::ThreadIdZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::amdgcn_workitem_id_z);
  return success();
}
