/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
// allowed 64-bit integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
enum class CmpIPredicate : uint64_t {
  eq = 0,
  ne = 1,
  slt = 2,
  sle = 3,
  sgt = 4,
  sge = 5,
  ult = 6,
  ule = 7,
  ugt = 8,
  uge = 9,
};

llvm::Optional<CmpIPredicate> symbolizeCmpIPredicate(uint64_t);
llvm::StringRef stringifyCmpIPredicate(CmpIPredicate);
llvm::Optional<CmpIPredicate> symbolizeCmpIPredicate(llvm::StringRef);
inline constexpr unsigned getMaxEnumValForCmpIPredicate() {
  return 9;
}

} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::CmpIPredicate> {
  using StorageInfo = llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::CmpIPredicate getEmptyKey() {
    return static_cast<::mlir::CmpIPredicate>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::CmpIPredicate getTombstoneKey() {
    return static_cast<::mlir::CmpIPredicate>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::CmpIPredicate &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::CmpIPredicate &lhs, const ::mlir::CmpIPredicate &rhs) {
    return lhs == rhs;
  }
};
}

