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

namespace blackboxmath
{

class Color3f : public Vector3f
{
public: // Functions
    Color3f();
    explicit Color3f(float newRGB);
    explicit Color3f(float newR, float newG, float newB);
    explicit Color3f(const float* newRGB);
    explicit Color3f(const Color3f& newRGB);

    float& r();
    const float& r() const;
    float& g();
    const float& g() const;
    float& b();
    const float& b() const;
};

class Color4f : public Vector4f
{
public: // Functions
    Color4f();
    explicit Color4f(float newRGBA);
    explicit Color4f(float newR, float newG, float newB, float newA);
    explicit Color4f(const float* newRGBA);
    explicit Color4f(const Color4f& newRGBA);

    float& r();
    const float& r() const;
    float& g();
    const float& g() const;
    float& b();
    const float& b() const;
    float& a();
    const float& a() const;
};

class Color4b : public Vector4b
{
public: // Functions
    Color4b();
    explicit Color4b(uint8_t newRGBA);
    explicit Color4b(uint8_t newR, uint8_t newG, uint8_t newB, uint8_t newA);
    explicit Color4b(const uint8_t* newRGBA);
    explicit Color4b(const Color4b& newRGBA);

    float& r();
    const float& r() const;
    float& g();
    const float& g() const;
    float& b();
    const float& b() const;
    float& a();
    const float& a() const;
}
