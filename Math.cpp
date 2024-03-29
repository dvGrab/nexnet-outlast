#include "Math.h"

/** Vector Math **/
Vector::Vector()
{
	this->x = 0;
}

Vector::Vector(float x)
{
	this->x = x;
}

Vector Vector::operator +(const Vector& other) const
{
	return Vector(x + other.x);
}

Vector Vector::operator -(const Vector& other) const
{
	return Vector(x - other.x);
}

Vector Vector::operator /(const Vector& other) const
{
	return Vector(x / other.x);
}

Vector Vector::operator *(const Vector& other) const
{
	return Vector(x * other.x);
}

/** Vector2 Math **/
Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2 Vector2::operator +(const Vector2& other) const
{
	return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator -(const Vector2& other) const
{
	return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator /(const Vector2& other) const
{
	return Vector2(x / other.x, y / other.y);
}

Vector2 Vector2::operator *(const Vector2& other) const
{
	return Vector2(x * other.x, y * other.y);
}

/** Vector3 Math **/
Vector3::Vector3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator +(const Vector3& other) const
{
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator -(const Vector3& other) const
{
	return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator /(const Vector3& other) const
{
	return Vector3(x / other.x, y / other.y, z / other.z);
}

Vector3 Vector3::operator *(const Vector3& other) const
{
	return Vector3(x * other.x, y * other.y, z * other.z);
}