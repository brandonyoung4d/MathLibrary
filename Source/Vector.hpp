///
/// \file Vector.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

#ifndef BLACKBOXMATH_VECTOR_H_
#define BLACKBOXMATH_VECTOR_H_

// C++ includes
#include <array>

namespace blackboxmath
{

/// \brief Base templated vector class. Can hold any number of components. For speed and data locality the class is templated so at compile time the exact size can be determined. Template specializations are used to help with common vector class cases such as vectors with 2, 3, and 4 components.
template <class T, int8_t N>
struct Vector
{
public: // Functions
    Vector();
    explicit Vector(T value);

public: // Variables
    std::array<T, N> components;
};

template <class T>
struct Vector<T, 2>
{
public: // Functions
    Vector();
    explicit Vector(T value);
    explicit Vector(T newX, T newY);

public: // Variables
    union
    {
        std::array<T, 2> components;
        struct { T x, y; };
    };
};

template <class T>
struct Vector<T, 3>
{
public: // Functions
    Vector();
    explicit Vector(T value);
    explicit Vector(T newX, T newY, T newZ);
    explicit Vector(const Vector<T, 2>& newXY, T newZ);

public: // Variables
    union
    {
        std::array<T, 3> components;
        struct { T x, y, z; };
        struct { T r, g, b; };
    };
};

template <class T>
struct Vector<T, 4>
{
public: // Functions
    Vector();
    explicit Vector(T value);
    explicit Vector(T newX, T newY, T newZ, T newW);

public: // Variables
    union
    {
        std::array<T, 4> components;
        struct { T x, y, z, w; };
        struct { T r, g, b, a; };
        // Swizzling
        Vector<T, 3> xyz;
        Vector<T, 3> rgb;
    };
};

} // namespace blackboxmath

// Inline header includes
#include  "Vector.inl"

#endif // BLACKBOXMATH_VECTOR_H_
