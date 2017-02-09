///
/// \file Matrix.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

#ifndef BLACKBOXMATH_MATRIX_H_
#define BLACKBOXMATH_MATRIX_H_

// C++ includes
#include <array>

// Project includes
#include "Vector.hpp"

namespace blackboxmath
{

/// \brief Base templated matrix class. Can hold any number of components. For speed and data locality the class is templated so at compile time the exact size can be determined. Template specializations are used to help with common matrix class cases such as matrix3x3 and matrix4x4. Indexing into the matrix class starts with 0.

class Matrix3f
{
public: // Functions
    Matrix3f();
    explicit Matrix3f(float newComponents);
    explicit Matrix3f(float n00, float n01, float n02, float n10, float n11, float n12, float n20, float n21, float n22);
    explicit Matrix3f(const Vector3f& newRow0, const Vector3f& newRow1, const Vector3f& newRow2);
    explicit Matrix3f(const Matrix3f& newMatrix);
    explicit Matrix3f(const float* newComponents);

public: // Variables
    union
    {
        struct { float m00, m01, m02, m10, m11, m12, m20, m21, m22; }; /// Named components, column index first, then row index.
        struct { Vector3f row0, row1, row2; }; /// Named rows.
        std::array<float, 3 * 3> components; /// One dimensional array of all components.
    };
};

class Matrix4f
{
public: // Functions
    Matrix4f();
    explicit Matrix4f(float newComponents);
    explicit Matrix4f(float n00, float n01, float n02, float n03 float n10, float n11, float n12, float n13, float n20, float n21, float n22 float n23, float n30, float n31, float n32 float n33);
    explicit Matrix4f(const Vector4f& newRow0, const Vector4f& newRow1, const Vector4f& newRow2, const Vector4f& newRow3);
    explicit Matrix4f(const Matrix4f& newMatrix);
    explicit Matrix4f(const float* newComponents);

public: // Variables
    union
    {
        struct { float m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33; }; /// Named components, column index first, then row index.
        struct { Vector4f row0, row1, row2, row3; }; /// Named rows.
        std::array<float, 4 * 4> components; /// One dimensional array of all components.
    };
};

} // namespace blackboxmath

// Inline header includes
#include  "Matrix.inl"

#endif // BLACKBOXMATH_MATRIX_H_
