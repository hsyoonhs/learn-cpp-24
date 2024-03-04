#include <iostream>
using namespace std;

int main()
{
    int var;
    int &ref = var;
    
    var = 10;
    cout << "var의 값: " << var << endl;
    cout << "ref의 값: " << ref << endl;
    
    ref = 20;
    cout << "var의 값: " << var << endl;
    cout << "ref의 값: " << ref << endl;
    
    return 0;
}

// var의 값: 10
// ref의 값: 10
// var의 값: 20
// ref의 값: 20