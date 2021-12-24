#include <iostream>
using namespace std;

void showValue(int &val){
    val = 1000;
    cout << val << endl;
}

int main(){

    int a = 100;
    showValue(a);
    cout << a << endl;
    //int temp = 10; const int & ref = temp;
    //const int & ref = 10;

    return 0;
}