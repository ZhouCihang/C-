#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::vector;
using namespace std;

int main(){
    vector<int> text = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

    auto begin = text.begin();
    auto end = text.end();
    auto mid = text.begin() + (end - begin)/2;

    int x;
    cin >> x;

    while(*mid != x && begin < end){
        if (x < *mid){
            end = mid;
            mid = begin + (end - begin)/2;
            cout<<"1. "<<*begin<<*mid<<x<<*end<<endl;
        }else {
            begin = mid;
            mid = begin + (end - begin)/2;
            cout<<"2. "<<*begin<<*mid<<x<<*end<<endl;
        }
    }

    //cout << "hahaha"<<begin<<mid<<endl;
    cout << "hahaha"<< endl;
    return 0;


    

}