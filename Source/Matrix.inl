///
/// \file Matrix.inl
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Contains all templated functions.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

namespace blackboxmath
{

template <class T, int8_t Columns, int8_t Rows>
Matrix<T, Columns, Rows>::Matrix()
{
}

template <class T, int8_t Columns, int8_t Rows>
Matrix<T, Columns, Rows>::Matrix(const T& value)
{
    components.fill(value);
}

template <class T, int8_t Columns, int8_t Rows>
const Matrix<T, Columns, Rows>& Matrix<T, Columns, Rows>::Zero()
{
    static const Matrix<T, Columns, Rows> zeroMatrix(0);
    return zeroMatrix;
}

template <class T, int8_t Columns, int8_t Rows>
const Matrix<T, Columns, Rows>& Matrix<T, Columns, Rows>::Identity()
{
    static Matrix<T, Columns, Rows> identityMatrix;
    static bool initialized = false;
    if(not initialized)
    {
        for(uint8_t column = 0; column < Columns; ++column)
        {
            for(uint8_t row = 0; row < Rows; ++row)
            {
                if(column == row)
                {
                    identityMatrix.index[column][row] = T(1);
                }
                else
                {
                    identityMatrix.index[column][row] = T(0);
                }
            }
        }
        initialized = true;
    }
    return identityMatrix;
}

template <class T>
Matrix3x3t<T>::Matrix()
{
}

template <class T>
Matrix3x3t<T>::Matrix(const T& value) :
    m00(value),
    m01(value),
    m02(value),
    m10(value),
    m11(value),
    m12(value),
    m20(value),
    m21(value),
    m22(value)
{
}

template <class T>
Matrix3x3t<T>::Matrix(const T& m00, const T& m01, const T& m02, const T& m10, const T& m11, const T& m12, const T& m20, const T& m21, const T& m22) :
    m00(n00),
    m01(n01),
    m02(n02),
    m10(n10),
    m11(n11),
    m12(n12),
    m20(n20),
    m21(n21),
    m22(n22)
{
}

template <class T>
Matrix4x4t<T>::Matrix()
{
}

} // namespace blackboxmath
