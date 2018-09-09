///
/// \file Vector.hpp
/// \authors Brandon Young
/// \date 10/24/16
/// \brief Holds all templated vector classes.
/// \details
///
/// \copyright Copyright © 2017 BlackBoxCommittee. All rights reserved.
///

#pragma once

// Project includes
#include "Utilities.hpp"

namespace bbm {
class Vector2f {
public: // Functions
  Vector2f();
  Vector2f(const Vector2f &newXY);
  explicit Vector2f(float newXY);
  explicit Vector2f(float newX, float newY);
  explicit Vector2f(const float *const newXY);

  // Getters
  float &x();
  float &y();
  float *data();

  // Const getters.
  float x() const;
  float y() const;
  const float *data() const;

  // Static getters
  static Vector2f zero();

  // Operators
  Vector2f &operator=(const Vector2f &newXY);

protected: // Variables
  float _x, _y;
};

class Vector3b {
public: // Functions
  Vector3b();
  Vector3b(const Vector3b &newXYZ);
  explicit Vector3b(uint8_t newXYZW);
  explicit Vector3b(uint8_t newX, uint8_t newY, uint8_t newZ);
  explicit Vector3b(uint32_t newXYZ);
  explicit Vector3b(const uint8_t *const newXYZ);

  // Getters.
  uint8_t &x();
  uint8_t &y();
  uint8_t &z();
  uint8_t *data();

  // Const getters.
  uint8_t x() const;
  uint8_t y() const;
  uint8_t z() const;
  const uint8_t *data() const;

  // Static getters
  static Vector3b zero();

protected: // Variables
  uint8_t _x, _y, _z;
};

class Vector3f {
public: // Functions
  Vector3f();
  Vector3f(const Vector3f &newXYZ);
  explicit Vector3f(float newXYZ);
  explicit Vector3f(float newX, float newY, float newZ);
  explicit Vector3f(const float *const newXYZ);
  explicit Vector3f(const Vector2f &newXY, float newZ);

  // Getters
  float &x();
  float &y();
  float &z();
  float *data();

  // Const getters.
  float x() const;
  float y() const;
  float z() const;
  const float *data() const;

  // Static getters
  static Vector3f zero();

protected: // Variables
  float _x, _y, _z;
};

class Vector4f {
public: // Functions
  Vector4f();
  Vector4f(const Vector4f &newXYZW);
  explicit Vector4f(float newXYZW);
  explicit Vector4f(float newX, float newY, float newZ, float newW);
  explicit Vector4f(const float *const newXYZW);
  explicit Vector4f(const Vector3f &newXYZ, float newW);

  // Getters.
  float &x();
  float &y();
  float &z();
  float &w();
  float *data();

  // Const getters.
  float x() const;
  float y() const;
  float z() const;
  float w() const;
  const float *data() const;

  // Static getters
  static Vector4f zero();

protected: // Variables
  float _x, _y, _z, _w;
};

class Vector4b {
public: // Functions
  Vector4b();
  Vector4b(const Vector4b &newXYZW);
  explicit Vector4b(uint8_t newXYZW);
  explicit Vector4b(uint8_t newX, uint8_t newY, uint8_t newZ, uint8_t newW);
  explicit Vector4b(uint32_t newXYZW);
  explicit Vector4b(const uint8_t *const newXYZW);

  // Getters.
  uint8_t &x();
  uint8_t &y();
  uint8_t &z();
  uint8_t &w();
  uint8_t *data();

  // Const getters.
  uint8_t x() const;
  uint8_t y() const;
  uint8_t z() const;
  uint8_t w() const;
  const uint8_t *data() const;

  // Static getters
  static Vector4b zero();

protected: // Variables
  uint8_t _x, _y, _z, _w;
};

} // namespace bbm

// Inline header includes
#include "Vector.inl"
