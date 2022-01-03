#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }
    // m_Num --

    MyInteger &operator--()
    {
        this->m_Num--;
        return *this;
    }

    // -- m_Num
    MyInteger operator--(int)
    {
        MyInteger temp = *this;
        this->m_Num--;
        return temp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num << endl;
    return cout;
}

void test01()
{
    MyInteger mi;
    cout << --mi << endl;
    cout << mi << endl;
}

void test02()
{
    MyInteger mi02;
    cout << mi02-- << endl;
    cout << mi02 << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}