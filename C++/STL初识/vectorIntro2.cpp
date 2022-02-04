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
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    printVector(v);

    vector<int> v2(v.begin(), v.end());
    printVector(v2);

    vector<int> v3(10, 100);
    printVector(v3);

    vector<int> v4(v3);
    printVector(v4);
}

void test02()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    printVector(v);

    //operator =
    vector<int> v2;
    v2 = v;
    printVector(v2);

    vector<int> v3;
    v3.assign(v.begin(), v.end());
    printVector(v3);

    vector<int> v4;
    ;
    v4.assign(10, 100);
    printVector(v4);
}

void test03()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 is not empty" << endl;
        cout << v1.capacity() << endl;
        cout << v1.size() << endl;
    }

    v1.resize(18, 100);
    printVector(v1);
    cout << v1.capacity() << endl;
    cout << v1.size() << endl;
}

int main()
{
    test03();
    return 0;
}