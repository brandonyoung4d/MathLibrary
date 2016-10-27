//
//  Vector.inl
//  BlackBoxMath
//
//  Created by Brandon Young on 10/24/16.
//  Copyright © 2016 BlackBoxCommittee. All rights reserved.
//

template <class T, int8_t N>
bbm::Vector<T, N>::Vector()
{
}

template <class T, int8_t N>
bbm::Vector<T, N>::Vector(T value)
{
    components.fill(value);
}

template <class T>
bbm::Vector<T, 2>::Vector()
{
}

template <class T>
bbm::Vector<T, 2>::Vector(T value) :
    x(value),
    y(value)
{
}

template <class T>
bbm::Vector<T, 2>::Vector(T newX, T newY) :
    x(newX),
    y(newY)
{
}

template <class T>
bbm::Vector<T, 3>::Vector()
{
}

template <class T>
bbm::Vector<T, 3>::Vector(T value) :
    x(value),
    y(value),
    z(value)
{
}

template <class T>
bbm::Vector<T, 3>::Vector(T newX, T newY, T newZ) :
    x(newX),
    y(newY),
    z(newZ)
{
}

template <class T>
bbm::Vector<T, 3>::Vector(const Vector<T, 2>& newXY, T newZ) :
    x(newXY.x),
    y(newXY.y),
    z(newZ)
{
}

template <class T>
bbm::Vector<T, 4>::Vector()
{
}

template <class T>
bbm::Vector<T, 4>::Vector(T value) :
    x(value),
    y(value),
    z(value),
    w(value)
{
}

template <class T>
bbm::Vector<T, 4>::Vector(T newX, T newY, T newZ, T newW) :
    x(newX),
    y(newY),
    z(newZ),
    w(newW)
{
}
