#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b)
	{
		// ...
	}
};

class Rectangle
{
	Point p1, p2;
public:
	Rectangle(int x1, int y1, int x2, int y2) : p1(x1, y1), p2(x2, y2)
	{
		// ...
	}
};

int main()
{
	Rectangle(1, 2, 3, 4);
	return 0;
}
