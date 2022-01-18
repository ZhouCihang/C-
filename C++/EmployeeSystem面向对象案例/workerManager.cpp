#include "HeaderFile/workerManager.h"
#include "HeaderFile/employee.h"
#include "HeaderFile/manager.h"
#include "HeaderFile/boss.h"

WorkerManager::WorkerManager()
{
    // 1. if file is not exists
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    if (!ifs.is_open())
    {
        cout << "文件不存在！" << endl;

        //initialize the status
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_fileExist = true;
        ifs.close();
        return;
    }

    //2. if file exists, but empty.
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "文件为空！" << endl;
        //initialize the status
        this->m_EmpNum = 0;
        this->m_EmpArray = NULL;
        this->m_fileExist = true;
        ifs.close();
        return;
    }

    //3. if file exists and is not empty
    int num = this->get_EmpNum();
    // cout << "职工人数为：" << num << endl;
    this->m_EmpNum = num;

    this->m_EmpArray = new Worker *[this->m_EmpNum];
    this->init_Emp();
    // for (int i = 0; i < this->m_EmpNum; i++){
    //     cout << this->m_EmpArray[i]->m_ID << " "
    //         << this->m_EmpArray[i]->m_Name << " "
    //         << this->m_EmpArray[i]->m_DepartmentID << endl;
    // }
}

void WorkerManager::showMenu()
{
    cout << endl;
    cout << "***************************************" << endl;
    cout << "********* 欢迎使用职工管理系统！*******" << endl;
    cout << "*********** 0. 退出管理系统 ***********" << endl;
    cout << "*********** 1. 增加职工信息 ***********" << endl;
    cout << "*********** 2. 显示职工信息 ***********" << endl;
    cout << "*********** 3. 删除离职职工 ***********" << endl;
    cout << "*********** 4. 修改职工信息 ***********" << endl;
    cout << "*********** 5. 查找职工信息 ***********" << endl;
    cout << "*********** 6. 按照编号排序 ***********" << endl;
    cout << "*********** 7. 清空所有文档 ***********" << endl;
    cout << "***************************************" << endl;
    cout << endl;
}

void WorkerManager::ExitSystem()
{
    cout << "欢迎下次使用～" << endl;
    system("read -p 'Press Enter Any Key to continue...' var");
    exit(0);
}

void WorkerManager::AddEmp()
{
    cout << "请输入添加职工人数。" << endl;
    int addNum;
    cin >> addNum;

    if (addNum > 0)
    {
        int newSize = this->m_EmpNum + addNum;
        Worker **newSpace = new Worker *[newSize];

        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }
        }

        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;

            cout << "请输入第" << i + 1 << "个职工的编号：" << endl;
            cin >> id;

            cout << "请输入第" << i + 1 << "个职工的姓名：" << endl;
            cin >> name;

            cout << "请输入第" << i + 1 << "个职工的部门：" << endl;
            cout << "1.普通员工" << endl;
            cout << "2.经理" << endl;
            cout << "3.老板" << endl;
            cin >> dSelect;

            Worker *worker = NULL;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                break;
            }
            newSpace[this->m_EmpNum + i] = worker;
        }

        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNum = newSize;
        this->m_fileExist = false;
        cout << "成功添加" << addNum << "名新员工。" << endl;

        save();
    }
    else
    {
        cout << "输入数据有误。" << endl;
    }
    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);

    for (int i = 0; i < this->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_ID << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->m_DepartmentID << endl;
    }
    ofs.close();
}

int WorkerManager::get_EmpNum()
{
    ifstream ifs;

    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        num++;
    }
    ifs.close();
    return num;
}

void WorkerManager::init_Emp()
{

    ifstream ifs;

    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        Worker *worker = NULL;
        if (dId == 1)
        {
            worker = new Employee(id, name, dId);
        }
        else if (dId == 2)
        {
            worker = new Manager(id, name, dId);
        }
        else
        {
            worker = new Boss(id, name, dId);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
    ifs.close();
}

void WorkerManager::show_EmpInfo()
{
    if (this->m_fileExist == true)
    {
        cout << "文件不存在。" << endl;
    }
    else
    {
        for (int i = 0; i < this->m_EmpNum; i++)
        {
            this->m_EmpArray[i]->showInfo();
        }
    }

    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != NULL)
    {
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}