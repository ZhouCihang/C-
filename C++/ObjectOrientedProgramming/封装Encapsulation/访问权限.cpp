#include <iostream>
using namespace std;

class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

class C1{
    int m_A; // default is private accessbility
};

struct C2{
    int m_A; // default is public accessbility
};

int main()
{

    Person p1;

    p1.m_Name = "李四";
    p1.func();

    C1 c1;
    //c1.m_A = 123456;

    C2 c2;
    c2.m_A = 123456;

    return 0;
}