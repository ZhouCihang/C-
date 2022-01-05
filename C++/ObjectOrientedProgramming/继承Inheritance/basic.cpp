#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        m_A = 100;
        cout << "Base Function" << endl;
    }

    void func()
    {
        cout << "Base func()" << endl;
    }
    ~Base()
    {
        cout << "Base Function Destructor" << endl;
    }
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
        cout << "Son Function" << endl;
    }
    void func()
    {
        cout << "Son func()" << endl;
    }
    ~Son()
    {
        cout << "Son Function Destructor" << endl;
    }
    int m_A;
};

void test01()
{
    Son s;
    cout << "size of son = " << sizeof(Son) << endl;
    cout << "Son m_A is = " << s.m_A << endl;

    cout << "Base m_A is = " << s.Base::m_A << endl;
    s.func();
    s.Base::func();
}

int main()
{
    test01();
    return 0;
}