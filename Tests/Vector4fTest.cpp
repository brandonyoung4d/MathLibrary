// C++ includes
#include <limits>
#include <random>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

// Project includes
#include "Source/BlackBoxMath.hpp"

class Vector4fTest : public testing::Test
{
protected:
    Vector4fTest()
    {
    }

    ~Vector4fTest()
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
        _randomFloatW = urd(dre);
    }

    virtual void TearDown()
    {
    }

    float _randomFloatX;
    float _randomFloatY;
    float _randomFloatZ;
    float _randomFloatW;
};

void testVec4(const bbm::Vec4& vec4, float x, float y, float z, float w)
{
    ASSERT_FLOAT_EQ(vec4.x(), x);
    ASSERT_FLOAT_EQ(vec4.y(), y);
    ASSERT_FLOAT_EQ(vec4.z(), z);
    ASSERT_FLOAT_EQ(vec4.w(), w);
}

TEST_F(Vector4fTest, TestConstructors)
{
    // Test default contructor
    {
        bbm::Vec4 vec4;
    }

    // Test one parameter constructor
    {
        bbm::Vec4 vec4(_randomFloatX);
        testVec4(vec4, _randomFloatX, _randomFloatX, _randomFloatX, _randomFloatX);
    }

    // Test two parameter constructor
    {
        bbm::Vec4 vec4(_randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
        testVec4(vec4, _randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    }

    // Test pointer constructor
    {
        const float newXYZW[] = {_randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW};
        bbm::Vec4 vec4(newXYZW);
        testVec4(vec4, _randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    }

    // Test copy constructor
    {
        const bbm::Vec4 newXYZW(_randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
        bbm::Vec4 vec4(newXYZW);
        testVec4(vec4, _randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    }
}

TEST_F(Vector4fTest, TestGetters)
{
    bbm::Vec4 vec4(0.0f, 0.0f, 0.0f, 0.0f);
    const bbm::Vec4 constVec4(_randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    const bbm::Vec4 zero = bbm::Vec4::zero();
    vec4.x() = _randomFloatX;
    vec4.y() = _randomFloatY;
    vec4.z() = _randomFloatZ;
    vec4.w() = _randomFloatW;

    testVec4(vec4, _randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    testVec4(constVec4, _randomFloatX, _randomFloatY, _randomFloatZ, _randomFloatW);
    ASSERT_FLOAT_EQ(vec4.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(vec4.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(vec4.data()[2], _randomFloatZ);
    ASSERT_FLOAT_EQ(vec4.data()[3], _randomFloatW);
    ASSERT_FLOAT_EQ(constVec4.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(constVec4.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(constVec4.data()[2], _randomFloatZ);
    ASSERT_FLOAT_EQ(constVec4.data()[3], _randomFloatW);
    testVec4(zero, 0.0f, 0.0f, 0.0f, 0.0f);
}

TEST_F(Vector4fTest, TestStaticFunctions)
{
    testVec4(bbm::Vec4::zero(), 0.0f, 0.0f, 0.0f, 0.0f);
}
