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

namespace blackboxmath
{

/// \brief Base templated matrix class. Can hold any number of components. For speed and data locality the class is templated so at compile time the exact size can be determined. Template specializations are used to help with common matrix class cases such as matrix3x3 and matrix4x4.
template <class T, int8_t Columns, int8_t Rows>
struct Matrix
{
public: // Functions
    Matrix();
    explicit Matrix(const T& value);

    // Static
    static const Matrix& Zero();
    static const Matrix& Identity();

public: // Variables
    union
    {
        std::array<T, Columns * Rows> components;
        std::array<std::array<T, Columns>, Rows> index;
    };
};

template <class T>
struct Matrix<T, 3, 3>
{
public: // Functions
    Matrix();

public: // Variables
    union
    {
        std::array<T, 3 * 3> components;
        std::array<std::array<T, 3>, 3> index;
        struct { T m00, m10, m20, m01, m11, m21, m02, m12, m22; };
    };
};

template <class T>
struct Matrix<T, 4, 4>
{
public: // Functions
    Matrix();

public: // Variables
    union
    {
        std::array<T, 4 * 4> components;
        std::array<std::array<T, 4>, 4> index;
        struct { T m00, m10, m20, m30, m01, m11, m21, m31, m02, m12, m22, m32, m03, m13, m23, m33; };
    };
};

template <class T>
using Matrix3x3t = Matrix<T, 3, 3>;
template <class T>
using Matrix4x4t = Matrix<T, 4, 4>;

using Matrix3x3 = Matrix<float, 3, 3>;
using Matrix4x4 = Matrix<float, 4, 4>;
using Matrix3x3f = Matrix<float, 3, 3>;
using Matrix4x4f = Matrix<float, 4, 4>;
using Matrix3x3d = Matrix<double, 3, 3>;
using Matrix4x4d = Matrix<double, 4, 4>;

} // namespace blackboxmath

// Inline header includes
#include  "Matrix.inl"

#endif // BLACKBOXMATH_MATRIX_H_
