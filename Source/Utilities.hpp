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
#include <string>
#include <type_traits>

// Project includes
#include "Logging.hpp"

#define CLASS_NAME_TEMPLATE(ct) \
    template<>                  \
    constexpr char ClassName<ct>[] = #ct

namespace blackboxmath
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

    template<typename T0, typename T1>
    inline T0 Lerp(const T0 min, const T0 max, const T1 delta);

    template<typename T>
    inline const T& Clamp(const T& min, const T& max, const T& value);

    template<class To, class From>
    inline To Cast(const From& from);
}

namespace blackboxmath
{
    template<typename T0, typename T1>
    inline T0 Lerp(const T0 min, const T0 max, const T1 delta)
    {
        return min + (max - min) * delta;
    }

    template<typename T>
    inline const T& Clamp(const T& min, const T& max, const T& value)
    {
        return std::max<T>(min, std::min<T>(value, max));
    }

    template<class To, class From>
    inline To Cast(const From& from)
    {
        static_assert(std::is_integral<From>::value || std::is_floating_point<From>::value, "From is an unsupported class.");
        static_assert(std::is_integral<To>::value || std::is_floating_point<To>::value, "To is an unsupported class.");

        if(std::is_integral<From>::value && std::is_integral<To>::value)
        {
            static_assert(!(std::is_same<From, To>::value), "No need to convert the same class.");
            static_assert(!(std::is_same<From, uint16_t>::value && std::is_same<To, uint32_t>::value), "No need to convert from uint16 to uint32.");
            static_assert(!(std::is_same<From, uint16_t>::value && std::is_same<To, uint64_t>::value), "No need to convert from uint16 to uint64.");
            static_assert(!(std::is_same<From, uint16_t>::value && std::is_same<To, int32_t>::value), "No need to convert from uint16 to int32.");
            static_assert(!(std::is_same<From, uint16_t>::value && std::is_same<To, int64_t>::value), "No need to convert from uint16 to int64.");
            static_assert(!(std::is_same<From, uint32_t>::value && std::is_same<To, uint64_t>::value), "No need to convert from uint32 to uint64.");
            static_assert(!(std::is_same<From, uint32_t>::value && std::is_same<To, int64_t>::value), "No need to convert from uint32 to int64.");
            static_assert(!(std::is_same<From, int16_t>::value && std::is_same<To, int32_t>::value), "No need to convert from int16 to int32.");
            static_assert(!(std::is_same<From, int16_t>::value && std::is_same<To, int64_t>::value), "No need to convert from int16 to int64.");
            static_assert(!(std::is_same<From, int32_t>::value && std::is_same<To, int64_t>::value), "No need to convert from int32 to int64.");
            if(from > static_cast<From>(std::numeric_limits<To>::max()))
            {
                bbmLog(Debug, Utilities, ClassName<From> << from << " value is higher than " << ClassName<To> << std::numeric_limits<To>::max() << " can hold.");
            }
            if(std::is_signed<From>::value && from < static_cast<From>(std::numeric_limits<To>::lowest()))
            {
                bbmLog(Debug, Utilities, ClassName<From> << from << " value is lower than " << ClassName<To> << std::numeric_limits<To>::lowest() << " can hold.");
            }
            return static_cast<To>(from);
        }
        else
        {
            return static_cast<To>(from);
        }
    }
} // namespace blackboxmath
