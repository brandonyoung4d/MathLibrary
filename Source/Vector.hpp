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
class Vector2f
{
public: // Functions
    Vector2f();
    explicit Vector2f(float newXY);
    explicit Vector2f(float newX, float newY);
    explicit Vector2f(const float* const newXY);
    explicit Vector2f(const Vector2f& newXY);

    // Getters
    float& x();
    float x() const;
    float& y();
    float y() const;
    float* data();
    const float* data() const;

    // Static getters
    static Vector2f zero();

private: // Variables
    float _x, _y;
};

class Vector3f
{
public: // Functions
    Vector3f();
    explicit Vector3f(float newXYZ);
    explicit Vector3f(float newX, float newY, float newZ);
    explicit Vector3f(const float* const newXYZ);
    explicit Vector3f(const Vector3f& newXYZ);
    explicit Vector3f(const Vector2f& newXY, float newZ);

    // Getters
    float& x();
    float x() const;
    float& y();
    float y() const;
    float& z();
    float z() const;
    float* data();
    const float* data() const;

    // Static getters
    static Vector3f zero();

public: // Variables
    float _x, _y, _z;
};

class Vector4f
{
public: // Functions
    Vector4f();
    explicit Vector4f(float newXYZW);
    explicit Vector4f(float newX, float newY, float newZ, float newW);
    explicit Vector4f(const float* const newXYZW);
    explicit Vector4f(const Vector4f& newXYZW);
    explicit Vector4f(const Vector3f& newXYZ, float newW);

    float& x();
    float x() const;
    float& y();
    float y() const;
    float& z();
    float z() const;
    float& w();
    float w() const;

    float* data();
    const float* data() const;

public: // Variables
    float _x, _y, _z, _w;
};

class Vector4b
{
public: // Functions
    Vector4b();
    explicit Vector4b(uint8_t newXYZW);
    explicit Vector4b(uint8_t newX, uint8_t newY, uint8_t newZ, uint8_t newW);
    explicit Vector4b(uint32_t newXYZW);
    explicit Vector4b(const uint8_t* const newXYZW);
    explicit Vector4b(const Vector4b& newXYZW);

    uint8_t& x();
    uint8_t x() const;
    uint8_t& y();
    uint8_t y() const;
    uint8_t& z();
    uint8_t z() const;
    uint8_t& w();
    uint8_t w() const;

    uint8_t* data();
    const uint8_t* data() const;

public: // Variables
    uint8_t _x, _y, _z, _w;
};

} // Namespace blackboxmath

// Inline header includes
#include "Vector.inl"
