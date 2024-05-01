#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
	char *pBuf;
public:
	MyString(const char *s=NULL); 
	MyString(MyString& s);
	~MyString();

	void print();
	int getSize();
	MyString operator+(MyString& s);

	friend ostream& operator<<(ostream& os, const MyString& s);
};

// =============== 생성자 및 소멸자 =============== //

MyString::MyString(const char *s)
{
	if (s == NULL)
	{
		pBuf = new char[1];
		pBuf[0] = NULL;
	}
	else 
	{
		pBuf = new char[::strlen(s)+1];
		strcpy(pBuf, s);
 	}
}

MyString::MyString(MyString &s)
{
	pBuf = new char[s.getSize()+1];
	strcpy(pBuf, s.pBuf);
}

MyString::~MyString()
{
	if (pBuf)
	delete [] pBuf;
}

// =============== 출력 함수 =============== //

void MyString::print()
{
	cout << pBuf << endl;
}

// =============== 크기반환 함수 =============== //

int MyString::getSize()
{
	return strlen(pBuf);
}

// =============== 연산자 오버로딩 =============== //

MyString MyString::operator+(MyString& s)
{
	char *temp = new char[getSize() + s.getSize() + 1];
	strcpy(temp, pBuf);
	strcat(temp, s.pBuf);
	MyString r(temp);
	delete [] temp;
	return r;
}

ostream& operator<<(ostream& os, const MyString& s)
{
	os << s.pBuf << endl;
}

int main()
{
	MyString s1("Hello ");
	MyString s2("World!");
	MyString s3 = s1 + s2;

	cout << s1;
	cout << s2;
	cout << s3;

	return 0;
}

