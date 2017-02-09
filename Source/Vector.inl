///
/// \file Vector.inl
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Contains all templated functions.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

namespace blackboxmath
{

Vector2f::Vector2f()
{
}

Vector2f::Vector2f(float newComponents) :
    x(newComponents),
    y(newComponents)
{
}

Vector2f::Vector2f(float newX, float newY) :
    x(newX),
    y(newY)
{
}

Vector2f::Vector2f(const float* newComponents) :
    x(newComponents[0]),
    y(newComponents[1])
{
}

Vector2f::Vector2f(const Vector2f& newVector) :
    x(newVector.x),
    y(newVector.y)
{
}

Vector3f::Vector3f()
{
}

Vector3f::Vector3f(float newXYZ) :
    x(newXYZ),
    y(newXYZ),
    z(newXYZ)
{
}

Vector3f::Vector3f(float newX, float newY, float newZ) :
    x(newX),
    y(newY),
    z(newZ)
{
}

Vector3f::Vector3f(const float* newXYZ) :
    x(newXYZ[0]),
    y(newXYZ[1]),
    z(newXYZ[2])
{
}

Vector3f::Vector3f(const Vector3f& newXYZ) :
    x(newXYZ.x),
    y(newXYZ.y),
    z(newXYZ.z)
{
}

Vector3f::Vector3f(const Vector2f& newXY, float newZ) :
    x(newXY.x),
    y(newXY.y),
    z(newZ)
{
}

Vector4f::Vector4f()
{
}

Vector4f::Vector4f(float newXYZW) :
    x(newXYZW),
    y(newXYZW),
    z(newXYZW),
    w(newXYZW)
{
}

Vector4f::Vector4f(float newX, float newY, float newZ, float newW) :
    x(newX),
    y(newY),
    z(newZ),
    w(newW)
{
}

Vector4f::Vector4f(const float* newXYZW) :
    x(newXYZW[0]),
    y(newXYZW[1]),
    z(newXYZW[2]),
    w(newXYZW[3])
{
}

Vector4f::Vector4f(const Vector4f& newXYZW) :
    x(newXYZW.x),
    y(newXYZW.y),
    z(newXYZW.z),
    w(newXYZW.w)
{
}

Vector4f::Vector4f(const Vector3f& newXYZ, float newW) :
    x(newXYZ.x),
    y(newXYZ.y),
    z(newXYZ.z),
    w(newW)
{
}

} // namespace blackboxmath
