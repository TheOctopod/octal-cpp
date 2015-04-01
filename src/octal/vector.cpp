#include <cmath>  
#include "octal/vector.h"

namespace octal
{
	const Vector Vector::ZERO = Vector(0, 0, 0);

	Vector Vector::Add(Vector other)
	{
		return Vector(X + other.X, Y + other.Y, Z + other.Z);
	}

	Vector Vector::Subtract(Vector other)
	{
		return Vector(X - other.X, Y - other.Y, Z - other.Z);
	}

	Vector Vector::Multiply(Vector other)
	{
		return Vector(X * other.X, Y * other.Y, Z * other.Z);
	}

	Vector Vector::Multiply(double x)
	{
		return Vector(X * x, Y * x, Z * x);
	}

	Vector Vector::Divide(Vector other)
	{
		return Vector(X / other.X, Y / other.Y, Z / other.Z);
	}

	Vector Vector::Divide(double x)
	{
		return Vector(X / x, Y / x, Z / x);
	}

	bool Vector::Equals(Vector other)
	{
		return X == other.X && Y == other.Y && Z == other.Z;
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