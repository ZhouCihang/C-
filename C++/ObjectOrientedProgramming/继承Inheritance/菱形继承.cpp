#include <iostream>
using namespace std;

class Animal
{
public:
    int m_Age;
};

//利用虚继承 解决菱形继承问题，加上virtual
class Sheep : virtual public Animal
{
};

class Camel : virtual public Animal
{
};

class SheepCamel : public Sheep, public Camel
{
};

void test01()
{
    SheepCamel sc;
    sc.Sheep::m_Age = 18;
    sc.Camel::m_Age = 25;
    cout << sc.Sheep::m_Age << endl;
    cout << sc.Camel::m_Age << endl;
    cout << sc.m_Age << endl;

    //重复数据只需要有一份，菱形继承导致数据两份，资源浪费
}

int main()
{
    test01();
    return 0;
}