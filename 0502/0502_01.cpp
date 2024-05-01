#include <iostream>
using namespace std;

class Vec
{
private:
	double x, y, z;
public:
	Vec();
	Vec(double x, double y);
	Vec(double x, double y, double z);

	Vec sum_m(const Vec& v);
	friend Vec sum_f(const Vec& v1, const Vec& v2);

	friend Vec operator+(const Vec& v1, const Vec& v2);
	friend Vec operator-(const Vec& v1, const Vec& v2);
	Vec& operator+=(const Vec& v);
	Vec& operator-=(const Vec& v);

	friend double dotProduct(const Vec& v1, const Vec& v2);
	friend Vec crossProduct(const Vec& v1, const Vec& v2);

	void display(string name);
};

// =============== 생성자 =============== //

Vec::Vec()
{
	this->x = 0; this->y = 0; this->z = 0;
}

Vec::Vec(double x, double y)
{
	this->x = x; this->y = y; this->z = 0;
}

Vec::Vec(double x, double y, double z)
{
	this->x = x; this->y = y; this->z = z;
}

// =============== 벡터합 함수 =============== //

Vec Vec::sum_m(const Vec& v)
{
	return Vec(this->x+v.x, this->y+v.y, this->z+v.z);
}

Vec sum_f(const Vec& v1, const Vec& v2)
{
	return Vec(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z);
}

// =============== 연산자 오버로딩 =============== //

Vec operator+(const Vec& v1, const Vec& v2)
{
	return Vec(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z);
}

Vec operator-(const Vec& v1, const Vec& v2)
{
	return Vec(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z);
}

Vec& Vec::operator+=(const Vec& v)
{
	this->x += v.x; this->y += v.y; this->z += v.z;
	return *this;
}

Vec& Vec::operator-=(const Vec& v)
{
	this->x -= v.x; this->y -= v.y; this->z -= v.z;
	return *this;
}

// =============== 벡터출력 함수 =============== //

void Vec::display(string name = "")
{
	cout << name << "(" << x << ", " << y << ", " << z << ")" << endl;
}

// =============== 벡터내외적 함수 =============== //

double dotProduct(const Vec& v1, const Vec& v2)
{
	return (v1.x*v2.x + v1.y*v2.y + v1.z*v2.z);
}

Vec crossProduct(const Vec& v1, const Vec& v2)
{
	return Vec(v1.y*v2.z-v1.z*v2.y, -v1.x*v2.z+v1.z*v2.x, v1.x*v2.y-v1.y*v2.x);
}

int main()
{
	Vec a(2, 3, 4), b(5, 6, 7), m_result, f_result;
	m_result = a.sum_m(b);
	f_result = sum_f(a, b);
	m_result.display("m_result: ");
	f_result.display("f_result: ");

	cout << endl;

	Vec c(8, 9, 10), d(11, 12, 13), add_result, subt_result;
	add_result = c+d;
	subt_result = c-d;
	add_result.display("add_result: ");
	subt_result.display("subt_result: ");

	cout << endl;

	Vec e(14, 15, 16), f(17, 18, 19);
	e.display("e: ");
	f.display("f: ");
	e += f;
	e.display("increment e by f: ");
	e -= f;
	e.display("decrement e by f: ");

	cout << endl;

	Vec g(20, 21, 22), h(23, 24, 25), cross_result;
	double dot_result;
	dot_result = dotProduct(g, h);
	cross_result = crossProduct(g, h);
	cout << "dot_result: " << dot_result << endl;
	cross_result.display("cross_result: ");

	return 0;
}

