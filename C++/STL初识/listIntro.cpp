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

bool myCompare(int v1, int v2){
    return v1 >v2;
}
void test04(){
    list<int> l1;
    l1.push_back(20);
    l1.push_back(100);
    l1.push_back(30);
    l1.push_back(700);
    l1.push_back(60);
    
    printList(l1);
    //l1[0] or l1.at(0) cannot access list, 
    cout<<"first element: "<<l1.front()<< endl;
    cout<<"last element: "<<l1.back()<< endl;
    
    list<int>::iterator it = l1.begin();
    it++;
    it--;
    //it = it + 1; 不支持随机访问

    l1.reverse();
    printList(l1);


    //所有不支持随机访问迭代器的容器，不可以用标准算法<algorithm>
    //#include <algorithm> sort(l1.begin(), l1.end());
    l1.sort();
    printList(l1);
    l1.sort(myCompare);
    printList(l1);
}


int main()
{
    test04();
    return 0;
}