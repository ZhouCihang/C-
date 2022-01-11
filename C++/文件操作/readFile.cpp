#include <iostream>
using namespace std;
#include <fstream>

void test01()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "Error to open files" << endl;
        return;
    }

    /*char buf[1024] = {0};
    while(ifs>>buf){
        cout << buf << endl;
    }*/

    /*char buf[1024] = {0};
    while(ifs.getline(buf, sizeof(buf))){
        cout << buf << endl;
    }*/

    string buf;
    while(getline(ifs, buf)){
        cout << buf << endl;
    }

    /*char c;
    while((c = ifs.get()) != EOF){
        cout << c;
    }*/

    ifs.close();
}

int main()
{
    test01();
    return 0;
}