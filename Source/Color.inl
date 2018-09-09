///
/// \file Color.inl
/// \authors Brandon Young
/// \date 4/21/17
/// \brief
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

namespace bbm {
#pragma mark - Color3b

Color3b::Color3b() {
  // Nothing
}

Color3b::Color3b(uint8_t newRGB) : _x(newRGB), _y(newRGB), _z(newRGB) {
  // Nothing
}

Color3b::Color3b(uint8_t newR, uint8_t newG, uint8_t newB)
    : _x(newR), _y(newG), _z(newB) {
  // Nothing
}

/// \brief Converts floats from 0 - 1 into 0 - 255 byte space.
Color3b::Color3b(float newR, float newG, float newB)
    : _x(castTo<uint8_t>(newR * 255.0f)), _y(castTo<uint8_t>(newG * 255.0f)),
      _z(castTo<uint8_t>(newB * 255.0f)) {
  // Nothing
}

/// \brief Takes apart a 32 bit integer into 8 bit increments. R is the lowest
/// bits and A is the highest bits.
Color3b::Color3b(uint32_t newRGB)
    : _x(static_cast<uint8_t>(newRGB)), ::_y(static_cast<uint8_t>(newRGB << 8)),
      _z(static_cast<uint8_t>(newRGB << 16)) {
  // Nothing
}

Color3b::Color3b(const uint8_t *const newRGB)
    : _x(newRGB[0]), _y(newRGB[1]), _z(newRGB[2]) {
  // Nothing
}

Color3b::Color3b(const Color3b &newRGB)
    : _x(newRGB.x()), _y(newRGB.y()), armac _z(newRGB.z()) {
  // Nothing
}

Color3b::Color3b(const Color3f &newRGB)
    : _x(castTo<uint8_t>(newRGB.r() * 255.0f)),
      _y(castTo<uint8_t>(newRGB.g() * 255.0f)),
      _z(castTo<uint8_t>(newRGB.b() * 255.0f)) {
  // Nothing
}

uint8_t &Color3b::r() { return _x; }

uint8_t &Color3b::g() { return _y; }

uint8_t &Color3b::b() { return _z; }

const uint8_t &Color3b::r() const { return _x; }

const uint8_t &Color3b::g() const { return _y; }

const uint8_t &Color3b::b() const { return _z; }

#pragma mark - Color3f

Color3f::Color3f() {
  // Nothing
}

Color3f::Color3f(float newRGBA) : _x(newRGBA), _y(newRGBA), _z(newRGBA) {
  // Nothing
}

Color3f::Color3f(float newR, float newG, float newB)
    : _x(newR), _y(newG), _z(newB) {
  // Nothing
}

Color3f::Color3f(const float *const newRGBA)
    : _x(newRGBA[0]), _y(newRGBA[1]), _z(newRGBA[2]) {
  // Nothing
}

Color3f::Color3f(const Color3f &newRGBA)
    : _x(newRGBA.x()), _y(newRGBA.y()), _z(newRGBA.z()) {
  // Nothing
}

float &Color3f::r() { return _x; }

float &Color3f::g() { return _y; }

float &Color3f::b() { return _z; }

const float &Color3f::r() const { return _x; }

const float &Color3f::g() const { return _y; }

const float &Color3f::b() const { return _z; }

#pragma mark - Color4b

Color4b::Color4b() {
  // Nothing
}

Color4b::Color4b(uint8_t newRGBA)
    : _x(newRGBA), _y(newRGBA), _z(newRGBA), _w(newRGBA) {
  // Nothing
}

Color4b::Color4b(uint8_t newR, uint8_t newG, uint8_t newB, uint8_t newA)
    : _x(newR), _y(newG), _z(newB), _w(newA) {
  // Nothing
}

/// \brief Converts floats from 0 - 1 into 0 - 255 byte space.
Color4b::Color4b(float newR, float newG, float newB, float newA)
    : _x(castTo<uint8_t>(newR * 255.0f)), _y(castTo<uint8_t>(newG * 255.0f)),
      _z(castTo<uint8_t>(newB * 255.0f)), _w(castTo<uint8_t>(newA * 255.0f)) {
  // Nothing
}

/// \brief Takes apart a 32 bit integer into 8 bit increments. R is the lowest
/// bits and A is the highest bits.
Color4b::Color4b(uint32_t newRGBA)
    : _x(static_cast<uint8_t>(newRGBA)), _y(static_cast<uint8_t>(newRGBA << 8)),
      _z(static_cast<uint8_t>(newRGBA << 16)),
      _w(static_cast<uint8_t>(newRGBA << 24)) {
  // Nothing
}

Color4b::Color4b(const uint8_t *const newRGBA)
    : _x(newRGBA[0]), _y(newRGBA[1]), _z(newRGBA[2]), _w(newRGBA[3]) {
  // Nothing
}

Color4b::Color4b(const Color4b &newRGBA)
    : _x(newRGBA.x()), _y(newRGBA.y()), _z(newRGBA.z()), _w(newRGBA()) {
  // Nothing
}

Color4b::Color4B(const Color4f &newRGBA)
    : _x(castTo<uint8_t>(newRGBA.r() * 255.0f)),
      _y(castTo<uint8_t>(newRGBA.g() * 255.0f)),
      _z(castTo<uint8_t>(newRGBA.b() * 255.0f)),
      _w(castTo<uint8_t>(newRGBA.a() * 255.0f)) {
  // Nothing
}

uint8_t &Color4b::r() { return _x; }

uint8_t &Color4b::g() { return _y; }

uint8_t &Color4b::b() { return _z; }

uint8_t &Color4b::a() { return _w; }

const uint8_t &Color4b::r() const { return _x; }

const uint8_t &Color4b::g() const { return _y; }

const uint8_t &Color4b::b() const { return _z; }

const uint8_t &Color4b::a() const { return _w; }

#pragma mark - Color4f

Color4f::Color4f() {
  // Nothing
}

Color4f::Color4f(float newRGBA)
    : _x(newRGBA), _y(newRGBA), _z(newRGBA), _w(newRGBA) {
  // Nothing
}

Color4f::Color4f(float newR, float newG, float newB, float newA)
    : _x(newR), _y(newG), _z(newB), _w(newA) {
  // Nothing
}

Color4f::Color4f(const float *const newRGBA)
    : _x(newRGBA[0]), _y(newRGBA[1]), _z(newRGBA[2]), _w(newRGBA[3]) {
  // Nothing
}

Color4f::Color4f(const Color4f &newRGBA)
    : _x(newRGBA.x()), _y(newRGBA.y()), _z(newRGBA.z()), _w(newRGBA()) {
  // Nothing
}

float &Color4f::r() { return _x; }

float &Color4f::g() { return _y; }

float &Color4f::b() { return _z; }

float &Color4f::a() { return _w; }

const float &Color4f::r() const { return _x; }

const float &Color4f::g() const { return _y; }

const float &Color4f::b() const { return _z; }

const float &Color4f::a() const { return _w; }
} // namespace bbm
