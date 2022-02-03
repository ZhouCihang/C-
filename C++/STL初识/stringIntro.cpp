#include <iostream>
using namespace std;

void test()
{
    string s1;
    const char *str = "hello world";
    string s2(str);

    cout << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    string s4(10, 'a');
    cout << s4 << endl;
}

void test01()
{
    string str1;
    str1 = "hello world";
    cout << str1 << endl;

    string str2 = str1;
    cout << str2 << endl;

    string str3;
    str3 = 'a';
    cout << str3 << endl;

    string str4;
    str4.assign("hello world C++");
    cout << str4 << endl;

    string str5;
    str5.assign("hello world", 5);
    cout << str5 << endl;

    string str6;
    str6.assign(str5);
    cout << str6 << endl;

    string str7;
    str6.assign(10, 'w');
    cout << str7 << endl;
}

int main()
{
    test01();
    return 0;
}