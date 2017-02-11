///
/// \file Rectangle.hpp
/// \authors Brandon Young
/// \date 2017/02/02
/// \brief Axis aligned bounding box in 2D.
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#pragma once

// C++ includes
#include <array>

// Project includes
#include "Vector.hpp"

namespace blackboxmath
{

// class Rectangle2f
// {
// public: // Functions
//     // Constructors
//     Rectangle2f();
//     Rectangle2f(const Vector2f& min, const Vector2f& max);
//     Rectangle2f(const Vector2f& origin, const Vector2f& size, const Vector2f& anchorVector);
//     Rectangle2f(const Rectangle2f& rectangle);

//     // Getters
//     Vecto2f& origin();
//     const Vector2f& origin() const;
//     Vector2f& size();
//     const Vector2f& size() const;
//     Vector2f& anchorVector();
//     const Vector2f& anchorVector() const;
//     Vector2f min();
//     Vector2f center();
//     Vector2f max();

//     // Anchor functions
//     static Vector2f bottomLeftAnchor();
//     static Vector2f topLeftAnchor();
//     static Vector2f bottomAnchor();

// private: // Variables
//     Vector2f _origin = Vector2f::zero();
//     Vector2f _size = Vector2f::zero();
//     Vector2f _anchorVector = Vector2f::zero();
//     bool _hasAnchorVector = false;
// };

}

// Inline header includes
#include  "Rectangle.inl"
