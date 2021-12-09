#include <iostream>
using namespace std;

int main(){

    int num;

    for(num = 1; num <= 100; num++){
        if ((num%7 == 0)||(num%10 == 7)||(num/10 == 7)){
            cout << num << endl;
        }    
    }
    
    return 0;
}