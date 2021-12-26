#include <iostream>
using namespace std;

class Student
{
public:

    //类中的属性和行为，我们统一称为 成员
    //属性  成员属性， 成员变量
    //行为  成员函数， 成员方法
    
    //属性
    string name;
    int studNumber;

    //行为
    void showName(){
        cout << name << endl;
    }

    void showStudNumber(){
        cout <<studNumber << endl;
    }

    void setName(string mName){
        name = mName;
    }

    void setID(int id){
        studNumber = id;
    }
};

int main()
{
    Student student;

    student.name = "Da Foo";
    student.studNumber = 159356;

    cout<<"Student1 Name is: ";
    student.showName();

    cout<<"Student1 Number is: ";
    student.showStudNumber();
    cout<<endl;

    Student student2;
    student2.setName("Da Gui");
    student2.setID(159356);

    cout<<"Student2 Name is: ";
    student2.showName();

    cout<<"Student2 Number is: ";
    student2.showStudNumber();
    cout<<endl;

    return 0;
}