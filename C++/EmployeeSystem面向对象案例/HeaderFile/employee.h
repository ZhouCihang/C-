//普通员工
#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Employee : public Worker
{

public:
    Employee(int id, string name, int dId);

    //show employee info
    virtual void showInfo();

    //get department info
    virtual string getDepartmentName();
};