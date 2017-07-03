//
//  UtilitiesTests.m
//  BlackBoxMath
//
//  Created by Brandon Young on 2017/06/22.
//  Copyright © 2017 BlackBoxCommittee. All rights reserved.
//

#import <XCTest/XCTest.h>

#include "Utilities.hpp"

@interface UtilitiesTests : XCTestCase

@end

@implementation UtilitiesTests

- (void)testCastTo {
    constexpr float floatHighest = std::numeric_limits<float>::max();
    constexpr float floatHigh = 1.0f;
    constexpr float floatZero = 0.0f;
    constexpr float floatLow = -1.0f;
    constexpr float floatLowest = std::numeric_limits<float>::lowest();
    constexpr double doubleHighest = std::numeric_limits<double>::max();
    constexpr double doubleHigh = 1.0;
    constexpr double doubleZero = 0.0;
    constexpr double doubleLow = -1.0;
    constexpr double doubleLowest = std::numeric_limits<double>::lowest();
    constexpr int8_t int8Highest = std::numeric_limits<int8_t>::max();
    constexpr int8_t int8High = 1;
    constexpr int8_t int8Zero = 0;
    constexpr int8_t int8Low = -1;
    constexpr int8_t int8Lowest = std::numeric_limits<int8_t>::lowest();
    constexpr int16_t int16Highest = std::numeric_limits<int16_t>::max();
    constexpr int16_t int16High = 1;
    constexpr int16_t int16Zero = 0;
    constexpr int16_t int16Low = -1;
    constexpr int16_t int16Lowest = std::numeric_limits<int16_t>::lowest();
    constexpr int32_t int32Highest = std::numeric_limits<int32_t>::max();
    constexpr int32_t int32High = 1;
    constexpr int32_t int32Zero = 0;
    constexpr int32_t int32Low = -1;
    constexpr int32_t int32Lowest = std::numeric_limits<int32_t>::lowest();
    constexpr int64_t int64Highest = std::numeric_limits<int64_t>::max();
    constexpr int64_t int64High = 1;
    constexpr int64_t int64Zero = 0;
    constexpr int64_t int64Low = -1;
    constexpr int64_t int64Lowest = std::numeric_limits<int64_t>::lowest();
    constexpr uint8_t uint8Highest = std::numeric_limits<uint8_t>::max();
    constexpr uint8_t uint8High = 1;
    constexpr uint8_t uint8Zero = std::numeric_limits<uint8_t>::min();
    constexpr uint16_t uint16Highest = std::numeric_limits<uint16_t>::max();
    constexpr uint16_t uint16High = 1;
    constexpr uint16_t uint16Zero = std::numeric_limits<uint16_t>::min();
    constexpr uint32_t uint32Highest = std::numeric_limits<uint32_t>::max();
    constexpr uint32_t uint32High = 1;
    constexpr uint32_t uint32Zero = std::numeric_limits<uint32_t>::lowest();
    constexpr uint64_t uint64Highest = std::numeric_limits<uint64_t>::max();
    constexpr uint64_t uint64High = 1;
    constexpr uint64_t uint64Zero = std::numeric_limits<uint64_t>::lowest();

#pragma mark - Float casting

    // double to float.
    XCTAssert(bbm::castTo<float>(doubleHighest) == floatHighest);
    XCTAssert(bbm::castTo<float>(doubleHigh) == floatHigh);
    XCTAssert(bbm::castTo<float>(doubleLow) == floatLow);
    XCTAssert(bbm::castTo<float>(doubleLowest) == floatLowest);

    // int64 to float.
    XCTAssert(bbm::castTo<float>(int64Highest) == bbm::maxIntFloatCanHold);
    XCTAssert(bbm::castTo<float>(int64High) == floatHigh);
    XCTAssert(bbm::castTo<float>(int64Low) == floatLow);
    XCTAssert(bbm::castTo<float>(int64Lowest) == bbm::minIntFloatCanHold);

    // uint32 to float.
    XCTAssert(bbm::castTo<float>(uint32Highest) == bbm::maxIntFloatCanHold);
    XCTAssert(bbm::castTo<float>(uint32High) == floatHigh);
    XCTAssert(bbm::castTo<float>(uint32Zero) == floatZero);

    // uint64 to float.
    XCTAssert(bbm::castTo<float>(uint64Highest) == bbm::maxIntFloatCanHold);
    XCTAssert(bbm::castTo<float>(uint64High) == floatHigh);
    XCTAssert(bbm::castTo<float>(uint64Zero) == floatZero);

#pragma mark - Double casting

    // uint64 to double.
    XCTAssert(bbm::castTo<double>(uint64Highest) == bbm::maxIntDoubleCanHold);
    XCTAssert(bbm::castTo<double>(uint64High) == doubleHigh);
    XCTAssert(bbm::castTo<double>(uint64Zero) == doubleZero);

#pragma mark - int8 casting

    // float to int8
    XCTAssert(bbm::castTo<int8_t>(floatHighest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(floatHigh) == int8High);
    XCTAssert(bbm::castTo<int8_t>(floatLow) == int8Low);
    XCTAssert(bbm::castTo<int8_t>(floatLowest) == int8Lowest);

    // double to int8
    XCTAssert(bbm::castTo<int8_t>(doubleHighest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(doubleHigh) == int8High);
    XCTAssert(bbm::castTo<int8_t>(doubleLow) == int8Low);
    XCTAssert(bbm::castTo<int8_t>(doubleLowest) == int8Lowest);

    // int16 to int8
    XCTAssert(bbm::castTo<int8_t>(int16Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(int16High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(int16Low) == int8Low);
    XCTAssert(bbm::castTo<int8_t>(int16Lowest) == int8Lowest);

    // int32 to int8
    XCTAssert(bbm::castTo<int8_t>(int32Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(int32High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(int32Low) == int8Low);
    XCTAssert(bbm::castTo<int8_t>(int32Lowest) == int8Lowest);

    // int64 to int8
    XCTAssert(bbm::castTo<int8_t>(int64Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(int64High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(int64Low) == int8Low);
    XCTAssert(bbm::castTo<int8_t>(int64Lowest) == int8Lowest);

    // uint8 to int8
    XCTAssert(bbm::castTo<int8_t>(uint8Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(uint8High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(uint8Zero) == int8Zero);

    // uint16 to int8
    XCTAssert(bbm::castTo<int8_t>(uint16Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(uint16High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(uint16Zero) == int8Zero);

    // uint32 to int8
    XCTAssert(bbm::castTo<int8_t>(uint32Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(uint32High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(uint32Zero) == int8Zero);

    // uint64 to int8
    XCTAssert(bbm::castTo<int8_t>(uint64Highest) == int8Highest);
    XCTAssert(bbm::castTo<int8_t>(uint64High) == int8High);
    XCTAssert(bbm::castTo<int8_t>(uint64Zero) == int8Zero);

#pragma mark - int16 casting

    // float to int16
    XCTAssert(bbm::castTo<int16_t>(floatHighest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(floatHigh) == int16High);
    XCTAssert(bbm::castTo<int16_t>(floatLow) == int16Low);
    XCTAssert(bbm::castTo<int16_t>(floatLowest) == int16Lowest);

    // double to int16
    XCTAssert(bbm::castTo<int16_t>(doubleHighest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(doubleHigh) == int16High);
    XCTAssert(bbm::castTo<int16_t>(doubleLow) == int16Low);
    XCTAssert(bbm::castTo<int16_t>(doubleLowest) == int16Lowest);

    // int32 to int16
    XCTAssert(bbm::castTo<int16_t>(int32Highest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(int32High) == int16High);
    XCTAssert(bbm::castTo<int16_t>(int32Low) == int16Low);
    XCTAssert(bbm::castTo<int16_t>(int32Lowest) == int16Lowest);

    // int64 to int16
    XCTAssert(bbm::castTo<int16_t>(int64Highest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(int64High) == int16High);
    XCTAssert(bbm::castTo<int16_t>(int64Low) == int16Low);
    XCTAssert(bbm::castTo<int16_t>(int64Lowest) == int16Lowest);

    // uint16 to int16
    XCTAssert(bbm::castTo<int16_t>(uint16Highest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(uint16High) == int16High);
    XCTAssert(bbm::castTo<int16_t>(uint16Zero) == int16Zero);

    // uint32 to int16
    XCTAssert(bbm::castTo<int16_t>(uint32Highest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(uint32High) == int16High);
    XCTAssert(bbm::castTo<int16_t>(uint32Zero) == int16Zero);

    // uint64 to int16
    XCTAssert(bbm::castTo<int16_t>(uint64Highest) == int16Highest);
    XCTAssert(bbm::castTo<int16_t>(uint64High) == int16High);
    XCTAssert(bbm::castTo<int16_t>(uint64Zero) == int16Zero);

#pragma mark - int32 casting

    // float to int32
    XCTAssert(bbm::castTo<int32_t>(floatHighest) == int32Highest);
    XCTAssert(bbm::castTo<int32_t>(floatHigh) == int32High);
    XCTAssert(bbm::castTo<int32_t>(floatLow) == int32Low);
    XCTAssert(bbm::castTo<int32_t>(floatLowest) == int32Lowest);

    // double to int32
    XCTAssert(bbm::castTo<int32_t>(doubleHighest) == int32Highest);
    XCTAssert(bbm::castTo<int32_t>(doubleHigh) == int32High);
    XCTAssert(bbm::castTo<int32_t>(doubleLow) == int32Low);
    XCTAssert(bbm::castTo<int32_t>(doubleLowest) == int32Lowest);

    // int64 to int32
    XCTAssert(bbm::castTo<int32_t>(int64Highest) == int32Highest);
    XCTAssert(bbm::castTo<int32_t>(int64High) == int32High);
    XCTAssert(bbm::castTo<int32_t>(int64Low) == int32Low);
    XCTAssert(bbm::castTo<int32_t>(int64Lowest) == int32Lowest);

    // uint32 to int32
    XCTAssert(bbm::castTo<int32_t>(uint32Highest) == int32Highest);
    XCTAssert(bbm::castTo<int32_t>(uint32High) == int32High);
    XCTAssert(bbm::castTo<int32_t>(uint32Zero) == int32Zero);

    // uint64 to int32
    XCTAssert(bbm::castTo<int32_t>(uint64Highest) == int32Highest);
    XCTAssert(bbm::castTo<int32_t>(uint64High) == int32High);
    XCTAssert(bbm::castTo<int32_t>(uint64Zero) == int32Zero);

#pragma mark - int64 casting

    // double to int64
    XCTAssert(bbm::castTo<int64_t>(doubleHighest) == int64Highest);
    XCTAssert(bbm::castTo<int64_t>(doubleHigh) == int64High);
    XCTAssert(bbm::castTo<int64_t>(doubleLow) == int64Low);
    XCTAssert(bbm::castTo<int64_t>(doubleLowest) == int64Lowest);

    // uint64 to int64
    XCTAssert(bbm::castTo<int64_t>(uint64Highest) == int64Highest);
    XCTAssert(bbm::castTo<int64_t>(uint64High) == int64High);
    XCTAssert(bbm::castTo<int64_t>(uint64Zero) == int64Zero);

#pragma mark - uint8 casting

    // float to uint8
    XCTAssert(bbm::castTo<uint8_t>(floatHighest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(floatHigh) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(floatLow) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(floatLowest) == uint8Zero);

    // double to uint8
    XCTAssert(bbm::castTo<uint8_t>(doubleHighest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(doubleHigh) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(doubleLow) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(doubleLowest) == uint8Zero);

    // int8 to uint8
    XCTAssert(bbm::castTo<uint8_t>(int8Highest) == int8Highest);
    XCTAssert(bbm::castTo<uint8_t>(int8High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(int8Low) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(int8Lowest) == uint8Zero);

    // int16 to uint8
    XCTAssert(bbm::castTo<uint8_t>(int16Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(int16High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(int16Low) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(int16Lowest) == uint8Zero);

    // int32 to uint8
    XCTAssert(bbm::castTo<uint8_t>(int32Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(int32High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(int32Low) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(int32Lowest) == uint8Zero);

    // int64 to uint8
    XCTAssert(bbm::castTo<uint8_t>(int64Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(int64High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(int64Low) == uint8Zero);
    XCTAssert(bbm::castTo<uint8_t>(int64Lowest) == uint8Zero);

    // uint16 to uint8
    XCTAssert(bbm::castTo<uint8_t>(uint16Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(uint16High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(uint16Zero) == uint8Zero);

    // uint32 to uint8
    XCTAssert(bbm::castTo<uint8_t>(uint32Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(uint32High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(uint32Zero) == uint8Zero);

    // uint64 to uint8
    XCTAssert(bbm::castTo<uint8_t>(uint64Highest) == uint8Highest);
    XCTAssert(bbm::castTo<uint8_t>(uint64High) == uint8High);
    XCTAssert(bbm::castTo<uint8_t>(uint64Zero) == uint8Zero);

#pragma mark - uint16 casting

    // float to uint16
    XCTAssert(bbm::castTo<uint16_t>(floatHighest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(floatHigh) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(floatLow) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(floatLowest) == uint16Zero);

    // double to uint16
    XCTAssert(bbm::castTo<uint16_t>(doubleHighest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(doubleHigh) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(doubleLow) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(doubleLowest) == uint16Zero);

    // int8 to uint16
    XCTAssert(bbm::castTo<uint16_t>(int8Highest) == int8Highest);
    XCTAssert(bbm::castTo<uint16_t>(int8High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(int8Low) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(int8Lowest) == uint16Zero);

    // int16 to uint16
    XCTAssert(bbm::castTo<uint16_t>(int16Highest) == int16Highest);
    XCTAssert(bbm::castTo<uint16_t>(int16High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(int16Low) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(int16Lowest) == uint16Zero);

    // int32 to uint16
    XCTAssert(bbm::castTo<uint16_t>(int32Highest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(int32High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(int32Low) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(int32Lowest) == uint16Zero);

    // int64 to uint16
    XCTAssert(bbm::castTo<uint16_t>(int64Highest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(int64High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(int64Low) == uint16Zero);
    XCTAssert(bbm::castTo<uint16_t>(int64Lowest) == uint16Zero);

    // uint32 to uint16
    XCTAssert(bbm::castTo<uint16_t>(uint32Highest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(uint32High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(uint32Zero) == uint16Zero);

    // uint64 to uint16
    XCTAssert(bbm::castTo<uint16_t>(uint64Highest) == uint16Highest);
    XCTAssert(bbm::castTo<uint16_t>(uint64High) == uint16High);
    XCTAssert(bbm::castTo<uint16_t>(uint64Zero) == uint16Zero);

#pragma mark - uint32 casting

    // float to uint32
    XCTAssert(bbm::castTo<uint32_t>(floatHighest) == uint32Highest);
    XCTAssert(bbm::castTo<uint32_t>(floatHigh) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(floatLow) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(floatLowest) == uint32Zero);

    // double to uint32
    XCTAssert(bbm::castTo<uint32_t>(doubleHighest) == uint32Highest);
    XCTAssert(bbm::castTo<uint32_t>(doubleHigh) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(doubleLow) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(doubleLowest) == uint32Zero);

    // int8 to uint32
    XCTAssert(bbm::castTo<uint32_t>(int8Highest) == int8Highest);
    XCTAssert(bbm::castTo<uint32_t>(int8High) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(int8Low) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(int8Lowest) == uint32Zero);

    // int16 to uint32
    XCTAssert(bbm::castTo<uint32_t>(int16Highest) == int16Highest);
    XCTAssert(bbm::castTo<uint32_t>(int16High) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(int16Low) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(int16Lowest) == uint32Zero);

    // int32 to uint32
    XCTAssert(bbm::castTo<uint32_t>(int32Highest) == int32Highest);
    XCTAssert(bbm::castTo<uint32_t>(int32High) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(int32Low) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(int32Lowest) == uint32Zero);

    // int64 to uint32
    XCTAssert(bbm::castTo<uint32_t>(int64Highest) == uint32Highest);
    XCTAssert(bbm::castTo<uint32_t>(int64High) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(int64Low) == uint32Zero);
    XCTAssert(bbm::castTo<uint32_t>(int64Lowest) == uint32Zero);

    // uint64 to uint32
    XCTAssert(bbm::castTo<uint32_t>(uint64Highest) == uint32Highest);
    XCTAssert(bbm::castTo<uint32_t>(uint64High) == uint32High);
    XCTAssert(bbm::castTo<uint32_t>(uint64Zero) == uint32Zero);

#pragma mark - uint64 casting

    // float to uint64
    XCTAssert(bbm::castTo<uint64_t>(floatHighest) == uint64Highest);
    XCTAssert(bbm::castTo<uint64_t>(floatHigh) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(floatLow) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(floatLowest) == uint64Zero);

    // double to uint64
    XCTAssert(bbm::castTo<uint64_t>(doubleHighest) == uint64Highest);
    XCTAssert(bbm::castTo<uint64_t>(doubleHigh) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(doubleLow) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(doubleLowest) == uint64Zero);

    // int8 to uint64
    XCTAssert(bbm::castTo<uint64_t>(int8Highest) == int8Highest);
    XCTAssert(bbm::castTo<uint64_t>(int8High) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(int8Low) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(int8Lowest) == uint64Zero);

    // int16 to uint64
    XCTAssert(bbm::castTo<uint64_t>(int16Highest) == int16Highest);
    XCTAssert(bbm::castTo<uint64_t>(int16High) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(int16Low) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(int16Lowest) == uint64Zero);

    // int32 to uint64
    XCTAssert(bbm::castTo<uint64_t>(int32Highest) == int32Highest);
    XCTAssert(bbm::castTo<uint64_t>(int32High) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(int32Low) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(int32Lowest) == uint64Zero);

    // int64 to uint64
    XCTAssert(bbm::castTo<uint64_t>(int64Highest) == int64Highest);
    XCTAssert(bbm::castTo<uint64_t>(int64High) == uint64High);
    XCTAssert(bbm::castTo<uint64_t>(int64Low) == uint64Zero);
    XCTAssert(bbm::castTo<uint64_t>(int64Lowest) == uint64Zero);
}

@end
