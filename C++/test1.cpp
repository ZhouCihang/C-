#include<iostream>
using namespace std;

int main(){
    int i, &ri = i;
    i = 0;
    ri = 10;
    int *p = &i;
    int *p1 = 0;
    std::cout<<i<<" "<<p<<" "<<p1<<std::endl;
    return 0;
}

struct Sales_data{

    string bookNo;  
    unsigned int unit_sold = 0;
    double revenue = 0.0;
};  