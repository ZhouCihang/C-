//经理类
#pragma once
#include "worker.h"
#include <iostream>
using namespace std;

class Manager : public Worker
{

public:
    Manager(int id, string name, int dId);

    //show employee info
    virtual void showInfo();

    //get department info
    virtual string getDepartmentName();
};