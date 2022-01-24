#include <iostream>
using namespace std;

//function template
template <typename T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void func()
{
    cout << "func" << endl;
}

void test02()
{
    func<int>();
}

void test01()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    double c = 100.1;
    double d = 200.2;
    mySwap<double>(c, d);
    cout << "c = " << c << " d = " << d << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}