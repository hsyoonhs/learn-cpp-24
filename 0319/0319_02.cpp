#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int salary;
	int age;

	int getSalary()
	{
        return salary;
	}

public:
	int getAge()
	{
        return age;
	}
    string getName()
    {
        return name;
    }
};

int main()
{
	Employee e;
	// e.salary = 300; // X
	// e.age = 26; // X
	// int sa = e.getSalary(); // X
	string s = e.getName();
	int a = e.getAge();
	cout << a;

	return 0;
}
