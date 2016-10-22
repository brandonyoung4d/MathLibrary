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
    bbm::Vector<float, 2> vec2;
    bbm::Vector<float, 3> vec3;
    bbm::Vector<float, 4> vec4;

    // ASSERT_THAT(list.size(),     testing::Eq(taskCount));
    // EXPECT_THAT(list.getTask(0), testing::Eq(tasks[0]));
    // EXPECT_THAT(list.getTask(1), testing::Eq(tasks[1]));
    // EXPECT_THAT(list.getTask(2), testing::Eq(tasks[2]));
}
