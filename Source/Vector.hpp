///
/// \file Vector.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

#ifndef BLACKBOXMATH_VECTOR_H_
#define BLACKBOXMATH_VECTOR_H_

// C++ includes
#include <array>

namespace blackboxmath
{

/// \brief Base templated vector class. Can hold any number of components. For speed and data locality the class is templated so at compile time the exact size can be determined. Template specializations are used to help with common vector class cases such as vectors with 2, 3, and 4 components.

struct Vector2f
{
public: // Functions
    Vector2f();
    explicit Vector2f(float newXY);
    explicit Vector2f(float newX, float newY);
    explicit Vector2f(const float* newXY);
    explicit Vector2f(const Vector2f& newXY);

public: // Variables
    union
    {
        std::array<float, 2> components;
        struct { float x, y; };
        struct { float r, g; };
        struct { float s, t; };
    };
};

struct Vector3f
{
public: // Functions
    Vector3f();
    explicit Vector3f(float newXYZ);
    explicit Vector3f(float newX, float newY, float newZ);
    explicit Vector3f(const float* newXYZ);
    explicit Vector3f(const Vector3f& newXYZ);
    explicit Vector3f(const Vector2f& newXY, float newZ);

public: // Variables
    union
    {
        std::array<float, 3> components;
        struct { float x, y, z; };
        struct { float r, g, b; };
        // Swizzling
        Vector2f xy;
    };
};

struct Vector4f
{
public: // Functions
    Vector4f();
    explicit Vector4f(float newXYZW);
    explicit Vector4f(float newX, float newY, float newZ, float newW);
    explicit Vector4f(const float* newXYZW);
    explicit Vector4f(const Vector4f& newXYZW);
    explicit Vector4f(const Vector3f& newXYZ, float newW);

public: // Variables
    union
    {
        std::array<float, 4> components;
        struct { float x, y, z, w; };
        struct { float r, g, b, a; };
        // Swizzling
        Vector3f xyz;
        Vector3f rgb;
    };
};

using Vec2 = Vector2f;
using Vec3 = Vector3f;
using Vec4 = Vector4f;

} // namespace blackboxmath

// Inline header includes
#include  "Vector.inl"

#endif // BLACKBOXMATH_VECTOR_H_
