///
/// \file Vector.inl
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Contains all templated functions.
/// \details Basic vector classes.
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

namespace bbm
{
Vector2f::Vector2f()
{
    // Nothing
}

Vector2f::Vector2f(float newXY) : _x(newXY), _y(newXY)
{
    // Nothing
}

Vector2f::Vector2f(float newX, float newY) : _x(newX), _y(newY)
{
    // Nothing
}

Vector2f::Vector2f(const float* const newXY) : _x(newXY[0]), _y(newXY[1])
{
    // Nothing
}

Vector2f::Vector2f(const Vector2f& newXY) : _x(newXY.x()), _y(newXY.y())
{
    // Nothing
}

float& Vector2f::x() { return _x; }

float Vector2f::x() const { return _x; }

float& Vector2f::y() { return _y; }

float Vector2f::y() const { return _y; }

float* Vector2f::data() { return reinterpret_cast<float*>(this); }

const float* Vector2f::data() const
{
    return reinterpret_cast<const float*>(this);
}

Vector2f Vector2f::zero() { return Vector2f(0.0f, 0.0f); }

Vector2f& Vector2f::operator=(const bbm::Vector2f& newXY)
{
    _x = newXY.x();
    _y = newXY.y();
    return *this;
}

Vector3f::Vector3f()
{
    // Nothing
}

Vector3f::Vector3f(float newXYZ) : _x(newXYZ), _y(newXYZ), _z(newXYZ)
{
    // Nothing
}

Vector3f::Vector3f(float newX, float newY, float newZ)
    : _x(newX), _y(newY), _z(newZ)
{
    // Nothing
}

Vector3f::Vector3f(const float* const newXYZ)
    : _x(newXYZ[0]), _y(newXYZ[1]), _z(newXYZ[2])
{
    // Nothing
}

Vector3f::Vector3f(const Vector3f& newXYZ)
    : _x(newXYZ.x()), _y(newXYZ.y()), _z(newXYZ.z())
{
    // Nothing
}

Vector3f::Vector3f(const Vector2f& newXY, float newZ)
    : _x(newXY.x()), _y(newXY.y()), _z(newZ)
{
    // Nothing
}

float& Vector3f::x() { return _x; }

float Vector3f::x() const { return _x; }

float& Vector3f::y() { return _y; }

float Vector3f::y() const { return _y; }

float& Vector3f::z() { return _z; }

float Vector3f::z() const { return _z; }

float* Vector3f::data() { return reinterpret_cast<float*>(this); }

const float* Vector3f::data() const
{
    return reinterpret_cast<const float*>(this);
}

Vector3f Vector3f::zero() { return Vector3f(0.0f, 0.0f, 0.0f); }

Vector4f::Vector4f()
{
    // Nothing
}

Vector4f::Vector4f(float newXYZW)
    : _x(newXYZW), _y(newXYZW), _z(newXYZW), _w(newXYZW)
{
    // Nothing
}

Vector4f::Vector4f(float newX, float newY, float newZ, float newW)
    : _x(newX), _y(newY), _z(newZ), _w(newW)
{
    // Nothing
}

Vector4f::Vector4f(const float* const newXYZW)
    : _x(newXYZW[0]), _y(newXYZW[1]), _z(newXYZW[2]), _w(newXYZW[3])
{
    // Nothing
}

Vector4f::Vector4f(const Vector4f& newXYZW)
    : _x(newXYZW.x()), _y(newXYZW.y()), _z(newXYZW.z()), _w(newXYZW.w())
{
    // Nothing
}

Vector4f::Vector4f(const Vector3f& newXYZ, float newW)
    : _x(newXYZ.x()), _y(newXYZ.y()), _z(newXYZ.z()), _w(newW)
{
    // Nothing
}

float& Vector4f::x() { return _x; }

float Vector4f::x() const { return _x; }

float& Vector4f::y() { return _y; }

float Vector4f::y() const { return _y; }

float& Vector4f::z() { return _z; }

float Vector4f::z() const { return _z; }

float& Vector4f::w() { return _w; }

float Vector4f::w() const { return _w; }

float* Vector4f::data() { return reinterpret_cast<float*>(this); }

const float* Vector4f::data() const
{
    return reinterpret_cast<const float*>(this);
}

Vector4f Vector4f::zero() { return Vector4f(0.0f, 0.0f, 0.0f, 0.0f); }

Vector4b::Vector4b()
{
    // Nothing
}

Vector4b::Vector4b(uint8_t newXYZW)
    : _x(newXYZW), _y(newXYZW), _z(newXYZW), _w(newXYZW)
{
    // Nothing
}

Vector4b::Vector4b(uint8_t newX, uint8_t newY, uint8_t newZ, uint8_t newW)
    : _x(newX), _y(newY), _z(newZ), _w(newW)
{
    // Nothing
}

Vector4b::Vector4b(uint32_t newXYZW)
    : _x(static_cast<uint8_t>(newXYZW)), _y(static_cast<uint8_t>(newXYZW << 8)), _z(static_cast<uint8_t>(newXYZW << 16)), _w(static_cast<uint8_t>(newXYZW << 24))
{
    // Nothing
}

Vector4b::Vector4b(const uint8_t* const newXYZW)
    : _x(newXYZW[0]), _y(newXYZW[1]), _z(newXYZW[2]), _w(newXYZW[3])
{
    // Nothing
}

Vector4b::Vector4b(const Vector4b& newXYZW)
    : _x(newXYZW.x()), _y(newXYZW.y()), _z(newXYZW.z()), _w(newXYZW.w())
{
    // Nothing
}

uint8_t& Vector4b::x() { return _x; }

uint8_t Vector4b::x() const { return _x; }

uint8_t& Vector4b::y() { return _y; }

uint8_t Vector4b::y() const { return _y; }

uint8_t& Vector4b::z() { return _z; }

uint8_t Vector4b::z() const { return _z; }

uint8_t& Vector4b::w() { return _w; }

uint8_t Vector4b::w() const { return _w; }

uint8_t* Vector4b::data() { return reinterpret_cast<uint8_t*>(this); }

const uint8_t* Vector4b::data() const
{
    return reinterpret_cast<const uint8_t*>(this);
}

Vector4b Vector4b::zero() { return Vector4b(0.0f, 0.0f, 0.0f, 0.0f); }

}  // namespace bbm
