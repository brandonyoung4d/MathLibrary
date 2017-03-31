// C++ includes
#include <limits>
#include <random>

// Library includes
#include <gmock/gmock.h>
#include <gtest/gtest.h>

// Project includes
#include "Source/BlackBoxMath.hpp"
#include "SpeedTest.hpp"

class Vector2fTest : public SpeedTest
{
public:
    static void TestVector(const bbm::Vector2f& lhs, float rhsX, float rhsY);
    static void TestVector(const bbm::Vector2f& lhs, const bbm::Vector2f& rhs);

protected:
    virtual void SetUp();

    float _randomFloatX;
    float _randomFloatY;
};
