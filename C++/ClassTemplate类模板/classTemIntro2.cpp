#include <iostream>
using namespace std;
// #include "person.cpp"
#include "person.hpp"

void test01(){
    Person<string, int> p1("DaFoo", 6);
    p1.showInfo();
}

int main()
{
    test01();
    return 0;
}