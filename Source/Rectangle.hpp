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

namespace bbm
{
class Rectanglef
{
public:  // Functions
    // Constructors
    Rectanglef();
    Rectanglef(const Rectanglef& rectangle);
    static Rectanglef OriginAndSize(const Vector2f& origin, const Vector2f& size);
    static Rectanglef CenterAndSize(const Vector2f& center, const Vector2f& size);
    static Rectanglef MinAndMax(const Vector2f& min, const Vector2f& max);

    // Getters
    Vecto2f& origin();
    const Vector2f& origin() const;
    Vector2f& size();
    const Vector2f& size() const;
    Vector2f min();
    Vector2f center();
    Vector2f max();

private:  // Variables
    Vector2f _origin = Vector2f::zero();
    Vector2f _size = Vector2f::zero();
};
}  // namespace bbm

// Inline header includes
#include "Rectangle.inl"
