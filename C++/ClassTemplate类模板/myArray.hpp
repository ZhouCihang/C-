#pragma once
#include <iostream>
using namespace std;

template <class T>
class myArray
{
public:
    myArray(int capacity)
    {
        cout << "myArray constructor called!" << endl;
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    myArray(const myArray &arr)
    {
        cout << "myArray Copy constructor called!" << endl;
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;

        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //a=b=c
    myArray &operator=(const myArray &arr)
    {
        cout << "myArray operator= called!" << endl;
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }

        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //add element to behide
    void push_back(const T &val)
    {
        if (this->m_Capacity == this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = val;
        this->m_Size++;
    }

    void pop_back()
    {
        if (this->m_Size == 0)
        {
            return;
        }
        this->m_Size--;
    }

    T &operator[](int index)
    {
        return this->pAddress[index];
    }

    int getCapacity(){
        return this->m_Capacity;
    }

    int getSize(){
        return this->m_Size;
    }

    ~myArray()
    {
        cout << "myArray deconstructor called!" << endl;
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

private:
    T *pAddress;
    int m_Capacity;
    int m_Size;
};