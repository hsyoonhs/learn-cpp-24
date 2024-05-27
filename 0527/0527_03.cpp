#include <iostream>
using namespace std;

class Shape
{
protected:
	int x, y;

public:
	virtual void draw() = 0;
};

class Rectangle : public Shape
{
private:
	int width, height;

public:
	void draw()
	{
		cout << "Rectangle Draw" << endl;
	}
};

int main()
{
	Shape *a = new Rectangle();
	a->draw(); // Rectangle Draw

	return 0;
}
