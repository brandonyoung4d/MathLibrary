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

    Matrix3f::Matrix3f(float newComponents)
        : _m00(newComponents)
        , _m01(newComponents)
        , _m02(newComponents)
        , _m10(newComponents)
        , _m11(newComponents)
        , _m12(newComponents)
        , _m20(newComponents)
        , _m21(newComponents)
        , _m22(newComponents)
    {
    }

    Matrix3f::Matrix3f(float n00, float n01, float n02, float n10, float n11, float n12, float n20, float n21, float n22)
        : _m00(n00)
        , _m01(n01)
        , _m02(n02)
        , _m10(n10)
        , _m11(n11)
        , _m12(n12)
        , _m20(n20)
        , _m21(n21)
        , _m22(n22)
    {
    }

    Matrix3f::Matrix3f(const Vector3f& newRow0, const Vector3f& newRow1, const Vector3f& newRow2)
        : _m00(newRow0.x())
        , _m01(newRow0.y())
        , _m02(newRow0.z())
        , _m10(newRow1.x())
        , _m11(newRow1.y())
        , _m12(newRow1.z())
        , _m20(newRow2.x())
        , _m21(newRow2.y())
        , _m22(newRow2.z())
    {
    }

    Matrix3f::Matrix3f(const Matrix3f& newMatrix)
        : _m00(newMatrix._m00)
        , _m01(newMatrix._m01)
        , _m02(newMatrix._m02)
        , _m10(newMatrix._m10)
        , _m11(newMatrix._m11)
        , _m12(newMatrix._m12)
        , _m20(newMatrix._m20)
        , _m21(newMatrix._m21)
        , _m22(newMatrix._m22)
    {
    }

    Matrix3f::Matrix3f(const float* const newComponents)
        : _m00(newComponents[0])
        , _m01(newComponents[1])
        , _m02(newComponents[2])
        , _m10(newComponents[3])
        , _m11(newComponents[4])
        , _m12(newComponents[5])
        , _m20(newComponents[6])
        , _m21(newComponents[7])
        , _m22(newComponents[8])
    {
    }

    Matrix4f::Matrix4f()
    {
    }

    Matrix4f::Matrix4f(float newComponents)
        : _m00(newComponents)
        , _m01(newComponents)
        , _m02(newComponents)
        , _m03(newComponents)
        , _m10(newComponents)
        , _m11(newComponents)
        , _m12(newComponents)
        , _m13(newComponents)
        , _m20(newComponents)
        , _m21(newComponents)
        , _m22(newComponents)
        , _m23(newComponents)
        , _m30(newComponents)
        , _m31(newComponents)
        , _m32(newComponents)
        , _m33(newComponents)
    {
    }

    Matrix4f::Matrix4f(float n00, float n01, float n02, float n03, float n10, float n11, float n12, float n13, float n20, float n21, float n22, float n23, float n30, float n31, float n32, float n33)
        : _m00(n00)
        , _m01(n01)
        , _m02(n02)
        , _m03(n03)
        , _m10(n10)
        , _m11(n11)
        , _m12(n12)
        , _m13(n13)
        , _m20(n20)
        , _m21(n21)
        , _m22(n22)
        , _m23(n23)
        , _m30(n30)
        , _m31(n31)
        , _m32(n32)
        , _m33(n33)
    {
    }

    Matrix4f::Matrix4f(const Vector4f& newRow0, const Vector4f& newRow1, const Vector4f& newRow2, const Vector4f& newRow3)
        : _m00(newRow0.x())
        , _m01(newRow0.y())
        , _m02(newRow0.z())
        , _m03(newRow0.w())
        , _m10(newRow1.x())
        , _m11(newRow1.y())
        , _m12(newRow1.z())
        , _m13(newRow1.w())
        , _m20(newRow2.x())
        , _m21(newRow2.y())
        , _m22(newRow2.z())
        , _m23(newRow2.w())
        , _m30(newRow3.x())
        , _m31(newRow3.y())
        , _m32(newRow3.z())
        , _m33(newRow3.w())
    {
    }

    Matrix4f::Matrix4f(const Matrix4f& newMatrix)
        : _m00(newMatrix._m00)
        , _m01(newMatrix._m01)
        , _m02(newMatrix._m02)
        , _m03(newMatrix._m03)
        , _m10(newMatrix._m10)
        , _m11(newMatrix._m11)
        , _m12(newMatrix._m12)
        , _m13(newMatrix._m13)
        , _m20(newMatrix._m20)
        , _m21(newMatrix._m21)
        , _m22(newMatrix._m22)
        , _m23(newMatrix._m23)
        , _m30(newMatrix._m30)
        , _m31(newMatrix._m31)
        , _m32(newMatrix._m32)
        , _m33(newMatrix._m33)
    {
    }

    Matrix4f::Matrix4f(const float* const newComponents)
        : _m00(newComponents[0])
        , _m01(newComponents[1])
        , _m02(newComponents[2])
        , _m03(newComponents[3])
        , _m10(newComponents[4])
        , _m11(newComponents[5])
        , _m12(newComponents[6])
        , _m13(newComponents[7])
        , _m20(newComponents[8])
        , _m21(newComponents[9])
        , _m22(newComponents[10])
        , _m23(newComponents[11])
        , _m30(newComponents[12])
        , _m31(newComponents[13])
        , _m32(newComponents[14])
        , _m33(newComponents[15])
    {
    }

} // namespace blackboxmath
