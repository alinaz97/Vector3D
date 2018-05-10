#include"Header.h"

Vector3D::Vector3D()
	{
		x = 0;
		y = 0;
		z = 0;
	}

Vector3D::Vector3D(double _x, double _y, double _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

Vector3D::~Vector3D(){}

double Vector3D::getX() const
	{
		return x;
	}

double Vector3D::getY() const
	{
		return y;
	}

double Vector3D::getZ() const
	{
		return z;
	}

Vector3D Vector3D::operator+(const Vector3D & secondVector) const
	{
		Vector3D v(x + secondVector.getX(), y + secondVector.getY(), z + secondVector.getZ());
		return v;
	}

Vector3D Vector3D::operator-(const Vector3D & secondVector) const
	{
		Vector3D v(x - secondVector.x, y - secondVector.y, z - secondVector.z);
		return v;
	}

Vector3D Vector3D::operator-() const
	{
	Vector3D v(-x, -y, -z);
	return v;
	}

Vector3D operator*(double number, const Vector3D & vector)
{
	Vector3D v(number*vector.x, number*vector.y, number*vector.z);
	return v;
}

Vector3D Vector3D::operator*(double number) const
{
	return number*(*this);
}

std::istream & operator>>(std::istream & iStream, Vector3D & vector)
{
	char temp; //поема запетайките и скобите във входа
	iStream >> temp >> vector.x >> temp >> vector.y >> temp >> vector.z >> temp;
	return iStream;
}

std::ostream & operator<<(std::ostream & oStream, const Vector3D & vector)
{
	oStream << "(" << vector.x << "," << vector.y << "," << vector.z << ")";
	return oStream;
}
