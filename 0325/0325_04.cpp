#include <iostream>
#include <cstring>
using namespace std;

class Student {
	char *name;
	int number;
public:
	Student(char *pn, int n) {
		name = new char[strlen(pn)+1];
		strcpy(name, pn);
		number = n;
	}
	// 얕은 복사 문제 해결
	Student(Student& s) {
		name = new char[strlen(s.name)+1];
		strcpy(name, s.name);
		number = s.number;
	}
	~Student() {
		delete [] name;
	}
	void setName(char *pn)
	{
		delete[] name;
		name = new char[strlen(pn)+1];
		strcpy(name, pn);
	}
	void printInfo()
	{
		cout << "이름: " << name << ", ";
		cout << "학번: " << number << endl;
	}
};

int main()
{
	Student s1("홍길동", 10000001);
	Student s2(s1);

	s1.printInfo();
	s2.printInfo();
	s1.setName("김철수");

    cout << "----------" << endl;

	s1.printInfo();
	s2.printInfo();
	return 0;
}
