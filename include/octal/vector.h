#pragma once

namespace octal
{
	struct Vector
	{
	public:

		/** 
		 *	@brief	A zero Vector. (0, 0, 0)
		 */
		static const Vector ZERO;

	private:

		/**
		 *	@brief	Constructs a Vector with all the values at 0.
		 *			Please use Vector::ZERO instead.
		 */
		Vector() : X(0), Y(0), Z(0) { }

		bool Equals(Vector other);
		Vector Add(Vector other);
		Vector Subtract(Vector other);
		Vector Multiply(Vector other);
		Vector Multiply(double x);
		Vector Divide(Vector other);
		Vector Divide(double x);

	public:

		double X, Y, Z;

		/**
		 *	@brief	Constructs a Vector with only the X and Y axises set.
		 *			Usually used to represent a two-dimensional Vector.
		 */
		Vector(double x, double y) : X(x), Y(y), Z(0) { }
		Vector(double x, double y, double z) : X(x), Y(y), Z(z) { }

		/**
		 *	@brief Returns the magnitude (length) of the vector.
		 */
		double Magnitude();

		/**
		 *	@brief Returns a normalized version of the vector. (magnitude == 1)
		 */
		Vector Normalized();

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

		Vector operator /(double x)
		{
			return Divide(x);
		}
	};
}
