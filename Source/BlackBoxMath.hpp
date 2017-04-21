///
/// \file BlackBoxMath.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Used a single include header for the entire library.
/// \details
///
/// \copyright Copyright © 2016 BlackBoxCommittee. All rights reserved.
///

#pragma once

// Project includes
#include "Matrix.hpp"
#include "Vector.hpp"

// Usings for the Vector and Matrix class to make it more compact to write code.
namespace blackboxmath
{
    using Vec2 = Vector2f;
    using Vec3 = Vector3f;
    using Vec4 = Vector4f;
    using Vec4b = Vector4b;

    using Mat3 = Matrix3f;
    using Mat4 = Matrix4f;

    //using Rect2 = Rectangle2f;
    //using Rect3 = Rectangle3f;
}

namespace bbm = blackboxmath;
