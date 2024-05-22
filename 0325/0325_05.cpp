#include <iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(); // 디폴트 생성자
	Date(int year); // 생성자
	Date(int year, int month, int day); // 생성자
	void setDate(int year, int month, int day);
	void print();
};

Date::Date()
{		
	setDate(2000, 1, 1);
}

Date::Date(int year)
{				
	setDate(year, 1, 1);
}

Date::Date(int year, int month, int day)
{	
	setDate(year, month, day);
}

void Date::setDate(int year, int month, int day) 
{
	this->month = month;
	this->day = day;
	this->year = year;
}

void Date::print()
{
	cout << year << "년 " << month <<  "월 " << day << "일" << endl;
}

int main()
{
	Date date1(2024, 3, 25); 
	Date date2(2024);
	Date date3;

	date1.print(); // 2024년 3월 25일
	date2.print(); // 2024년 1월 1일
	date3.print(); // 2000년 1월 1일

	return 0;
}
