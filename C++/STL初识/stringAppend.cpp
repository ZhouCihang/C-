#include <iostream>
using namespace std;

void test(){
    string str1 = "hello";
    string str2 = " world";

    cout<< str1 + str2 << endl;

    string str3 = "hello";
    str3 += " world C++";
    cout<< str3<< endl;

    str1 += str3;
    cout<< str1<< endl;


    string str4 = "hello";
    str4.append(" world C++ yeah");
    cout <<str4<< endl;

    str4.append(str2);
    cout<< str4<< endl;

    str2.append(str4, 2, 5);
    cout<< str2<< endl;
}

int main(){
    test();
    return 0;
}