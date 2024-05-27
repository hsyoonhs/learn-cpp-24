#include <iostream>
using namespace std;

class Animal
{
public: 
	Animal()
	{ cout << "0. Animal 생성자" << endl; }

	virtual ~Animal()
	{ cout << "0. Animal 소멸자" << endl; }

	virtual void speak()
	{ cout << "Animal speak()" << endl; }
};

class Dog : public Animal 
{
public: 
	Dog()
	{ cout << "1. Dog의 생성자" << endl; }

	~Dog()
	{ cout << "1. Dog의 소멸자" << endl; }

	void speak()
	{ cout << "멍멍" << endl; }
};

class Cat : public Animal 
{
public:
	Cat()
	{ cout << "2. Cat 생성자" << endl; }

	~Cat()
	{ cout << "2. Cat 소멸자" << endl; }

	void speak()
	{ cout << "야옹" << endl; }
};

int main()
{
	Animal *a1 = new Dog();
	a1->speak();
	delete a1;

	cout << endl;

	Animal *a2 = new Cat();
	a2->speak();
	delete a2;

	return 0;
}
