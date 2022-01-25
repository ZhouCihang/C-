#include <iostream>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // bool operator==(Person &a)
    // {
    //     if (this->name == a.name, this->age == a.age)
    //     {
    //         return true;
    //     }
    //     return false;
    // }

    string name;
    int age;
};

template <class T>
bool myCompare(T &a, T &b)
{
    if (a == b)
        return true;
    else
        return false;
}


template<> bool myCompare(Person &a, Person &b)
{
    if (a.name == b.name && a.age == b.age)
        return true;
    else
        return false;
}

void test()
{
    int a = 100;
    int b = 200;

    bool ret = myCompare(a, b);
    if (ret)
    {
        cout << "Equal." << endl;
    }
    else
    {
        cout << "Not Equal." << endl;
    }
}

void test02()
{
    Person a("Tom", 20);
    Person b("Tom", 20);

    bool ret = myCompare(a, b);
    if (ret)
    {
        cout << "Equal." << endl;
    }
    else
    {
        cout << "Not Equal." << endl;
    }
}

int main()
{
    test02();
    return 0;
}