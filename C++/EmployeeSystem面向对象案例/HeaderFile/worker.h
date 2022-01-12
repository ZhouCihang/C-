#pragma once
#include <iostream>
using namespace std;

class Worker
{
public:
    //show employee info
    virtual void showInfo() = 0;

    //get department info
    virtual string getDepartmentName() = 0;

    //employee id
    int m_ID;

    //employee name
    string m_Name;

    //department id
    int m_DepartmentID;
};