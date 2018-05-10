#ifndef HEADER_H
#define HEADER_H

#include<iostream>
#include<string>

using namespace std; 

class Vector3D
{
private:

	double x, y, z;

public:
	
	Vector3D();

	Vector3D(double, double , double);

	~Vector3D();

	double getX() const;

	double getY() const;

	double getZ() const;

	Vector3D operator+(const Vector3D &) const;

	Vector3D operator-(const Vector3D &) const;

	Vector3D operator-() const;

	Vector3D operator*(double) const; 

	friend Vector3D operator*(double , const Vector3D &);

	friend std::istream & operator>>(std::istream & , Vector3D &);

	friend std::ostream & operator<<(std::ostream & , const Vector3D &);
};



#endif