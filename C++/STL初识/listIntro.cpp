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

    list<int> l4(10, 1999);
    printList(l1);
    printList(l4);
    
    l1.swap(l4);
    printList(l1);
    printList(l4);
}

int main()
{
    test02();
    return 0;
}