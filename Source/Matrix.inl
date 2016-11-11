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

// const Matrix<T, Columns, Rows>& Matrix<T, Columns, Rows>::Identity()
// {
//     static Matrix<T, Columns, Rows> identityMatrix;
//     static bool initialized = false;
//     if(not initialized)
//     {
//         for(uint8_t column = 0; column < Columns; ++column)
//         {
//             for(uint8_t row = 0; row < Rows; ++row)
//             {
//                 if(column == row)
//                 {
//                     identityMatrix.index[column][row] = T(1);
//                 }
//                 else
//                 {
//                     identityMatrix.index[column][row] = T(0);
//                 }
//             }
//         }
//         initialized = true;
//     }
//     return identityMatrix;
// }

Matrix3f::Matrix3f()
{
}

Matrix3f::Matrix3f(float& newComponents) :
    m00(newComponents),
    m01(newComponents),
    m02(newComponents),
    m10(newComponents),
    m11(newComponents),
    m12(newComponents),
    m20(newComponents),
    m21(newComponents),
    m22(newComponents)
{
}

Matrix3f::Matrix3f(float& n00, float& n01, float& n02, float& n10, float& n11, float& n12, float& n20, float& n21, const float& n22) :
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

Matrix3f::Matrix3f(const Matrix3f& newMat) :
    m00(newMat.m00),
    m01(newMat.m00),
    m02(newMat.m00),
    m10(newMat.m00),
    m11(newMat.m00),
    m12(newMat.m00),
    m20(newMat.m00),
    m21(newMat.m00),
    m22(newMat.m00)
{
}

Matrix4f::Matrix4f()
{
}

} // namespace blackboxmath
