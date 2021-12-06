#include <iostream>
using namespace std;

int main(){

    int num1 = 0, num2 = 0, num3 = 0;
    cout<<"enter weight of pig 1: "<<endl;
    cin >> num1;

    cout<<"enter weight of pig 2: "<<endl;
    cin >> num2;

    cout<<"enter weight of pig 3: "<<endl;
    cin >> num3;

    cout<<"weight of pig 1: "<<num1<<endl;
    cout<<"weight of pig 2: "<<num2<<endl;
    cout<<"weight of pig 3: "<<num3<<endl;

    if(num1 >= num2){
        if(num1 >= num3){
            cout<<"pig 1 is heaviest"<<endl;
        }else{
            cout<<"pig 3 is heaviest"<<endl;
        }
    } else {
        if(num2 >= num3){
            cout<<"pig 2 is heaviest"<<endl;
        }else{
            cout<<"pig 3 is heaviest"<<endl;
        }
    }

    return 0;
}