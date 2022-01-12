#include "HeaderFile/boss.h"
#include <iostream>
using namespace std;

Boss::Boss(int id, string name, int dId){
    this->m_ID = id;
    this->m_Name = name;
    this->m_DepartmentID = dId;
}

//show employee info
void Boss::showInfo(){
        cout << "职工编号：" << this->m_ID
         << "\t职工姓名：" << this->m_Name
         << "\t岗位：" << this->getDepartmentName()
         << "\t岗位职责：管理公司所有事物。" << endl;
}

//get department info
string Boss::getDepartmentName(){
    return string("老板总裁");
}