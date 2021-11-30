#include<iostream>
#include<string>
#include"Sales_data.h"
using namespace std;

int main() {
    cout<<"Welcome"<<endl;
    double price = 0.0;
    Sales_data data1, data2;

    std::cin>>data1.bookNo>>data1.unit_sold>>price>>data1.unit_stock;
    data1.revenue = price * data1.unit_sold;
    std::cin>>data2.bookNo>>data2.unit_sold>>price>>data2.unit_stock;
    data2.revenue = price * data2.unit_sold;

    cout<<"R1 "<<data1.unit_stock<<"R2 "<<data2.unit_stock<<endl;

    if(data1.bookNo == data2.bookNo) {
        unsigned int totalCount = data1.unit_sold + data2.unit_sold;
        cout<<"Total count: "<<totalCount<<endl;

        if(totalCount != 0){
            cout<<"Average: "<<(data1.revenue + data2.revenue)/totalCount<<endl;
        }

        return 0;
    }else{
        cerr<<"Data must refer to the same ISBN"<<endl;
        return -1;
    }
}