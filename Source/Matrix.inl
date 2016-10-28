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
Matrix4x4t<T>::Matrix()
{
}

} // namespace blackboxmath
