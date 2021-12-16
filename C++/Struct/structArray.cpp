#include <iostream>
using namespace std;

struct students {
    string name;
    int age;
    int score;
};

struct teachers {
    int id;
    string name;
    int age;
    struct students stud;
};

int main(){
    struct students s1;
    s1.name = "Dafu";
    s1.age = 18;
    s1.score = 100;

    cout << "name: "<< s1.name <<" age is: "<< s1.age <<" score is: "<< s1.score<<endl;

    struct students studArray[3]={
        {"DaFUU", 5, 99},
        {"DaGUU", 7, 98},
        {"DaPOO", 9, 80}
    };

    studArray[2].name = "DaHAA";
    studArray[2].age = 80;

    for(int i=0; i<3; i++){
        cout << "name: "<< studArray[i].name <<
        " age is: "<< studArray[i].age <<" score is: "<<
         studArray[i].score<< " ";
        cout<<endl;
    }

    struct students s2 = {"DaMoo", 19, 75};
    students * p = &s2;

    p->age = 23;

    cout << "name: "<< p->name <<" age is: "<< p->age <<" score is: "<< p->score<<endl;


    teachers t1;
    t1.id = 1;
    t1.name = "HangHang";
    t1.age = 29;
    t1.stud.age = 18;
    t1.stud.name = "DADA";
    t1.stud.score = 88;

    cout << "t1 name: "<< t1.name <<" t1 age is: "<< t1.age <<
    "t1' student score is: "<< t1.stud.score<<endl;


    return 0;
}