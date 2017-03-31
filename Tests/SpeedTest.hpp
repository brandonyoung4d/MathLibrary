#pragma once

// C++ includes
#include <limits.h>
#include <time.h>

// Library includes
#include "gtest/gtest.h"

class SpeedTest : public testing::Test
{
protected:
    virtual void SetUp()
    {
        _startTime = time(NULL);
    }

    virtual void TearDown()
    {
        const time_t endTime = time(NULL);
        EXPECT_LE(endTime - _startTime, _maximumTime) << "The test took to long.";
    }

    // The UTC time (in seconds) when the test starts
    time_t _startTime = 0;
    time_t _maximumTime = 0;
};
