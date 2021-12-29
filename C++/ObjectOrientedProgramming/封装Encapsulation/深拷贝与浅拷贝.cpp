#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "无参构造函数。" << endl;
    }

    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "有参构造函数。" << endl;
    }

    Person(const Person &p)
    {
        m_Age = p.m_Age;
        //m_Height = p.m_Height;
        m_Height = new int(*p.m_Height);
        cout << "拷贝构造函数。" << endl;
    }
    ~Person()
    {
        if (m_Height != NULL){
            delete m_Height;
            m_Height = NULL;
        }
        cout << "析构函数。" << endl;
    }


    int m_Age;
    int *m_Height;
};

void test01(){
    Person p1(18, 160);

    cout << "P1 age is: "<< p1.m_Age<< " Height is " << *p1.m_Height<<endl;
    Person p2(p1);
    cout << "P2 age is: "<< p2.m_Age<< " Height is " << *p2.m_Height<<endl;
}

int main()
{
    test01();
    return 0;
}