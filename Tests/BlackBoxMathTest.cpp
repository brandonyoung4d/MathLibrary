// C++ includes
#include <limits>
#include <random>
#include <string>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

// Project includes
#include "Source/BlackBoxMath.hpp"

class VectorTest : public testing::Test
{
protected:
    VectorTest()
    {
    }

    ~VectorTest()
    {
    }

    virtual void SetUp()
    {
        const float lowestFloat = std::numeric_limits<float>::lowest();
        const float maxFloat = std::numeric_limits<float>::max();
        const uint8_t lowestUint8 = std::numeric_limits<uint8_t>::lowest();
        const uint8_t maxUint8 = std::numeric_limits<uint8_t>::max();

        std::random_device rd;
        std::default_random_engine dre(rd());
        std::uniform_real_distribution<float> urd(lowestFloat, maxFloat);
        std::uniform_int_distribution<uint8_t> uid(lowestUint8, maxUint8);

        _randomFloatX = urd(dre);
        _randomFloatY = urd(dre);
        _randomFloatZ = urd(dre);
        _randomFloatW = urd(dre);
        _randomUint8X = uid(dre);
        _randomUint8Y = uid(dre);
        _randomUint8Z = uid(dre);
        _randomUint8W = uid(dre);
    }

    virtual void TearDown()
    {
    }

    float _randomFloatX;
    float _randomFloatY;
    float _randomFloatZ;
    float _randomFloatW;
    uint8_t _randomUint8X;
    uint8_t _randomUint8Y;
    uint8_t _randomUint8Z;
    uint8_t _randomUint8W;
};

TEST_F(VectorTest, TestVector2Constructors)
{
    // Test default contructor
    {
        bbm::Vec2 vec2;
    }

    // Test one parameter constructor
    {
        bbm::Vec2 vec2(_randomFloatX);
        ASSERT_FLOAT_EQ(vec2.x(), _randomFloatX);
        ASSERT_FLOAT_EQ(vec2.y(), _randomFloatX);
    }

    // Test two parameter constructor
    {
        bbm::Vec2 vec2(_randomFloatX, _randomFloatY);
        ASSERT_FLOAT_EQ(vec2.x(), _randomFloatX);
        ASSERT_FLOAT_EQ(vec2.y(), _randomFloatY);
    }

    // Test pointer constructor
    {
        const float newXY[] = {_randomFloatX, _randomFloatY};
        bbm::Vec2 vec2(newXY);
        ASSERT_FLOAT_EQ(vec2.x(), _randomFloatX);
        ASSERT_FLOAT_EQ(vec2.y(), _randomFloatY);
    }

    // Test copy constructor
    {
        const bbm::Vec2 newXY(_randomFloatX, _randomFloatY);
        bbm::Vec2 vec2(newXY);
        ASSERT_FLOAT_EQ(vec2.x(), _randomFloatX);
        ASSERT_FLOAT_EQ(vec2.y(), _randomFloatX);
    }
}

TEST_F(VectorTest, TestVector2Getters)
{
    bbm::Vec2 vec2(0.0f, 0.0f);
    const bbm::Vec2 constVec2(_randomFloatX, _randomFloatY);
    const bbm::Vec2 zero = bbm::Vec2::zero();
    vec2.x() = _randomFloatX;
    vec2.y() = _randomFloatY;

    ASSERT_FLOAT_EQ(vec2.x(), _randomFloatX);
    ASSERT_FLOAT_EQ(vec2.y(), _randomFloatY);
    ASSERT_FLOAT_EQ(constVec2.x(), _randomFloatX);
    ASSERT_FLOAT_EQ(constVec2.y(), _randomFloatY);
    ASSERT_FLOAT_EQ(vec2.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(vec2.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(constVec2.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(constVec2.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(zero.x(), 0.0f);
    ASSERT_FLOAT_EQ(zero.y(), 0.0f);
}

// TEST_F(VectorTest, TestZero)
// {
//     ASSERT_FLOAT_EQ(bbm::Vec2::Zero().x, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec2::Zero().y, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec3::Zero().x, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec3::Zero().y, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec3::Zero().z, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec4::Zero().x, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec4::Zero().y, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec4::Zero().z, 0.0f);
//     ASSERT_FLOAT_EQ(bbm::Vec4::Zero().w, 0.0f);
// }
