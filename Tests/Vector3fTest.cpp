// C++ includes
#include <limits>
#include <random>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

// Project includes
#include "Source/BlackBoxMath.hpp"

class Vector3fTest : public testing::Test
{
protected:
    Vector3fTest()
    {
    }

    ~Vector3fTest()
    {
    }

    virtual void SetUp()
    {
        const float lowestFloat = std::numeric_limits<float>::lowest();
        const float maxFloat = std::numeric_limits<float>::max();

        std::random_device rd;
        std::default_random_engine dre(rd());
        std::uniform_real_distribution<float> urd(lowestFloat, maxFloat);

        _randomFloatX = urd(dre);
        _randomFloatY = urd(dre);
        _randomFloatZ = urd(dre);
    }

    virtual void TearDown()
    {
    }

    float _randomFloatX;
    float _randomFloatY;
    float _randomFloatZ;
};

void testVec3(const bbm::Vec3& vec3, float x, float y, float z)
{
    ASSERT_FLOAT_EQ(vec3.x(), x);
    ASSERT_FLOAT_EQ(vec3.y(), y);
    ASSERT_FLOAT_EQ(vec3.z(), z);
}

TEST_F(Vector3fTest, TestConstructors)
{
    // Test default contructor
    {
        bbm::Vec3 vec3;
    }

    // Test one parameter constructor
    {
        bbm::Vec3 vec3(_randomFloatX);
        testVec3(vec3, _randomFloatX, _randomFloatX, _randomFloatX);
    }

    // Test two parameter constructor
    {
        bbm::Vec3 vec3(_randomFloatX, _randomFloatY, _randomFloatZ);
        testVec3(vec3, _randomFloatX, _randomFloatY, _randomFloatZ);
    }

    // Test pointer constructor
    {
        const float newXYZ[] = {_randomFloatX, _randomFloatY, _randomFloatZ};
        bbm::Vec3 vec3(newXYZ);
        testVec3(vec3, _randomFloatX, _randomFloatY, _randomFloatZ);
    }

    // Test copy constructor
    {
        const bbm::Vec3 newXYZ(_randomFloatX, _randomFloatY, _randomFloatZ);
        bbm::Vec3 vec3(newXYZ);
        testVec3(vec3, _randomFloatX, _randomFloatY, _randomFloatZ);
    }
}

TEST_F(Vector3fTest, TestGetters)
{
    bbm::Vec3 vec3(0.0f, 0.0f, 0.0f);
    const bbm::Vec3 constVec3(_randomFloatX, _randomFloatY, _randomFloatZ);
    const bbm::Vec3 zero = bbm::Vec3::zero();
    vec3.x() = _randomFloatX;
    vec3.y() = _randomFloatY;
    vec3.z() = _randomFloatZ;

    testVec3(vec3, _randomFloatX, _randomFloatY, _randomFloatZ);
    testVec3(constVec3, _randomFloatX, _randomFloatY, _randomFloatZ);
    ASSERT_FLOAT_EQ(vec3.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(vec3.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(vec3.data()[2], _randomFloatZ);
    ASSERT_FLOAT_EQ(constVec3.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(constVec3.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(constVec3.data()[2], _randomFloatZ);
    testVec3(zero, 0.0f, 0.0f, 0.0f);
}

TEST_F(Vector3fTest, TestStaticFunctions)
{
    testVec3(bbm::Vec3::zero(), 0.0f, 0.0f, 0.0f);
}
