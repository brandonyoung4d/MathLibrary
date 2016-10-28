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
    // Use an anonymous union to give the matrix components different names, but still use the same amount of memory.
    union
    {
        std::array<T, Columns * Rows> components; /// One dimensional array of all components.
        /// \todo The name index doesnt seem to explain what this variable is meant for.
        std::array<std::array<T, Rows>, Columns> index; /// Two dimensional array of all components. Indexed by columns first, then rows.
    };
};

template <class T>
struct Matrix<T, 3, 3>
{
public: // Functions
    Matrix();
    Matrix(const T& value);
    Matrix(const T& m00, const T& m01, const T& m02, const T& m10, const T& m11, const T& m12, const T& m20, const T& m21, const T& m22);

public: // Variables
    union
    {
        std::array<T, 3 * 3> components; /// One dimensional array of all components.
        std::array<std::array<T, 3>, 3> index; /// Two dimensional array of all components. Indexed by columns first, then rows.
        struct { T m00, m01, m02, m10, m11, m12, m20, m21, m22; }; /// Named components, column index first, then row index.
        struct { Vector3t<T> row0, row1, row2; }; /// Named rows.
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
        std::array<T, 4 * 4> components; /// One dimensional array of all components.
        std::array<std::array<T, 4>, 4> index; /// Two dimensional array of all components. Indexed by columns first, then rows.
        struct { T m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33; }; /// Named components, column index first, then row index.
        struct { Vector4t<T> row0, row1, row2, row3; }; /// Named rows.
    };
};

// Default using abbreviations
using Matrix3x3 = Matrix<float, 3, 3>;
using Matrix4x4 = Matrix<float, 4, 4>;

// Templated using abbreviations
template <class T>
using Matrix3x3t = Matrix<T, 3, 3>;
template <class T>
using Matrix4x4t = Matrix<T, 4, 4>;

// Float using abbreviations
using Matrix3x3f = Matrix<float, 3, 3>;
using Matrix4x4f = Matrix<float, 4, 4>;

// Double using abbreviations
using Matrix3x3d = Matrix<double, 3, 3>;
using Matrix4x4d = Matrix<double, 4, 4>;

} // namespace blackboxmath

// Inline header includes
#include  "Matrix.inl"

#endif // BLACKBOXMATH_MATRIX_H_
