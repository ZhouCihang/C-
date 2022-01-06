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

//second base class
class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A = 200;
    }
    int m_A;
};

class Son1 : public Base1, public Base2
{
public:
    Son1()
    {
        m_C = 300;
        m_D = 400;
    }

    int m_C, m_D;
};

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

void test03(){
    Son1 s;
    cout << "Son size of = "<< sizeof(s)<< endl;
    cout<<"m_A from Base1 = " << s.Base1::m_A <<endl;
    cout<<"m_A from Base2 = " << s.Base2::m_A <<endl;
}

int main()
{
    //test01();
    //test02();
    test03();
    return 0;
}