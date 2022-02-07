#include <iostream>
using namespace std;
#include <deque>

void printDeque(const deque<int>& d){
    for(deque<int>::const_iterator i = d.begin(); i != d.end();i++){
        cout << *i << " ";
    }
    cout << endl;
}

void test(){
    deque<int> d1;
    for(int i = 0; i < 10; i++){
        d1.push_back(i);
    }
    printDeque(d1);
}

int main(){
    test();
    return 0;
}