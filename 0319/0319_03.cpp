#include <iostream>
using namespace std;

class Car
{
private:
    int speed;
public:
	int getSpeed();
	void setSpeed(int s);
	void honk();
};

int Car::getSpeed()
{
    return speed;
}

void Car::setSpeed(int s)
{
    speed = s;
}

void Car::honk()
{
    cout << "빵빵!" << endl;
}

int main()
{
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "현재 속력은 시속 " << myCar.getSpeed() << " km입니다." << endl;

    return 0;
}
