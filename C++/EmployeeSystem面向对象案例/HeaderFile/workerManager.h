//防止头文件重复包含
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:
    WorkerManager();

    void showMenu();

    void ExitSystem();

    //add employee to system
    void AddEmp();

    void save();

    //check file whether exists
    bool m_fileExist;

    //count　employee number in the system
    int get_EmpNum();

    //initialize worker
    void init_Emp();

    //show employee info
    void show_EmpInfo();

    //delete employee from system
    void delete_Emp();

    //modify employee
    void ModifyEmp();
    
    //check employee exist
    int isExist(int id);

    //recored employee number
    int m_EmpNum;

    //pointer point to array
    Worker **m_EmpArray;

    ~WorkerManager();
};