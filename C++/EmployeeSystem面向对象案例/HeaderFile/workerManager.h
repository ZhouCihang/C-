//防止头文件重复包含
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class WorkerManager
{
public:
    WorkerManager();

    void showMenu();

    void ExitSystem();

    //add employee to system
    void AddEmp();

    //recored employee number
    int m_EmpNum;

    //pointer point to array
    Worker **m_EmpArray;

    ~WorkerManager();
};