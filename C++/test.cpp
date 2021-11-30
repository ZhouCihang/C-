#include<iostream>
#include "Sales_item.h"
using namespace std;
//using SI = Sales_item;
typedef Sales_item SI;


int main(){
    //Sales_item total;
    SI total;

    if(cin>>total){
        Sales_item trans;

        int i = 3.14;
        cout<<i<<endl;
        while(cin>>trans){
            if(total.isbn == trans.isbn){
                total += trans;
            }
            else {
                cout<<total<<endl;
                total = trans;
            }
        }
        cout<<total<<endl;
    }
    else{

        cerr<<"No data"<<endl;
        return -1;
    }

    return 0;
}