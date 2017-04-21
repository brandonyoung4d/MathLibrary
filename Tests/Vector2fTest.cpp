#include "Vector2fTest.hpp"

void Vector2fTest::TestVector(const bbm::Vector2f& lhs, float rhsX, float rhsY)
{
    ASSERT_FLOAT_EQ(lhs.x(), rhsX);
    ASSERT_FLOAT_EQ(lhs.y(), rhsY);
}

void Vector2fTest::TestVector(const bbm::Vector2f& lhs, const bbm::Vector2f& rhs)
{
    ASSERT_FLOAT_EQ(lhs.x(), rhs.x());
    ASSERT_FLOAT_EQ(lhs.y(), rhs.y());
}

void Vector2fTest::SetUp()
{
    const float lowestFloat = std::numeric_limits<float>::lowest();
    const float maxFloat = std::numeric_limits<float>::max();

    std::random_device rd;
    std::default_random_engine dre(rd());
    std::uniform_real_distribution<float> urd(lowestFloat, maxFloat);

    _randomFloatX = urd(dre);
    _randomFloatY = urd(dre);

    SpeedTest::SetUp();
}

TEST_F(Vector2fTest, TestConstructors)
{
    // Test default contructor
    {
        bbm::Vec2 vec2;
    }

    // Test one parameter constructor
    {
        bbm::Vec2 vec2(_randomFloatX);
        TestVector(vec2, _randomFloatX, _randomFloatX);
    }

    // Test two parameter constructor
    {
        bbm::Vec2 vec2(_randomFloatX, _randomFloatY);
        TestVector(vec2, _randomFloatX, _randomFloatY);
    }

    // Test pointer constructor
    {
        const float newXY[] = {_randomFloatX, _randomFloatY};
        bbm::Vec2 vec2(newXY);
        TestVector(vec2, _randomFloatX, _randomFloatY);
    }

    // Test copy constructor
    {
        const bbm::Vec2 newXY(_randomFloatX, _randomFloatY);
        bbm::Vec2 vec2(newXY);
        TestVector(vec2, _randomFloatX, _randomFloatX);
    }
}

TEST_F(Vector2fTest, TestGetters)
{
    bbm::Vec2 vec2(0.0f, 0.0f);
    const bbm::Vec2 constVec2(_randomFloatX, _randomFloatY);
    const bbm::Vec2 zero = bbm::Vec2::zero();
    vec2.x() = _randomFloatX;
    vec2.y() = _randomFloatY;

    TestVector(vec2, _randomFloatX, _randomFloatY);
    TestVector(constVec2, _randomFloatX, _randomFloatY);
    ASSERT_FLOAT_EQ(vec2.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(vec2.data()[1], _randomFloatY);
    ASSERT_FLOAT_EQ(constVec2.data()[0], _randomFloatX);
    ASSERT_FLOAT_EQ(constVec2.data()[1], _randomFloatY);
    TestVector(zero, 0.0f, 0.0f);
}

TEST_F(Vector2fTest, TestStaticFunctions)
{
    TestVector(bbm::Vec2::zero(), 0.0f, 0.0f);
}
