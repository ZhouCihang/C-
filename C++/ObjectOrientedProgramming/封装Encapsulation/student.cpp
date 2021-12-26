#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int studNumber;

    void showName(){
        cout << name << endl;
    }

    void showStudNumber(){
        cout <<studNumber << endl;
    }
};

int main()
{
    Student student;

    student.name = "Da Foo";
    student.studNumber = 159356;

    cout<<"Student Name is: ";
    student.showName();

    cout<<"Student Number is: ";
    student.showStudNumber();
    cout<<endl;

    return 0;
}