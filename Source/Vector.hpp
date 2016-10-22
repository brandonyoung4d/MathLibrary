#ifndef VECTOR_H
#define VECTOR_H

// C++ includes
#include <array>

namespace bbm // = BlackBoxMath
{
    // Generic vector
    template <class T, int8_t N>
    struct Vector
    {
    public: // Functions
        Vector()
        {
        }

        explicit Vector(T value)
        {
            components.fill(value);
        }

    public: // Variables
        std::array<T, N> components;
    };

    template <class T>
    struct Vector<T, 2>
    {
    public: // Functions
        Vector()
        {
        }

        explicit Vector(T value) : x(value), y(value)
        {
        }

        explicit Vector(T newX, T newY) : x(newX), y(newY)
        {
        }

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
        Vector()
        {
        }

        explicit Vector(T value) : x(value), y(value), z(value)
        {
        }

        explicit Vector(T newX, T newY, T newZ) : x(newX), y(newY), z(newZ)
        {
        }

        explicit Vector(const Vector<T, 2>& newXY, T newZ) : x(newXY.x), y(newXY.y), z(newZ)
        {
        }

    public: // Variables
        union
        {
            std::array<T, 3> components;
            struct
            {
                T x, y, z;
            };
            struct
            {
                T r, g, b;
            };
            Vector<T, 2> xy;
        };
    };

    template <class T>
    struct Vector<T, 4>
    {
    public: // Functions
        Vector()
        {
        }

        explicit Vector(T value) : x(value), y(value), z(value), w(value)
        {
        }

        explicit Vector(T newX, T newY, T newZ, T newW) : x(newX), y(newY), z(newZ), w(newW)
        {
        }

    public: // Variables
        union
        {
            std::array<T, 4> components;
            struct
            {
                T x, y, z, w;
            };
            struct
            {
                T r, g, b, a;
            };
            // Swizzling
            Vector<T, 2> xy;
            Vector<T, 2> rg;
            Vector<T, 3> xyz;
            Vector<T, 3> rgb;
        };
    };
}

#endif // VECTOR_H
