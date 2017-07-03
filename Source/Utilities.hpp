///
/// \file Utilities.hpp
/// \authors Brandon Young
/// \date 4/21/17
/// \brief
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#pragma once

// C++ includes
#include <algorithm>
#include <cmath>
#include <string>
#include <type_traits>

// Project includes
#include "LogSystem.hpp"

#define CLASS_NAME_TEMPLATE(ct) template<> \
                                constexpr char ClassName<ct>[] = #ct

namespace bbm
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wexit-time-destructors"
template<class T>
static constexpr char ClassName[] = "T";
CLASS_NAME_TEMPLATE(uint16_t);
CLASS_NAME_TEMPLATE(uint32_t);
CLASS_NAME_TEMPLATE(uint64_t);
CLASS_NAME_TEMPLATE(int16_t);
CLASS_NAME_TEMPLATE(int32_t);
CLASS_NAME_TEMPLATE(int64_t);
CLASS_NAME_TEMPLATE(float);
CLASS_NAME_TEMPLATE(double);
#pragma clang diagnostic pop

constexpr size_t sizeOfIntFloatCanHold = 24;
constexpr size_t sizeofIntDoubleCanHold = 53;
constexpr float maxIntFloatCanHold = 16777216.0f;  // 2 ^ 24
constexpr float minIntFloatCanHold = -16777216.0f;  // 2 ^ 24
constexpr double maxIntDoubleCanHold = 9007199254740990.0;  // 2 ^ 53

template<class T0, class T1>
inline T0 lerp(const T0 min, const T0 max, const T1 input);

template<class T>
inline const T& clamp(const T& min, const T& max, const T& input);

template<class To, class From>
inline To castTo(const From& from);

template<class To, class From>
inline To castCheck(const From& from);
}

// Inline header includes.
#include "Utilities.inl"
