//#include <iostream>
//using namespace std;
#include "ABCheader/swap.h"

void swap(int num1, int num2)
{

    cout << "before swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "after swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}