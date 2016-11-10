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
template <class T, uint8_t N>
struct Vector
{
public: // Functions
    Vector();
    explicit Vector(T value);

    // Static
    static const Vector& Zero();

public: // Variables
    std::array<T, N> components;
};

/// \brief Specialization for 2 component vectors.
template <class T>
struct Vector<T, 2>
{
public: // Functions
    Vector();
    explicit Vector(T value);
    explicit Vector(T newX, T newY);

    // Static
    static const Vector& Zero();

public: // Variables
    union
    {
        std::array<T, 2> components;
        struct { T x, y; };
        struct { T r, g; };
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

    // Static
    static const Vector& Zero();

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
    explicit Vector(const Vector<T, 3>& newXYZ, T newW);

    // Static
    static const Vector& Zero();

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

// Default using abbreviations
using Vector2 = Vector<float, 2>;
using Vector3 = Vector<float, 3>;
using Vector4 = Vector<float, 4>;

// Templated using abbreviations
template <class T>
using Vector2t = Vector<T, 2>;
template <class T>
using Vector3t = Vector<T, 3>;
template <class T>
using Vector4t = Vector<T, 4>;

// Float using abbreviations
using Vector2f = Vector<float, 2>;
using Vector3f = Vector<float, 3>;
using Vector4f = Vector<float, 4>;

// Double using abbreviations
using Vector2d = Vector<double, 2>;
using Vector3d = Vector<double, 3>;
using Vector4d = Vector<double, 4>;

} // namespace blackboxmath

// Inline header includes
#include  "Vector.inl"

#endif // BLACKBOXMATH_VECTOR_H_
