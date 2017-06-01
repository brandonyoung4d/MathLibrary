///
/// \file Matrix.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

#pragma once

// C++ includes
#include <array>

// Project includes
#include "Vector.hpp"

namespace bbm
{
class Matrix3f
{
public:  // Functions
    Matrix3f();
    explicit Matrix3f(float newComponents);
    explicit Matrix3f(float n00, float n01, float n02, float n10, float n11, float n12, float n20, float n21, float n22);
    explicit Matrix3f(const Vector3f& newRow0, const Vector3f& newRow1, const Vector3f& newRow2);
    explicit Matrix3f(const Matrix3f& newMatrix);
    explicit Matrix3f(const float* const newComponents);

private:  // Variables
    float _m00, _m01, _m02, _m10, _m11, _m12, _m20, _m21, _m22;
};

class Matrix4f
{
public:  // Functions
    Matrix4f();
    explicit Matrix4f(float newComponents);
    explicit Matrix4f(float n00, float n01, float n02, float n03, float n10, float n11, float n12, float n13, float n20, float n21, float n22, float n23, float n30, float n31, float n32, float n33);
    explicit Matrix4f(const Vector4f& newRow0, const Vector4f& newRow1, const Vector4f& newRow2, const Vector4f& newRow3);
    explicit Matrix4f(const Matrix4f& newMatrix);
    explicit Matrix4f(const float* const newComponents);

public:  // Variables
    float _m00, _m01, _m02, _m03, _m10, _m11, _m12, _m13, _m20, _m21, _m22, _m23, _m30, _m31, _m32, _m33;
};

}  // namespace bbm

// Inline header includes
#include "Matrix.inl"
