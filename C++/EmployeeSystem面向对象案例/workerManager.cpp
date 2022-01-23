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

//delete employee from system
void WorkerManager::delete_Emp()
{
    if (this->m_fileExist)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        cout << "请输入想要删除的职工编号：" << endl;
        int id;
        cin >> id;

        int index = this->isExist(id);
        if (index != -1)
        {
            for (int i = index; i < this->m_EmpNum - 1; i++)
            {

                //数据前移
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            this->m_EmpNum--;

            //Update data
            this->save();
        }
        else
        {
            cout << "删除失败，找到该职工!" << endl;
        }
        system("read -p 'Press Enter to continue...' var");
        system("clear");
    }
}

//check employee exist
int WorkerManager::isExist(int id)
{
    int index = -1;

    for (int i = 0; i < this->m_EmpNum; i++)
    {
        if (this->m_EmpArray[i]->m_ID == id)
        {
            index = i;
            break;
        }
    }
    return index;
}

//modify employee info
void WorkerManager::ModifyEmp()
{
    if (this->m_fileExist)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        cout << "请输入想要修改的职工编号：" << endl;
        int id;
        cin >> id;

        int ret = this->isExist(id);
        if (ret != -1)
        {
            //find the person

            // delete this->m_EmpArray[ret];

            int newId = 0;
            string newName = "";
            int dSelect = 0;

            cout << "查到：" << id << "号的职工，请输入新的职工号：" << endl;
            cin >> newId;
            cout << "请输入新的姓名：" << endl;
            cin >> newName;
            cout << "请输入新的岗位：" << endl;
            cout << "1.普通员工" << endl;
            cout << "2.经理" << endl;
            cout << "3.老板" << endl;
            cin >> dSelect;

            Worker *worker = NULL;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(newId, newName, 1);
                break;
            case 2:
                worker = new Manager(newId, newName, 2);
                break;
            case 3:
                worker = new Boss(newId, newName, 3);
                break;
            default:
                break;
            }
            this->m_EmpArray[ret] = worker;
            cout << "修改成功！" << endl;
            this->save();
        }
        else
        {
            cout << "修改失败，找到该职工!" << endl;
        }
        system("read -p 'Press Enter to continue...' var");
        system("clear");
    }
}

void WorkerManager::find_Emp()
{
    if (this->m_fileExist)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        cout << "请输入您想要查找的方式：" << endl;
        cout << "1.根据职工编号查找：" << endl;
        cout << "2.根据职工姓名查找：" << endl;
        int select;
        cin >> select;

        if (select == 1)
        {
            cout << "请输入想要查找的职工编号：" << endl;
            int id;
            cin >> id;
            int ret = this->isExist(id);
            if (ret != -1)
            {
                this->m_EmpArray[ret]->showInfo();
            }
            else
            {
                cout << "查找失败，找不到该职工!" << endl;
            }
        }
        else if (select == 2)
        {
            cout << "请输入想要查找的职工姓名：" << endl;
            string name;
            cin >> name;

            bool flag = false;
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                if (this->m_EmpArray[i]->m_Name == name)
                {
                    this->m_EmpArray[i]->showInfo();
                    flag = true;
                }
            }
            if (flag == false)
            {
                cout << "查找失败，找不到该职工!" << endl;
            }
        }
        else
        {
            cout << "输入选项有误！" << endl;
        }

        system("read -p 'Press Enter to continue...' var");
        system("clear");
    }
}

void WorkerManager::sort_Emp()
{
    if (this->m_fileExist)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        cout << "请输入您想要排序的方式：" << endl;
        cout << "1.升序" << endl;
        cout << "2.降序" << endl;
        int select;
        cin >> select;

        for (int i = 0; i < this->m_EmpNum - 1; i++)
        {
            for (int j = 0; j < this->m_EmpNum - i - 1; j++)
            {
                if (select == 1)
                {
                    if (this->m_EmpArray[j]->m_ID > this->m_EmpArray[j + 1]->m_ID)
                    {
                        Worker *temp = this->m_EmpArray[j];
                        this->m_EmpArray[j] = this->m_EmpArray[j + 1];
                        this->m_EmpArray[j + 1] = temp;
                    }
                }
                if (select == 2)
                {
                    if (this->m_EmpArray[j]->m_ID < this->m_EmpArray[j + 1]->m_ID)
                    {
                        Worker *temp = this->m_EmpArray[j];
                        this->m_EmpArray[j] = this->m_EmpArray[j + 1];
                        this->m_EmpArray[j + 1] = temp;
                    }
                }
            }
        }
        cout << "排序成功：" << endl;
        this->show_EmpInfo();
    }
}

void WorkerManager::clear_Emp()
{
    cout << "是否确定清空？" << endl;
    cout << "1.确定" << endl;
    cout << "2.返回" << endl;
    int select;
    cin >> select;

    if (select == 1)
    {
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();

        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                delete this->m_EmpArray[i];
                this->m_EmpArray[i] = NULL;
            }
            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_EmpNum = 0;
            this->m_fileExist = true;
            cout << "清除成功！" << endl;
        }
    }
    system("read -p 'Press Enter to continue...' var");
    system("clear");
}

WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != NULL)
    {
        for (int i = 0; i < this->m_EmpNum; i++)
        {
            delete this->m_EmpArray[i];
            this->m_EmpArray[i] = NULL;
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}