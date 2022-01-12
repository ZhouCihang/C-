#include "HeaderFile/manager.h"
#include <iostream>
using namespace std;

Manager::Manager(int id, string name, int dId)
{
    this->m_ID = id;
    this->m_Name = name;
    this->m_DepartmentID = dId;
}

//show employee info
void Manager::showInfo()
{
    cout << "职工编号：" << this->m_ID
         << "\t职工姓名：" << this->m_Name
         << "\t岗位：" << this->getDepartmentName()
         << "\t岗位职责：完成老板交给的任务，并下发任务给员工。" << endl;
}

//get department info
string Manager::getDepartmentName()
{
    return string("经理");
}
