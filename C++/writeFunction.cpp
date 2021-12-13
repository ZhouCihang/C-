#include <iostream>
using namespace std;
//declare function first function
int add(int num1, int num2);
void swap(int num1, int num2);

int main(){
    int a = 10;
    int b = 20;

    int c = add(a, b);
    cout << c << endl;

    swap(a, b);

    return 0;
}

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2){

    cout<<"before swap: "<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"after swap: "<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
}
