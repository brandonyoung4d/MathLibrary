///
/// \file Utilities.inl
/// \authors Brandon Young
/// \date 2017/6/13
/// \brief Basic math helper classes and functions that don't fall into a broad category.
/// \details NA
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

namespace bbm
{
template<class T0, class T1>
inline T0 lerp(const T0 min, const T0 max, const T1 input)
{
    return min + (max - min) * input;
}

template<class T>
inline const T& clamp(const T& min, const T& max, const T& input)
{
    return std::max<T>(min, std::min<T>(input, max));
}

template<class To, class From>
inline To castTo(const From& from)
{
    static_assert(not std::is_same<From, To>::value, "No need to convert the same class.");
    static_assert(std::is_arithmetic<From>::value, "From is an unsupported class.");
    static_assert(std::is_arithmetic<To>::value, "To is an unsupported class.");

    constexpr bool fromIsFloatingPoint = std::is_floating_point<From>::value;
    constexpr bool fromIsSigned = std::is_signed<From>::value;
    constexpr bool fromIsUnsigned = std::is_unsigned<From>::value;
    constexpr bool fromIsFloat = std::is_same<From, float>::value;
    constexpr bool fromIsDouble = std::is_same<From, double>::value;
    constexpr bool fromIsUint8 = std::is_same<From, uint8_t>::value;
    constexpr bool fromIsUint16 = std::is_same<From, uint16_t>::value;
    constexpr bool fromIsUint32 = std::is_same<From, uint32_t>::value;
    constexpr bool fromIsUint64 = std::is_same<From, uint64_t>::value;
    constexpr bool fromIsInt8 = std::is_same<From, int8_t>::value;
    constexpr bool fromIsInt16 = std::is_same<From, int16_t>::value;
    constexpr bool fromIsInt32 = std::is_same<From, int32_t>::value;
    constexpr bool fromIsInt64 = std::is_same<From, int64_t>::value;
    constexpr bool toIsSigned = std::is_signed<To>::value;
    constexpr bool toIsUnsigned = std::is_unsigned<To>::value;
    constexpr bool toIsIntegral = std::is_integral<To>::value;
    constexpr bool toIsFloat = std::is_same<To, float>::value;
    constexpr bool toIsDouble = std::is_same<To, double>::value;
    constexpr bool toIsUint16 = std::is_same<To, uint16_t>::value;
    constexpr bool toIsUint32 = std::is_same<To, uint32_t>::value;
    constexpr bool toIsUint64 = std::is_same<To, uint64_t>::value;
    constexpr bool toIsInt16 = std::is_same<To, int16_t>::value;
    constexpr bool toIsInt32 = std::is_same<To, int32_t>::value;
    constexpr bool toIsInt64 = std::is_same<To, int64_t>::value;

    constexpr bool validToFloat = fromIsDouble || fromIsInt64 || fromIsUint32 || fromIsUint64;
    static_assert(not toIsFloat || (toIsFloat && validToFloat), "No need to convert to float.");

    static_assert(not toIsDouble || (toIsDouble && fromIsUint64), "No need to convert to double.");

    constexpr bool invalidToInt16 = fromIsInt8 || fromIsInt16 || fromIsUint8;
    static_assert(not toIsInt16 || (toIsInt16 && not invalidToInt16), "No need to convert to int16.");

    constexpr bool invalidToInt32 = fromIsInt8 || fromIsInt16 || fromIsInt32 || fromIsUint8 || fromIsUint16;
    static_assert(not toIsInt32 || (toIsInt32 && not invalidToInt32), "No need to convert to int32.");

    constexpr bool invalidToInt64 = fromIsFloat || fromIsInt8 || fromIsInt16 || fromIsInt32 || fromIsInt64 || fromIsUint8 || fromIsUint16 || fromIsUint32;
    static_assert(not toIsInt64 || (toIsInt64 && not invalidToInt64), "No need to convert to int64.");

    constexpr bool validToUint16 = fromIsFloatingPoint || fromIsSigned || fromIsUint32 || fromIsUint64;
    static_assert(not toIsUint16 || (toIsUint16 && validToUint16), "No Need to convert to uint16.");

    constexpr bool validToUint32 = fromIsFloatingPoint || fromIsSigned || fromIsUint64;
    static_assert(not toIsUint32 || (toIsUint32 && validToUint32), "No Need to convert to uint32.");

    constexpr bool validToUint64 = fromIsFloatingPoint || fromIsSigned;
    static_assert(not toIsUint64 || (toIsUint64 && validToUint64), "No Need to convert to uint64.");

    if(toIsFloat)
    {
        if(fromIsDouble)
        {
            if(from > std::numeric_limits<float>::max())
            {
                return std::numeric_limits<float>::max();
            }
            if(from < std::numeric_limits<float>::lowest())
            {
                return std::numeric_limits<float>::lowest();
            }
        }
        else if(fromIsInt64)
        {
            if(from > bbm::maxIntFloatCanHold)
            {
                return static_cast<To>(bbm::maxIntFloatCanHold);
            }
            if(from < bbm::minIntFloatCanHold)
            {
                return static_cast<To>(bbm::minIntFloatCanHold);
            }
        }
        else if(fromIsUint32 || fromIsUint64)
        {
            if(from > bbm::maxIntFloatCanHold)
            {
                return static_cast<To>(bbm::maxIntFloatCanHold);
            }
        }
    }
    else if(toIsDouble)
    {
        if(fromIsUint64)
        {
            if(from > bbm::maxIntDoubleCanHold)
            {
                return static_cast<To>(bbm::maxIntDoubleCanHold);
            }
        }
    }
    else if(toIsIntegral && toIsSigned)
    {
        if(from > static_cast<From>(std::numeric_limits<To>::max()))
        {
            return std::numeric_limits<To>::max();
        }
        if(fromIsSigned && from < static_cast<From>(std::numeric_limits<To>::lowest()))
        {
            return std::numeric_limits<To>::lowest();
        }
    }
    else if(toIsIntegral && toIsUnsigned)
    {
        constexpr size_t toSize = sizeof(To) * 8;
        size_t fromSize;
        if(fromIsFloat)
        {
            fromSize = bbm::sizeOfIntFloatCanHold * 8;
        }
        else if(fromIsDouble)
        {
            fromSize = bbm::sizeofIntDoubleCanHold * 8;
        }
        else if(fromIsSigned)
        {
            fromSize = sizeof(From) * 8 / 2;
        }
        else if(fromIsUnsigned)
        {
            fromSize = sizeof(From) * 8;
        }

        if((fromSize > toSize) && from > static_cast<From>(std::numeric_limits<To>::max()))
        {
            return std::numeric_limits<To>::max();
        }
        if(std::is_signed<From>::value && from < 0)
        {
            return 0;
        }
    }

    return static_cast<To>(from);
}

}  // namespace bbm
