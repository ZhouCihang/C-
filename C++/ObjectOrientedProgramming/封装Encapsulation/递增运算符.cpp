#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream &operator<<(ostream &, MyInteger myint);

public:
    MyInteger()
    {
        m_Num = 0;
    }

// reload ++m_Num 返回引用是为了一直对一个数据进行递增操作
MyInteger& operator++(){
    m_Num++;
    return *this;
}
// reload m_Num++
// int 代表占位参数， 用于区分前置和后置
MyInteger operator++(int){
    MyInteger temp;
    temp = *this;
    this->m_Num++;
    return temp;
}

private:
    int m_Num;
};

ostream &operator<<(ostream &, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger mi;
    cout << ++mi << endl;
    cout << mi << endl;
}

void test02(){
    MyInteger mi02;
    cout << mi02++ << endl;
    cout << mi02 << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}