#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << "memory address for a" << &a << endl;
    cout << "pointer p = " << p << endl;

    cout << "value of a " << a << endl;
    cout << "value of pointer p = " << *p << endl;
    return 0;
}