///
/// \file Color.inl
/// \authors Brandon Young
/// \date 4/21/17
/// \brief
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#include "Utilities.hpp"

namespace blackboxmath
{
    Color4b::Color4b()
    {
        // Nothing
    }

    Color4b::Color4b(uint8_t newXYZW)
        : _x(newXYZW)
        , _y(newXYZW)
        , _z(newXYZW)
        , _w(newXYZW)
    {
        // Nothing
    }

    Color4b::Color4b(uint8_t newX, uint8_t newY, uint8_t newZ, uint8_t newW)
        : _x(newX)
        , _y(newY)
        , _z(newZ)
        , _w(newW)
    {
        // Nothing
    }

    Color4b::Color4b(float newX, float newY, float newZ, float newW)
        : _x(Cast<uint8_t>(newX * 255.0f))
        , _y(Cast<uint8_t>(newX * 255.0f))
        , _z(Cast<uint8_t>(newX * 255.0f))
        , _w(Cast<uint8_t>(newX * 255.0f))
    {
        // Nothing
    }

    Color4b::Color4b(uint32_t newXYZW)
        : _x(static_cast<uint8_t>(newXYZW))
        , _y(static_cast<uint8_t>(newXYZW << 8))
        , _z(static_cast<uint8_t>(newXYZW << 16))
        , _w(static_cast<uint8_t>(newXYZW << 24))
    {
        // Nothing
    }

    Color4b::Color4b(const uint8_t* const newXYZW)
        : _x(newXYZW[0])
        , _y(newXYZW[1])
        , _z(newXYZW[2])
        , _w(newXYZW[3])
    {
        // Nothing
    }

    Color4b::Color4b(const Color4b& newXYZW)
        : _x(newXYZW.x())
        , _y(newXYZW.y())
        , _z(newXYZW.z())
        , _w(newXYZW.w())
    {
        // Nothing
    }

    uint8_t& Color4b::x()
    {
        return _x;
    }

    uint8_t Color4b::x() const
    {
        return _x;
    }

    uint8_t& Color4b::y()
    {
        return _y;
    }

    uint8_t Color4b::y() const
    {
        return _y;
    }

    uint8_t& Color4b::z()
    {
        return _z;
    }

    uint8_t Color4b::z() const
    {
        return _z;
    }

    uint8_t& Color4b::w()
    {
        return _w;
    }

    uint8_t Color4b::w() const
    {
        return _w;
    }

    uint8_t* Color4b::data()
    {
        return reinterpret_cast<uint8_t*>(this);
    }

    const uint8_t* Color4b::data() const
    {
        return reinterpret_cast<const uint8_t*>(this);
    }

    Color4b Color4b::zero()
    {
        return Color4b(0.0f, 0.0f, 0.0f, 0.0f);
    }
}
