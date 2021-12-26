#include <iostream>
using namespace std;

class Person
{
public:
    void setName(string name){
        m_Name = name;
    }
    string getName(){
        return m_Name;
    }
    int getAge(){
        m_Age = 0; //initial value.
        return m_Age;
    }

    void setAge(int age){
        if(age <0 || age >150){
            m_Age = 0;
            cout<<"Invalid age"<<endl;
            return;
        }
        m_Age = age;
    }

    void setLover(string lover){
        m_lover = lover;
    }

private:
    //姓名 可读可写
    string m_Name;

    //年龄 只读不可写
    int m_Age;

    //情人 只写不可读
    string m_lover;
};

int main()
{
    Person p;
    p.setName("Dafoo");
    cout << "Name is: "<< p.getName() << endl;

    p.setAge(18);
    cout << "Age is: " << p.getAge() << endl;
    p.setLover("hahaha");

    return 0;
}