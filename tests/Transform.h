#ifndef VDENGINE_TRANSFORM_H_
#define VDENGINE_TRANSFORM_H_

// C++ Standard libs
#include <iostream>

// External libs
// #include <glm/glm.hpp>
// #include <glm/gtc/quaternion.hpp>
// #include <glm/gtx/quaternion.hpp>
// #include <glm/gtc/matrix_transform.hpp>
// #include <glm/gtx/matrix_decompose.hpp>
// #include <glm/gtx/euler_angles.hpp>
// #include <glm/gtc/type_ptr.hpp>

// Internal headers
#include "VDEngine/Core/GameObject.h"
#include "VDEngine/Math/Vector3.h"
#include "VDEngine/Math/Quaternion.h"
#include "VDEngine/Math/Matrix4.h"

namespace VDEngine
{

enum Space
{
    LOCAL,
    GLOBAL
};

// #define WORLD_RIGHT glm::vec3(1.0f, 0.0f, 0.0f)
// #define WORLD_UP glm::vec3(0.0f, 1.0f, 0.0f)
// #define WORLD_FORWARD glm::vec3(0.0f, 0.0f, 1.0f)

class Transform : public Component
{
  public:
    Vector3    position;
    Vector3    scale;
    Quaternion rotation;

    Transform();
    ~Transform();

    Matrix4 GetModelMatrix(Space space = LOCAL) const;
    Matrix4 GetNormalMatrix(Space space = LOCAL) const;

    Vector3 GetForwardDir() const;
    Vector3 GetUpDir() const;
    Vector3 GetRightDir() const;

    void Translate(float x, float y, float z);
    void Translate(const Vector3 & translation);

    void Rotate(float x, float y, float z);
    void Rotate(const Vector3 & eulers);
    void Rotate(float angle, const Vector3 & rotation_axis);

    void LookAt(const Vector3 & target, const Vector3 & up = Vector3::VecPosY());

  private:
    Matrix4 GetGlobalModelMatrix() const;
};

} // namespace VDEngine

#endif /* VDENGINE_TRANSFORM_H_ */