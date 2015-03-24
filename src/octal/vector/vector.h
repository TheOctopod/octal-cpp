#pragma once

namespace octal
{
	class Vector
	{
	public:
		/** @brief	Zero: {0, 0, 0} */
		static const Vector ZERO;

	public:
		double X;
		double Y;
		double Z;
		double W;

		Vector() : X(0), Y(0), Z(0), W(0) { }
		Vector(double x, double y) : X(x), Y(y), Z(0), W(0) { }
		Vector(double x, double y, double z) : X(x), Y(y), Z(z), W(0) { }
		Vector(double x, double y, double z, double w) : X(x), Y(y), Z(z), W(w) { }

		Vector Add(Vector other);
		Vector Subtract(Vector other);
		Vector Multiply(Vector other);
		Vector Multiply(double x);
		Vector Divide(Vector other);
		Vector Divide(double x);

		double Magnitude();
		Vector Normalized();

		bool Equals(Vector other);
		bool operator ==(Vector other)
		{
			return Equals(other);
		}

		bool operator !=(Vector other)
		{
			return !Equals(other);
		}

		Vector operator +(Vector other)
		{
			return Add(other);
		}

		Vector operator -(Vector other)
		{
			return Subtract(other);
		}

		Vector operator *(Vector other)
		{
			return Multiply(other);
		}

		Vector operator *(double x)
		{
			return Multiply(x);
		}

		Vector operator /(Vector other)
		{
			return Divide(other);
		}
	};
}
