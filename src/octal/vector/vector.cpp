#include <cmath>  
#include "vector.h"

namespace octal
{
	const Vector Vector::ZERO = Vector();

	Vector Vector::Add(Vector other)
	{
		return Vector(X + other.X, Y + other.Y, Z + other.Z, W + other.W);
	}

	Vector Vector::Subtract(Vector other)
	{
		return Vector(X - other.X, Y - other.Y, Z - other.Z, W - other.W);
	}

	Vector Vector::Multiply(Vector other)
	{
		return Vector(X * other.X, Y * other.Y, Z * other.Z, W * other.W);
	}

	Vector Vector::Multiply(double x)
	{
		return Vector(X * x, Y * x, Z * x, W * x);
	}

	Vector Vector::Divide(Vector other)
	{
		return Vector(X / other.X, Y / other.Y, Z / other.Z, W / other.W);
	}

	Vector Vector::Divide(double x)
	{
		return Vector(X / x, Y / x, Z / x, W / x);
	}

	bool Vector::Equals(Vector other)
	{
		return X == other.X && Y == other.Y && Z == other.Z && W == other.W;
	}

	double Vector::Magnitude()
	{
		return std::sqrt(X * X + Y * Y + Z * Z);
	}

	Vector Vector::Normalized()
	{
		return Divide(Magnitude());
	}
}