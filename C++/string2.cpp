#include<iostream>
#include<string>
using namespace std;

int main(){

    string hexi = "0123456789abcdef";
    string result;
    //auto n;
    string::size_type n;

    while(cin>>n) {
        if (n < hexi.size()) {
            result += hexi[n];
        }
    }
    cout<<result<<endl;

    return 0;
}