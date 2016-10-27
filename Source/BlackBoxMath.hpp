#ifndef BLACKBOXMATH_H
#define BLACKBOXMATH_H

#include "Vector.hpp"

// Usings for the Vector class to make it more compact to write code.
namespace blackboxmath
{

using Vec2 = Vector<float, 2>;
using Vec3 = Vector<float, 3>;
using Vec4 = Vector<float, 4>;
using Vec2f = Vector<float, 2>;
using Vec3f = Vector<float, 3>;
using Vec4f = Vector<float, 4>;
using Vec2d = Vector<double, 2>;
using Vec3d = Vector<double, 3>;
using Vec4d = Vector<double, 4>;

}

#endif // BLACKBOXMATH_H
