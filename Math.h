#pragma once

#include "Main.h"

struct Vector {
	float x;

public:
	Vector();
	Vector(float x);

	Vector operator +(const Vector& other) const;
	Vector operator -(const Vector& other) const;
	Vector operator*(const Vector& other) const;
	Vector operator/(const Vector& other) const;
};

struct Vector2 {
	float x;
	float y;

public:
	Vector2();
	Vector2(float x, float y);

	Vector2 operator +(const Vector2& other) const;
	Vector2 operator -(const Vector2& other) const;
	Vector2 operator /(const Vector2& other) const;
	Vector2 operator *(const Vector2& other) const;
};

struct Vector3 {
	Vector3();
	Vector3(float x, float y, float z);

	float x;
	float y;
	float z;

	Vector3 operator +(const Vector3& other) const;
	Vector3 operator -(const Vector3& other) const;
	Vector3 operator /(const Vector3& other) const;
	Vector3 operator *(const Vector3& other) const;
};

struct Color {
	float R;
	float G;
	float B;
	float A;
};