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


    int8_t x=200;
    uint8_t y = 100;
    if (x > y){
        cout << "haha"<< endl;
    }else{
        cout <<"hohoh"<< endl;
    }
    return 0;
}