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

Matrix3f::Matrix3f()
{
}

Matrix3f::Matrix3f(float newComponents) :
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

Matrix3f::Matrix3f(float n00, float n01, float n02, float n10, float n11, float n12, float n20, float n21, float n22) :
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

Matrix3f::Matrix3f(const Vector3f& newRow0, const Vector3f& newRow1, const Vector3f& newRow2) :
    row0(newRow0),
    row1(newRow1),
    row2(newRow2)
{
}

Matrix3f::Matrix3f(const Matrix3f& newMatrix) :
    m00(newMatrix.m00),
    m01(newMatrix.m01),
    m02(newMatrix.m02),
    m10(newMatrix.m10),
    m11(newMatrix.m11),
    m12(newMatrix.m12),
    m20(newMatrix.m20),
    m21(newMatrix.m21),
    m22(newMatrix.m22)
{
}

Matrix4f::Matrix4f()
{
}

Matrix4f::Matrix4f(float newComponents) :
    m00(newComponents),
    m01(newComponents),
    m02(newComponents),
    m03(newComponents),
    m10(newComponents),
    m11(newComponents),
    m12(newComponents),
    m13(newComponents),
    m20(newComponents),
    m21(newComponents),
    m22(newComponents)
    m23(newComponents),
    m30(newComponents),
    m31(newComponents),
    m32(newComponents),
    m33(newComponents)
{
}

Matrix4f::Matrix4f(float n00, float n01, float n02, float n03 float n10, float n11, float n12, float n13, float n20, float n21, float n22 float n23, float n30, float n31, float n32 float n33) :
    m00(n00),
    m01(n01),
    m02(n02),
    m03(n03),
    m10(n10),
    m11(n11),
    m12(n12),
    m13(n13),
    m20(n20),
    m21(n21),
    m22(n22),
    m23(n23),
    m30(n30),
    m31(n31),
    m32(n32),
    m33(n33)
{
}

Matrix4f::Matrix4f(const Vector4f& newRow0, const Vector4f& newRow1, const Vector4f& newRow2, const Vector4f& newRow3) :
    row0(newRow0),
    row1(newRow1),
    row2(newRow2),
    row3(newRow3)
{
}

Matrix4f::Matrix4f(const Matrix4f& newMatrix) :
    m00(newMatrix.m00),
    m01(newMatrix.m01),
    m02(newMatrix.m02),
    m03(newMatrix.m03),
    m10(newMatrix.m10),
    m11(newMatrix.m11),
    m12(newMatrix.m12),
    m13(newMatrix.m13),
    m20(newMatrix.m20),
    m21(newMatrix.m21),
    m22(newMatrix.m22),
    m23(newMatrix.m23),
    m30(newMatrix.m30),
    m31(newMatrix.m31),
    m32(newMatrix.m32),
    m33(newMatrix.m33)
{
}

} // namespace blackboxmath
