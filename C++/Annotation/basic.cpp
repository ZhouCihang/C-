#include <iostream>
using namespace std;

void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a = 100;
    int &b = a;

    cout << a << " " << b << endl;

    b = 1000;
    cout << a << " " << b << endl;

    int c = 100;
    int d = 50;

    mySwap03(c, d);

    cout << c << " " << d << endl;

    return 0;
}