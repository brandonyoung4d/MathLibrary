///
/// \file Color.hpp
/// \authors Brandon Young
/// \date 2017/02/02
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#pragma once

// Project includes
#include "Utilities.hpp"

namespace bbm
{
/// \brief Stores color values from 0 - 255.
class Color3b : public Vector3b
{
public:  // Functions
    Color3b();
    explicit Color3b(uint8_t newRGB);
    explicit Color3b(uint8_t newR, uint8_t newG, uint8_t newB);
    explicit Color3b(float newR, float newG, float newB);
    explicit Color3b(uint32_t newRGB);
    explicit Color3b(const uint8_t* const newRGB);
    explicit Color3b(const Color3b& newRGB);
    explicit Color3b(const Color3f& newRGB);

    // Getters.
    uint8_t& r();
    uint8_t& g();
    uint8_t& b();

    // Const getters.
    const uint8_t& r() const;
    const uint8_t& g() const;
    const uint8_t& b() const;
}

class Color3f : public Vector3f
{
public:  // Functions
    Color3f();
    explicit Color3f(float newRGB);
    explicit Color3f(float newR, float newG, float newB);
    explicit Color3f(const float* newRGB);
    explicit Color3f(const Color3f& newRGB);

    // Getters.
    float& r();
    float& g();
    float& b();

    // Const getters.
    const float& r() const;
    const float& g() const;
    const float& b() const;
};

/// \brief Stores color values from 0 - 255.
class Color4b : public Vector4b
{
public:  // Functions
    Color4b();
    explicit Color4b(uint8_t newRGBA);
    explicit Color4b(uint8_t newR, uint8_t newG, uint8_t newB, uint8_t newA);
    explicit Color4b(float newR, float newG, float newB, float newA);
    explicit Color4b(uint32_t newRGBA);
    explicit Color4b(const uint8_t* const newRGBA);
    explicit Color4b(const Color4b& newRGBA);
    explicit Color4b(const Color4f& newRGBA);

    // Getters.
    uint8_t& r();
    uint8_t& g();
    uint8_t& b();
    uint8_t& a();

    // Const getters.
    const uint8_t& r() const;
    const uint8_t& g() const;
    const uint8_t& b() const;
    const uint8_t& a() const;
}

class Color4f : public Vector4f
{
public:  // Functions
    Color4f();
    explicit Color4f(float newRGBA);
    explicit Color4f(float newR, float newG, float newB, float newA);
    explicit Color4f(const float* newRGBA);
    explicit Color4f(const Color4f& newRGBA);

    // Getters.
    float& r();
    float& g();
    float& b();
    float& a();

    // Const getters.
    const float& r() const;
    const float& g() const;
    const float& b() const;
    const float& a() const;
};
}  // namespace bbm

#include "Color.inl"
