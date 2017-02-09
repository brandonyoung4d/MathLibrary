///
/// \file Rectangle.inl
/// \authors Brandon Young
/// \date 2017/02/02
/// \brief Contains all templated functions.
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

namespace blackboxmath
{

Rectangle::Rectangle()
{
    // Nothing
}

Rectangle::Rectangle(const Vector2f& origin, const Vector2f& size)
: _origin(origin)
, _size(size)
{

}

Rectangle::Rectangle(const Vector2f& origin, const Vector2f& size, const Vector2f& anchorVector)
: _origin(origin)
, _size(size)
, _anchorVector(anchorVector)
{

}

Rectangle Rectangle::createWithMinAndMax(const Vector2f& min, const Vector2f& max)
{

}

Vector2f& Rectangle::origin()
{
    return _origin;
}

const Vector2f& Rectangle::origin() const
{
    return _origin
}

Vector2f& Rectangle::size()
{
    return _size;
}

const Vector2f& Rectangle::size() const
{
    return _size;
}

}
