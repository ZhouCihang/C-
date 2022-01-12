#include <iostream>
using namespace std;
#include "HeaderFile/workerManager.h"
#include "HeaderFile/worker.h"
#include "HeaderFile/employee.h"

int main()
{
    Worker * worker = NULL;
    worker = new Employee(1, "张三", 1);
    worker->showInfo();

    WorkerManager wm;

    int choice;
    while (true)
    {
        wm.showMenu();
        cout << "请输入您的选项：" << endl;
        cin >> choice;
        switch (choice)
        {
            //0. 退出管理系统
        case 0:
            wm.ExitSystem();
            break;
            //1. 增加职工信息
        case 1:
            break;
            //2. 显示职工信息
        case 2:
            break;
            //3. 删除离职职工
        case 3:
            break;
            //4. 修改职工信息
        case 4:
            break;
            //5. 查找职工信息
        case 5:
            break;
            //6. 按照编号排序
        case 6:
            break;
            //7. 清空所有文档
        case 7:
            break;

        default:
            break;
        }
    }
    return 0;
}

//Compile command
//cd "/Users/zhoucihang/Study-On-CPP/C++/EmployeeSystem面向对象案例/" && g++ employeeSystem.cpp workerManager.cpp -o employeeSystem -std=c++11 && "/Users/zhoucihang/Study-On-CPP/C++/EmployeeSystem面向对象案例/"employeeSystem