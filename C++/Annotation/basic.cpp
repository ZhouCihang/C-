#include <iostream>
using namespace std;

int main(){

    int a = 100;
    int &b = a;

    cout << a << " " << b << endl;

    b = 1000;
    cout << a << " " << b << endl;

    return 0;
}