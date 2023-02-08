#include <iostream>
#include <string>

using namespace std;
class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point(int x, int y, int z);
	void set_x(int x);
	int get_x();

	void set_y(int y);
	int get_y();

	void set_z(int z);
	int get_z();

	void Print();
};
