#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

public:
	int getYear();
	void setYear(int y);
	int getMonth();
	void setMonth(int m);
	int getDay();
	void setDay(int d);
	void print();
};

int Date::getYear()
{
    return year;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::getMonth()
{
    return month;
}

void Date::setMonth(int m)
{
    month = m;
}

int Date::getDay()
{
    return day;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::print()
{
    cout << year << "년 " << month << "월 " << day << "일" << endl;
}

int main()
{
    Date date;
    date.setYear(2024);
    date.setMonth(3);
    date.setDay(19);
    date.print();

    return 0;
}
