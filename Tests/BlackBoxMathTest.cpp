#include "Source/BlackBoxMath.hpp"

// C++ includes
#include <string>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

class VectorTest : public testing::Test
{
protected:
    VectorTest(){}
    ~VectorTest(){}

    virtual void SetUp()
    {
    }

    virtual void TearDown()
    {
    }
};

TEST_F(VectorTest, TestConstructors)
{
    // Test default contructors
    {
        bbm::Vec2 vec2;
        bbm::Vec3 vec3;
        bbm::Vec4 vec4;
    }

    // Test constructor that takes component to copy to all components
    {
        bbm::Vec2 vec2(0.0f);
        bbm::Vec3 vec3(0.0f);
        bbm::Vec4 vec4(0.0f);
        ASSERT_FLOAT_EQ(vec2.x, 0.0f);
        ASSERT_FLOAT_EQ(vec2.y, 0.0f);
        ASSERT_FLOAT_EQ(vec3.x, 0.0f);
        ASSERT_FLOAT_EQ(vec3.y, 0.0f);
        ASSERT_FLOAT_EQ(vec3.z, 0.0f);
        ASSERT_FLOAT_EQ(vec4.x, 0.0f);
        ASSERT_FLOAT_EQ(vec4.y, 0.0f);
        ASSERT_FLOAT_EQ(vec4.z, 0.0f);
        ASSERT_FLOAT_EQ(vec4.w, 0.0f);
    }

    {
        bbm::Vec2 vec2(0.0f, 0.0f);
        bbm::Vec3 vec3(0.0f, 0.0f, 0.0f);
        bbm::Vec4 vec4(0.0f, 0.0f, 0.0f, 0.0f);
        ASSERT_FLOAT_EQ(vec2.x, 0.0f);
        ASSERT_FLOAT_EQ(vec2.y, 0.0f);
        ASSERT_FLOAT_EQ(vec3.x, 0.0f);
        ASSERT_FLOAT_EQ(vec3.y, 0.0f);
        ASSERT_FLOAT_EQ(vec3.z, 0.0f);
        ASSERT_FLOAT_EQ(vec4.x, 0.0f);
        ASSERT_FLOAT_EQ(vec4.y, 0.0f);
        ASSERT_FLOAT_EQ(vec4.z, 0.0f);
        ASSERT_FLOAT_EQ(vec4.w, 0.0f);
    }

    {
        bbm::Vec2 vec2(1.0f, 2.0f);
        bbm::Vec3 vec3(vec2, 3.0f);
        bbm::Vec4 vec4(vec3, 4.0f);
        ASSERT_FLOAT_EQ(vec2.x, 1.0f);
        ASSERT_FLOAT_EQ(vec2.y, 2.0f);
        ASSERT_FLOAT_EQ(vec3.x, 1.0f);
        ASSERT_FLOAT_EQ(vec3.y, 2.0f);
        ASSERT_FLOAT_EQ(vec3.z, 3.0f);
        ASSERT_FLOAT_EQ(vec4.x, 1.0f);
        ASSERT_FLOAT_EQ(vec4.y, 2.0f);
        ASSERT_FLOAT_EQ(vec4.z, 3.0f);
        ASSERT_FLOAT_EQ(vec4.w, 4.0f);
    }
}

TEST_F(VectorTest, TestZero)
{
    ASSERT_FLOAT_EQ(bbm::Vec2::Zero().x, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec2::Zero().y, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec3::Zero().x, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec3::Zero().y, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec3::Zero().z, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec4::Zero().x, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec4::Zero().y, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec4::Zero().z, 0.0f);
    ASSERT_FLOAT_EQ(bbm::Vec4::Zero().w, 0.0f);
}

TEST_F(VectorTest, TestMembers)
{
    bbm::Vec2 vec2(1.0f, 2.0f);
    bbm::Vec3 vec3(1.0f, 2.0f, 3.0f);
    bbm::Vec4 vec4(1.0f, 2.0f, 3.0f, 4.0f);
    ASSERT_FLOAT_EQ(vec2.x, vec2.r);
    ASSERT_FLOAT_EQ(vec2.y, vec2.g);
    ASSERT_FLOAT_EQ(vec3.x, vec3.r);
    ASSERT_FLOAT_EQ(vec3.y, vec3.g);
    ASSERT_FLOAT_EQ(vec3.z, vec3.b);
    ASSERT_FLOAT_EQ(vec4.x, vec4.r);
    ASSERT_FLOAT_EQ(vec4.y, vec4.g);
    ASSERT_FLOAT_EQ(vec4.z, vec4.b);
    ASSERT_FLOAT_EQ(vec4.w, vec4.a);
}
