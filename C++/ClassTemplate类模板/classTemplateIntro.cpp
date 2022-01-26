#include <iostream>
using namespace std;

template <class NameType, class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    void showInfo()
    {
        cout << "Name: " << this->m_Name << " Age: " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

template <class NameType, class AgeType>
class Person2
{
public:
    Person2(NameType name, AgeType age);
    // {
    //     this->m_Name = name;
    //     this->m_Age = age;
    // }

    void showInfo();
    // {
    //     cout << "Name: " << this->m_Name << " Age: " << this->m_Age<<endl;
    // }

    NameType m_Name;
    AgeType m_Age;
};

template <class NameType, class AgeType>
Person2<NameType, AgeType>::Person2(NameType name, AgeType age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template <class NameType, class AgeType>
void Person2<NameType, AgeType>::showInfo()
{
    cout << "Name: " << this->m_Name << " Age: " << this->m_Age << endl;
}

void printPerson(Person<string, int> &p)
{
    p.showInfo();
}

void test01()
{
    Person<string, int> p1("Tom", 28);
    //p1.showInfo();
    printPerson(p1);

    Person2<string, int> p2("Bob", 28);
    p2.showInfo();
}

int main()
{
    test01();
    return 0;
}