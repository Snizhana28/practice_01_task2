#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

int main()
{
	Point* obj = new Point(1, 2, 3);
	obj->Print();

	delete obj;
	return 0;
}

