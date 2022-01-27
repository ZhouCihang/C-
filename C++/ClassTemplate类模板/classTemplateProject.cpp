#include "myArray.hpp"
#include <iostream>
using namespace std;

void printArray(myArray<int> &array)
{
    for (int i = 0; i < array.getSize(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void test01()
{
    myArray<int> arr1(5);
    // myArray<int> arr2(arr1);
    // myArray<int> arr3(100);
    // arr3 = arr1;
    for (int i = 0; i < 5; i++)
    {
        arr1.push_back(i);
    }

    cout << "arr1 print:" << endl;

    printArray(arr1);
    cout << "arr1 capacity:" << arr1.getCapacity() << endl;
    cout << "arr1 size:" << arr1.getSize() << endl;

    myArray<int> arr2(arr1);
    printArray(arr2);
    arr2.pop_back();
    printArray(arr2);
    cout << "arr1 capacity:" << arr2.getCapacity() << endl;
    cout << "arr1 size:" << arr2.getSize() << endl;
}

class Person
{
public:
    Person(){};
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

void printPerson(myArray<Person> &arr){
    for(int i = 0; i < arr.getSize(); i++){
        cout << "Name: "<<arr[i].m_Name <<" Age: "<<arr[i].m_Age <<endl;
    }
}

void test02(){
    myArray<Person> arr(10);
    Person p1("Tom", 10);
    Person p2("Dave", 12);
    Person p3("Bobby", 18);
    Person p4("Mat", 23);

    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    printPerson(arr);

    cout << "arr capacity:" << arr.getCapacity() << endl;
    cout << "arr size:" << arr.getSize() << endl;
    
}

int main()
{
    //test01();
    test02();
    return 0;
}