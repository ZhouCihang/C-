#include <iostream>
using namespace std;
#include <vector>

void printVector(vector<int> &v)
{
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    printVector(v);

    v.pop_back();
    printVector(v);

    v.insert(v.begin(), 100);
    printVector(v);

    v.insert(v.begin(),2, 1000);
    printVector(v);

    v.erase(v.begin());
    printVector(v);


    //清空
    v.erase(v.begin(), v.end());
    printVector(v);
    
}

int main()
{
    test01();
    return 0;
}