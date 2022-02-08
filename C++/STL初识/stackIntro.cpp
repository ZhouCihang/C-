#include <iostream>
using namespace std;
#include <stack>

void test()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    while(!s.empty()){
        cout<<"stack top ele: "<<s.top()<<endl;
        s.pop();
    }

    cout<<"stack size: " << s.size()<<endl;
}

int main()
{
    test();
    return 0;
}