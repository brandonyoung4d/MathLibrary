///
/// \file Vector.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#pragma once

namespace blackboxmath
{

/// \brief Base templated vector class. Can hold any number of components. For speed and data locality the class is templated so at compile time the exact size can be determined. Template specializations are used to help with common vector class cases such as vectors with 2, 3, and 4 components.

class Vector2f
{
public: // Functions
    Vector2f();
    explicit Vector2f(float newXY);
    explicit Vector2f(float newX, float newY);
    explicit Vector2f(const float* newXY);
    explicit Vector2f(const Vector2f& newXY);

    float& x();
    const float& x() const;
    float& y();
    const float& y() const;

    float* const data();
    const float* const data() const;

private: // Variables
    union
    {
        struct { float _x, _y; };
        float _components[2];
    };
};

class Vector3f
{
public: // Functions
    Vector3f();
    explicit Vector3f(float newXYZ);
    explicit Vector3f(float newX, float newY, float newZ);
    explicit Vector3f(const float* newXYZ);
    explicit Vector3f(const Vector3f& newXYZ);
    explicit Vector3f(const Vector2f& newXY, float newZ);

    float& x();
    const float& x() const;
    float& y();
    const float& y() const;
    float& z();
    const float& z() const;

    float* const data();
    const float* const data() const;

public: // Variables
    union
    {
        struct
        {
            float _x;
            float _y;
            float _z;
        };
        float _components[3];
    };
};

class Vector4f
{
public: // Functions
    Vector4f();
    explicit Vector4f(float newXYZW);
    explicit Vector4f(float newX, float newY, float newZ, float newW);
    explicit Vector4f(const float* newXYZW);
    explicit Vector4f(const Vector4f& newXYZW);
    explicit Vector4f(const Vector3f& newXYZ, float newW);

    float& x();
    const float& x() const;
    float& y();
    const float& y() const;
    float& z();
    const float& z() const;
    float& w();
    const float& w() const;

    float* const data();
    const float* const data() const;

public: // Variables
    union
    {
        struct
        {
            float _x;
            float _y;
            float _z;
            float _w;
        };
        float _components[4];
    };
};

} // namespace blackboxmath

// Inline header includes
#include  "Vector.inl"
