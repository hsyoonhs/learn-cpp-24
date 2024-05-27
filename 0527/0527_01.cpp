#include <iostream>
using namespace std;

class Shape
{
protected:
	int x, y;

public:
	virtual void draw()
	{
		cout <<"Shape Draw" << endl;
	}

	void setOrigin(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class Rectangle : public Shape {
private: 
	int width, height;

public: 
	void setWidth(int w)
	{
		width = w;
	}

	void setHeight(int h)
	{
		height = h;
	}

	void draw()
	{
		cout << "Rectangle Draw"<< endl;
	}
};

class Circle : public Shape {
private: 
	int radius;

public: 
	void setRadius(int r)
	{
		radius = r;
	}

	void draw()
	{
		cout << "Circle Draw"<< endl;
	}
};

int main()
{
	Shape *ps = new Rectangle();
	ps->setOrigin(10, 10);
	ps->draw(); // Rectangle Draw (가상함수를 사용하지 않으면 Shape Draw)
	((Rectangle *)ps)->setWidth(100);
	delete ps;

	Circle c;
	Shape &s = c;
	s.setOrigin(10, 10);
	s.draw(); // Circle Draw (가상함수를 사용하지 않으면 Shape Draw)
	((Circle &)c).setRadius(5);

    cout << endl;

    Shape *pps[3];
    pps[0] = new Shape(); // Shape Draw
    pps[1] = new Rectangle(); // Rectangle Draw
    pps[2] = new Circle(); // Circle Draw
    
    for (int i = 0; i < 3; i++)
        pps[i]->draw();

	return 0;
}
