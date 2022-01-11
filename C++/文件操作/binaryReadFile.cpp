#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test01()
{
    ifstream ifs;
    ifs.open("person.txt", ios::binary|ios::in);
    if (!ifs.is_open()){
        cout<<"Error opening"<<endl;
        return;
    }
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout<<"Person name: "<<p.m_Name<<" age: "<<p.m_Age<<endl;
    ifs.close();
}

int main()
{
    test01();
    return 0;
}