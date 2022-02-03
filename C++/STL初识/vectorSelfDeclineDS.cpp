#include <iostream>
using namespace std;
#include <vector>

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void test01()
{
    vector<Person> persons;
    persons.push_back(Person("John", 17));
    persons.push_back(Person("Bob", 18));
    persons.push_back(Person("Sea", 19));

    for (vector<Person>::iterator it = persons.begin(); it != persons.end(); it++)
    {
        cout << "name: " << (*it).m_Name << endl;
        cout << "age: " << (*it).m_Age << endl;
        cout << "name: " << it->m_Name << endl;
        cout << "name: " << it->m_Age << endl;
    }
}

void test02()
{
    vector<Person *> v;
    Person p1("Tom", 5);
    Person p2("Billy", 6);

    v.push_back(&p1);
    v.push_back(&p2);

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name: " << (*it)->m_Name << endl;
        cout << "age: " << (*it)->m_Age << endl;
    }
}

int main()
{
    test02();
    return 0;
}