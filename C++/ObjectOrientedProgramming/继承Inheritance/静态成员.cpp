#include <iostream>
using namespace std;

class Base
{
public:
    static void func()
    {
        cout << "From Base class function." << endl;
    }
    static int m_A;
};
int Base::m_A = 100;

class Son : public Base
{
public:
    static void func()
    {
        cout << "From Son class function." << endl;
    }
    static int m_A;
};
int Son::m_A = 200;

void test01()
{
    Son s;
    cout << "Son m_A = " << s.m_A << endl;
    cout << "Base m_A = " << s.Base::m_A << endl;

    cout << "From Class name to get Base m_A = " << Son::Base::m_A << endl;
    cout << "From Class name to get Son m_A = " << Son::m_A << endl;
}

void test02()
{
    Son s1;
    s1.func();
    s1.Base::func();

    Son::func();
    Son::Base::func();

}

int main()
{
    //test01();
    test02();
    return 0;
}