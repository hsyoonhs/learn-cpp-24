#include <iostream>
#include <string>
using namespace std;

class Car
{
	int speed;
	int gear;
	string color;
public:
	Car(int s, int g, string c) {
		speed = s;
		gear = g;
		color = c;
	}
	void printInfo()
	{
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
	}
};

int main()
{
	Car c1(0, 1, "yellow");
	Car c2(c1);

	c1.printInfo();
	c2.printInfo();

	return 0;
}
