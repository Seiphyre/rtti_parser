/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Availability Interface Definitions                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> QueryCapabilityInterface::getCapabilities() {
  return getImpl()->getCapabilities(getOperation());
}
::mlir::spirv::Version QueryMinVersionInterface::getMinVersion() {
  return getImpl()->getMinVersion(getOperation());
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> QueryExtensionInterface::getExtensions() {
  return getImpl()->getExtensions(getOperation());
}
::mlir::spirv::Version QueryMaxVersionInterface::getMaxVersion() {
  return getImpl()->getMaxVersion(getOperation());
}
