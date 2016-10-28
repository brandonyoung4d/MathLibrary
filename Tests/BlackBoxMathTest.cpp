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
    bbm::Vec2 vec2;
    bbm::Vec3 vec3;
    bbm::Vec4 vec4;
    bbm::Mat3 mat3;
    bbm::Mat4 mat4;

    // ASSERT_THAT(list.size(),     testing::Eq(taskCount));
    // EXPECT_THAT(list.getTask(0), testing::Eq(tasks[0]));
    // EXPECT_THAT(list.getTask(1), testing::Eq(tasks[1]));
    // EXPECT_THAT(list.getTask(2), testing::Eq(tasks[2]));
}
