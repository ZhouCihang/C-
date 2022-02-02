#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int val){
    cout<<val;
    cout<<endl;
}

void test01(){

    //initialize
    vector<int> v;

    //add a vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //print a vector
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    //1 method
    while(itBegin != itEnd){
        cout<<*itBegin<<endl;
        itBegin++;
    }

    //2 method
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }

    //3 method STL provide algo
    for_each(v.begin(), v.end(),myPrint);

}

int main(){

    test01();
    return 0;
}