#include <iostream>
using namespace std;

void func(){
    cout<<"Call for func()"<<endl;
}

void func(int a){
    cout<<"Call for func(int a)"<<endl;
}

void func(double a){
    cout<<"Call for func(double a)"<<endl;
}

void func(int a, double b){
    cout<<"Call for func(int a, double b)"<<endl;
}

void func(double a, int b){
    cout<<"Call for func(double a, int b)"<<endl;
}

int main(){
    func();
    func(12);
    func(3.14);
    func(2, 3.14);
    func(3.14, 5);
    return 0;
}