#include <iostream>
using namespace std;

int main()
{
    for (int i=2; i<10; i++)
    {
        for (int j=1; j<10; j++)
        {
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << "------------" << endl;
    }

    return 0;
}

// 2 x 1 = 2
// 2 x 2 = 4
// 2 x 3 = 6
// 2 x 4 = 8
// 2 x 5 = 10
// 2 x 6 = 12
// 2 x 7 = 14
// 2 x 8 = 16
// 2 x 9 = 18
// ------------
// ...
// 9 x 9 = 81
// ------------