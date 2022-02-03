#include <iostream>
using namespace std;
#include <string>

void test(){
    string str1 = "hello world world";
    int pos = str1.find("wor");
    cout << pos <<endl;

    pos = str1.rfind("wor");
    cout << pos <<endl;
}

void test01(){
    string str1 = "hello world";
    str1.replace(1, 3,"1111");
    cout << str1 <<endl;
}

int main(){
    test01();
    return 0;
}