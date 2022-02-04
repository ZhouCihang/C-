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

void test02(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    cout << v.front()<<" "<<v.back()<<endl;
}

void test03(){
    vector<int> v;
    for(int i = 0; i < 10; i++){
        v.push_back(i);
    }
    printVector(v);

    vector<int> v2;
    for (int i =10; i>0; i--){
        v2.push_back(i);
    }
    printVector(v2);

    v.swap(v2);
    printVector(v);
    printVector(v2);
}

void test04(){
    vector<int> v;
    for (int i = 0; i < 100000; i++){
        v.push_back(i);
    }

    cout <<"v capacity "<< v.capacity()<< endl;
    cout <<"v size "<< v.size()<< endl;
    
    v.resize(3);
    cout <<"v capacity "<< v.capacity()<< endl;
    cout <<"v size "<< v.size()<< endl;

    //swap() to reduce memory
    vector<int> (v).swap(v);
    cout <<"v capacity "<< v.capacity()<< endl;
    cout <<"v size "<< v.size()<< endl;
}

int main()
{
    test04();
    return 0;
}