#include <iostream>
using namespace std;

class Time {
private:
	int hour; // 0~23
	int minute; // 0~59
	int second; // 0~59
public:
	Time(); // 디폴트 생성자
	Time(int h, int m, int s); // 생성자
	void setTime(int h, int m, int s);
	void print();
};

Time::Time()
{
	setTime(0, 0, 0);
}

Time::Time(int h, int m, int s) 
{
	setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) 
{
	hour = ((h >= 0 && h < 24) ? h : 0);
	minute = ((m >= 0 && m < 60) ? m : 0);
	second = ((s >= 0 && s < 60) ? s : 0);
}

void Time::print() 
{
	cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{
	Time time1;
	cout << "디폴트 생성자 호출: ";
	time1.print(); // 0:0:0

	Time time2(13, 27, 6);
	cout << "다른 생성자 호출: ";
	time2.print(); // 13:27:6

	Time time3(99, 66, 77);
	cout << "비정상 시간 설정: ";
	time3.print(); // 0:0:0

	return 0;
}
