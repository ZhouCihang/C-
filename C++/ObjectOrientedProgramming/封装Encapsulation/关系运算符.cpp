#include <iostream>
using namespace std;

class Person
{

public:

    Person(string name, int age){
        m_Name = name;
        m_Age = age;
    }

    bool operator==(Person &p){
        if(p.m_Name == m_Name && p.m_Age == m_Age){
            return true;
        }
        return false;
    }

    string m_Name;
    int m_Age;
};

void test01(){
    Person p("Dafoo", 18);
    Person p1("Dafo", 18);

    if(p == p1){
        cout << "Same person."<< endl;
    }else{
        cout << "Different person."<< endl;
    }

    cout << p.m_Name << p.m_Age<<endl;
}

int main()
{
    test01();
    return 0;
}