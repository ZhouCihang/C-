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

void test02(){
    string str1 = "hello world";
    string str2 = "hello world";

    if(str1.compare(str2) == 0){
        cout<<"equal"<<endl;
    }
}

void test03(){
    string str = "hello";
    for (int i=0; i<str.size(); i++){
        cout << str[i]<< " ";
        cout<< str.at(i)<< " ";
    }
    cout << endl;

    str[0] = 'x';
    str.at(1) = 'x';
    cout <<str<< endl;
}

int main(){
    test03();
    return 0;
}