#include <iostream>
using namespace std;

template <class NameType, class AgeType>
class Person
{
public:
    Person(NameType name, AgeType age){
        this->m_Name = name;
        this->m_Age = age;
    }

    void showInfo(){
        cout << "Name: " << this->m_Name << " Age: " << this->m_Age<<endl;
    }
    
    NameType m_Name;
    AgeType m_Age;
};

void test01(){
    Person<string, int> p1("Tom", 28);
    p1.showInfo();
}

int main()
{
    test01();
    return 0;
}