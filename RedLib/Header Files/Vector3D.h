#pragma once
#include "Trackable.h"
#include <ostream>

class Vector3D : public Trackable
{

public:
	Vector3D();
	Vector3D(float x, float y, float z);
	Vector3D(int x, int y, int z);
	Vector3D(double x, double y, double z);
	~Vector3D();

	Vector3D operator=(const Vector3D& other);

	Vector3D operator+(const Vector3D& other) const;
	Vector3D operator-(const Vector3D& other) const;
	Vector3D operator*(const float scalar) const;
	Vector3D operator/(const float scalar) const;
	Vector3D operator*(const int scalar) const;
	Vector3D operator/(const int scalar) const;
	Vector3D operator*(const double scalar) const;
	Vector3D operator/(const double scalar) const;

	Vector3D operator+=(const Vector3D& other);
	Vector3D operator-=(const Vector3D& other);
	Vector3D operator*=(const float scalar);
	Vector3D operator/=(const float scalar);

	bool operator==(const Vector3D& other) const;
	bool operator!=(const Vector3D& other) const;

	std::ostream& write(std::ostream& out) const;

	float length() const;
	void normalize();

	Vector3D normalized() const;

	float getX() const { return mX; }
	float getY() const { return mY; }
	float getZ() const { return mZ; }

	static const Vector3D Zero() { return Vector3D(0, 0, 0); }
	static const Vector3D Left() { return Vector3D(-1, 0, 0); }
	static const Vector3D Right() { return Vector3D(1, 0, 0); }
	static const Vector3D Up() { return Vector3D(0, -1, 0); }
	static const Vector3D Down() { return Vector3D(0, 1, 0); }
	static const Vector3D GraphicalUp() { return Vector3D(0, 1, 0); }
	static const Vector3D GraphicalDown() { return Vector3D(0, -1, 0); }
	static const Vector3D Forward() { return Vector3D(0, 0, 1); }
	static const Vector3D Backward() { return Vector3D(0, 0, -1); }


private:
	float mX, mY, mZ;
	
};

//global operator overloads (to get better implementation with ostream)
std::ostream& operator<<(std::ostream& out, Vector3D const &vec);