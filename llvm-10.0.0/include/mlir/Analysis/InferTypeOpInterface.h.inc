/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct InferTypeOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual LogicalResult inferReturnTypes(Optional<Location> location, ValueRange operands, ArrayRef<NamedAttribute> attributes, RegionRange regions, SmallVectorImpl<Type>& inferedReturnTypes) = 0;
    virtual bool isCompatibleReturnTypes(ArrayRef<Type> lhs, ArrayRef<Type> rhs) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    LogicalResult inferReturnTypes(Optional<Location> location, ValueRange operands, ArrayRef<NamedAttribute> attributes, RegionRange regions, SmallVectorImpl<Type>& inferedReturnTypes) final {
      return ConcreteOp::inferReturnTypes(location, operands, attributes, regions, inferedReturnTypes);
    }
    bool isCompatibleReturnTypes(ArrayRef<Type> lhs, ArrayRef<Type> rhs) final {

        return ConcreteOp::isCompatibleReturnTypes(lhs, rhs);
      
    }
  };
};
} // end namespace detail
class InferTypeOpInterface : public OpInterface<InferTypeOpInterface, detail::InferTypeOpInterfaceInterfaceTraits> {
public:
  using OpInterface<InferTypeOpInterface, detail::InferTypeOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public OpInterface<InferTypeOpInterface, detail::InferTypeOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  static bool isCompatibleReturnTypes(ArrayRef<Type> lhs, ArrayRef<Type> rhs) {

        /// Returns whether two arrays are equal as strongest check for
        /// compatibility by default.
        return lhs == rhs;
        }
  };
  LogicalResult inferReturnTypes(Optional<Location> location, ValueRange operands, ArrayRef<NamedAttribute> attributes, RegionRange regions, SmallVectorImpl<Type>& inferedReturnTypes);
  bool isCompatibleReturnTypes(ArrayRef<Type> lhs, ArrayRef<Type> rhs);
};
