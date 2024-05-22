#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed;		// 속도 
	int gear;		// 기어
	string color;	// 색상 
public:
	Car() 
	{
		cout << "디폴트 생성자 호출" << endl;
		speed = 0;
		gear = 1;
		color = "white";
	}

    Car(int s, int g, string c) 
	{
		cout << "매개 변수가 있는 생성자 호출" << endl;
		speed = s;
		gear = g;
		color = c;
	}

    // Car(int s=0, int g=1, string c=“red") 
    // {
    //  	speed = s;
    //  	gear = g;
    //  	color = c;
    // }

	Car(string c)
	{
		Car(0, 0, c);
	}

	~Car() 
	{
		cout << "소멸자 호출" << endl;
	}

};

int main()
{
	Car c1;
	Car c2(100, 0, "blue");
	Car c3("white");

	return 0;
}
