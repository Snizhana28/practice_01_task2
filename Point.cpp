#include "Point.h"

Point::Point(int x, int y, int z)
{
	cout << "Constructor with param!" << endl;
	set_x(x);
	set_y(y);
	set_z(z);
}
void Point::set_x(int x)
{
	this->x = x;
}
int Point::get_x()
{
	return x;
}

void Point::set_y(int y)
{
	this->y = y;

}
int Point::get_y()
{
	return y;
}

void Point::set_z(int z)
{
	this->z = z;
}
int Point::get_z()
{
	return z;
}


void Point::Print()
{
	cout << "X -> " << x << endl;
	cout << "Y -> " << y << endl;
	cout << "Z -> " << z << endl;
}
