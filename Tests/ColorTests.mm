//
//  ColorTests.m
//  Tests
//
//  Created by Brandon Young on 2017/07/20.
//  Copyright © 2017 BlackBoxCommittee. All rights reserved.
//

#import <XCTest/XCTest.h>

#include "Color.hpp"

@interface ColorTests : XCTestCase

@end

@implementation ColorTests

- (void)testConstructors {
//    Color3b();
//    explicit Color3b(uint8_t newRGB);
//    explicit Color3b(uint8_t newR, uint8_t newG, uint8_t newB);
//    explicit Color3b(float newR, float newG, float newB);
//    explicit Color3b(uint32_t newRGB);
//    explicit Color3b(const uint8_t* const newRGB);
//    explicit Color3b(const Color3b& newRGB);
//    explicit Color3b(const Color3f& newRGB);
    const uint8_t one = 1;

    {
        const bbm::Color3b color(one);
        XCTAssertEqual(color, bbm::Color3b::white());
    }
}

@end
