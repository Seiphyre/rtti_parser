/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Op Availability Implementations                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AccessChainOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version AccessChainOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version AccessChainOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AccessChainOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AddressOfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version AddressOfOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version AddressOfOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AddressOfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicAndOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicAndOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicCompareExchangeWeakOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Kernel});
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->equal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->unequal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicCompareExchangeWeakOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->equal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->unequal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicCompareExchangeWeakOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_3));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicCompareExchangeWeakOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->equal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->unequal_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicIAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicIAddOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicIAddOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicIAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicIDecrementOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicIDecrementOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicIDecrementOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicIDecrementOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicIIncrementOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicIIncrementOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicIIncrementOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicIIncrementOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicISubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicISubOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicISubOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicISubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicOrOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicOrOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicSMaxOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicSMaxOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicSMinOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicSMinOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicUMaxOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicUMaxOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicUMinOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicUMinOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> AtomicXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version AtomicXorOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version AtomicXorOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> AtomicXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitCountOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BitCountOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitCountOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitCountOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitFieldInsertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  return overall;
}
::mlir::spirv::Version BitFieldInsertOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitFieldInsertOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitFieldInsertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitFieldSExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  return overall;
}
::mlir::spirv::Version BitFieldSExtractOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitFieldSExtractOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitFieldSExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitFieldUExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  return overall;
}
::mlir::spirv::Version BitFieldUExtractOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitFieldUExtractOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitFieldUExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitReverseOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::Shader});
  return overall;
}
::mlir::spirv::Version BitReverseOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitReverseOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitReverseOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitcastOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BitcastOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitcastOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitcastOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitwiseAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BitwiseAndOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitwiseAndOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitwiseAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitwiseOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BitwiseOrOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitwiseOrOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitwiseOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BitwiseXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BitwiseXorOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BitwiseXorOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BitwiseXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BranchConditionalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BranchConditionalOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BranchConditionalOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BranchConditionalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> BranchOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version BranchOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version BranchOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> BranchOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> CompositeConstructOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version CompositeConstructOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version CompositeConstructOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> CompositeConstructOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> CompositeExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version CompositeExtractOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version CompositeExtractOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> CompositeExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> CompositeInsertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version CompositeInsertOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version CompositeInsertOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> CompositeInsertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ConstantOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ConstantOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ConstantOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ConstantOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ControlBarrierOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->execution_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version ControlBarrierOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->execution_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version ControlBarrierOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ControlBarrierOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ConvertFToSOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ConvertFToSOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ConvertFToSOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ConvertFToSOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ConvertFToUOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ConvertFToUOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ConvertFToUOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ConvertFToUOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ConvertSToFOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ConvertSToFOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ConvertSToFOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ConvertSToFOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ConvertUToFOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ConvertUToFOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ConvertUToFOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ConvertUToFOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> EntryPointOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->execution_model();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version EntryPointOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version EntryPointOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> EntryPointOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ExecutionModeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->execution_mode();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version ExecutionModeOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->execution_mode();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version ExecutionModeOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ExecutionModeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->execution_mode();
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FAddOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FAddOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FConvertOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FConvertOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FDivOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FDivOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FModOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FModOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FMulOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FMulOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FNegateOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FNegateOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FNegateOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FNegateOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdGreaterThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdGreaterThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdGreaterThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdGreaterThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdLessThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdLessThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdLessThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdLessThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FOrdNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FOrdNotEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FOrdNotEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FOrdNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FRemOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FRemOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FRemOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FRemOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FSubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FSubOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FSubOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FSubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordGreaterThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordGreaterThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordGreaterThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordGreaterThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordLessThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordLessThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordLessThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordLessThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FUnordNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FUnordNotEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FUnordNotEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FUnordNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> FunctionCallOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version FunctionCallOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version FunctionCallOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> FunctionCallOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLCeilOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLCeilOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLCeilOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLCeilOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLCosOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLCosOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLCosOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLCosOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLExpOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLExpOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLExpOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLExpOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLFAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLFAbsOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLFAbsOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLFAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLFMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLFMaxOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLFMaxOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLFMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLFMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLFMinOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLFMinOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLFMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLFSignOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLFSignOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLFSignOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLFSignOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLFloorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLFloorOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLFloorOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLFloorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLInverseSqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLInverseSqrtOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLInverseSqrtOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLInverseSqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLLogOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLLogOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLLogOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLLogOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLSAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLSAbsOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLSAbsOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLSAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLSMaxOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLSMaxOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLSMinOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLSMinOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLSSignOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLSSignOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLSSignOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLSSignOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLSqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLSqrtOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLSqrtOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLSqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GLSLTanhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GLSLTanhOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GLSLTanhOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GLSLTanhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GlobalVariableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version GlobalVariableOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version GlobalVariableOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GlobalVariableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> GroupNonUniformBallotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::GroupNonUniformBallot});
  {
    auto attrVal = this->execution_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version GroupNonUniformBallotOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_3));
  {
    auto attrVal = this->execution_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version GroupNonUniformBallotOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> GroupNonUniformBallotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> IAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version IAddOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version IAddOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> IAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> IEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version IEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version IEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> IEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> IMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version IMulOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version IMulOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> IMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> INotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version INotEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version INotEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> INotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ISubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ISubOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ISubOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ISubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LoadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LoadOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LoadOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LoadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LogicalAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LogicalAndOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LogicalAndOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LogicalAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LogicalEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LogicalEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LogicalEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LogicalEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LogicalNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LogicalNotEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LogicalNotEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LogicalNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LogicalNotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LogicalNotOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LogicalNotOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LogicalNotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LogicalOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LogicalOrOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version LogicalOrOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LogicalOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> LoopOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version LoopOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::LoopControl attrVal = this->loop_control() & static_cast<::mlir::spirv::LoopControl>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version LoopOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> LoopOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> MemoryBarrierOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version MemoryBarrierOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->memory_scope();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version MemoryBarrierOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> MemoryBarrierOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics attrVal = this->memory_semantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(attrVal) == 0) continue;
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> MergeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version MergeOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version MergeOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> MergeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ModuleEndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ModuleEndOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ModuleEndOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ModuleEndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ModuleOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->addressing_model();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  {
    auto attrVal = this->memory_model();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version ModuleOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->addressing_model();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  {
    auto attrVal = this->memory_model();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version ModuleOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ModuleOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->addressing_model();
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> NotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version NotOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version NotOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> NotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ReferenceOfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ReferenceOfOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ReferenceOfOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ReferenceOfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ReturnOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ReturnOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ReturnOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ReturnOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ReturnValueOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ReturnValueOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ReturnValueOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ReturnValueOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SConvertOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SConvertOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SDivOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SDivOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SGreaterThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SGreaterThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SGreaterThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SGreaterThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SLessThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SLessThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SLessThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SLessThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SModOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SModOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SRemOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SRemOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SRemOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SRemOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SelectOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SelectOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SelectOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SelectOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SelectionOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SelectionOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SelectionOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SelectionOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ShiftLeftLogicalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ShiftLeftLogicalOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ShiftLeftLogicalOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ShiftLeftLogicalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ShiftRightArithmeticOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ShiftRightArithmeticOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ShiftRightArithmeticOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ShiftRightArithmeticOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ShiftRightLogicalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ShiftRightLogicalOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ShiftRightLogicalOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ShiftRightLogicalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SpecConstantOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version SpecConstantOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SpecConstantOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SpecConstantOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> StoreOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version StoreOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version StoreOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> StoreOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> SubgroupBallotKHROp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Capability>{::mlir::spirv::Capability::SubgroupBallotKHR});
  return overall;
}
::mlir::spirv::Version SubgroupBallotKHROp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version SubgroupBallotKHROp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> SubgroupBallotKHROp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  overall.emplace_back(std::initializer_list<::mlir::spirv::Extension>{::mlir::spirv::Extension::SPV_KHR_shader_ballot});
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UConvertOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UConvertOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UDivOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UDivOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UGreaterThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UGreaterThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UGreaterThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UGreaterThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ULessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ULessThanEqualOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ULessThanEqualOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ULessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> ULessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version ULessThanOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version ULessThanOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> ULessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UModOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UModOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UndefOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UndefOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UndefOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UndefOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> UnreachableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  return overall;
}
::mlir::spirv::Version UnreachableOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  return overall;
}
::mlir::spirv::Version UnreachableOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> UnreachableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> VariableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Capability, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->storage_class();
    auto instance = ::mlir::spirv::getCapabilities(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
::mlir::spirv::Version VariableOp::getMinVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::max(overall, ::mlir::spirv::Version::V_1_0));
  {
    auto attrVal = this->storage_class();
    auto instance = ::mlir::spirv::getMinVersion(attrVal);
    if (instance) overall = static_cast<::mlir::spirv::Version>(std::max(overall, *instance));
  }
  return overall;
}
::mlir::spirv::Version VariableOp::getMaxVersion() {
  ::mlir::spirv::Version overall = static_cast<::mlir::spirv::Version>(~uint32_t(0));
  overall = static_cast<::mlir::spirv::Version>(std::min(overall, ::mlir::spirv::Version::V_1_5));
  return overall;
}
::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> VariableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::SmallVector<::mlir::spirv::Extension, 1>, 1> overall = {};
  ;
  {
    auto attrVal = this->storage_class();
    auto instance = ::mlir::spirv::getExtensions(attrVal);
    if (instance) overall.emplace_back(*instance);
  }
  return overall;
}
