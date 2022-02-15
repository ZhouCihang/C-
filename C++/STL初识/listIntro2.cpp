#include <iostream>
using namespace std;
#include <list>

class Person
{
public:
    Person(string name, int age, int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    string m_Name;
    int m_Age;
    int m_Height;
};

bool comparePerson(Person &a, Person &b)
{
    //Age sort
    if(a.m_Age == b.m_Age)
        return a.m_Height > b.m_Height;

    return a.m_Age < b.m_Age;
}

void test01()
{
    list<Person> l;
    Person p1("LiuBei", 35, 175);
    Person p2("CaoCao", 45, 180);
    Person p3("SunQuan", 40, 170);
    Person p4("ZhaoYun", 25, 190);
    Person p5("ZhangFei", 35, 160);
    Person p6("GuanYu", 35, 200);

    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);

    for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "Name: " << (*it).m_Name << " Age: " << it->m_Age << " Height: " << it->m_Height << endl;
    }

    cout << "------------------" << endl;
    cout << "Sorting" << endl;
    l.sort(comparePerson);
    for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << "Name: " << (*it).m_Name << " Age: " << it->m_Age << " Height: " << it->m_Height << endl;
    }
}

int main()
{
    test01();
    return 0;
}