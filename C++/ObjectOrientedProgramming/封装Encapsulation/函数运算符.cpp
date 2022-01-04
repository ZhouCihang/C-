#include <iostream>
using namespace std;

class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void test01(){
    MyPrint mp;
    mp("Testing");

    //匿名函数
    MyPrint()("Testiojng ");
}

int main()
{
    test01();
    return 0;
}