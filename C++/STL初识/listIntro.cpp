#include <iostream>
using namespace std;
#include <list>

void printList(const list<int> &L)
{
    for (list<int>::const_iterator i = L.begin(); i != L.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);

    printList(l1);

    list<int> l2(l1.begin(), l1.end());
    printList(l2);

    list<int> l3(l2);
    printList(l3);

    list<int> l4(10, 1999);
    printList(l4);

    list<int> l5, l6;
    l5 = l2;

    l6.assign(l5.begin(), l5.end());
    printList(l6);
}

void test02(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);

    // list<int> l4(10, 1999);
    // printList(l1);
    // printList(l4);
    
    // l1.swap(l4);
    // printList(l1);
    // printList(l4);

    if(l1.empty()){
        cout<<" empty"<< endl;
    }else{
        cout << "not empty"<< " size:"<<l1.size()<< endl;
    }
}

void test03(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);
    l1.pop_back();
    printList(l1);
    l1.pop_front();
    printList(l1);
    

    l1.insert(++l1.begin(), 1000);
    printList(l1);

    l1.erase(++l1.begin());
    printList(l1);

    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    printList(l1);

    l1.remove(10000);
    printList(l1);

    l1.clear();
    printList(l1);
}

int main()
{
    test03();
    return 0;
}