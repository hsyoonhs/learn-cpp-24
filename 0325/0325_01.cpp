#include <iostream>
#include <string>
using namespace std;

class Car
{
	const int MAX_SPEED;

	int speed;
	int gear;
	string color;

	string& alias;
public:
	Car(int s=0, int g=0, string c="", string t="") : MAX_SPEED(300), speed(s), gear(g), color(c), alias(t)
	{
		// ...
	}
};

int main()
{
	Car c1(0, 0, "red", "자동차");
	return 0;
}
