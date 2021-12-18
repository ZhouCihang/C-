#include <iostream>
using namespace std;

struct hero
{
    string name;
    int age;
    string gender;
};

void sortArray(struct hero arrHero[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arrHero[j].age > arrHero[j + 1].age)
            {
                struct hero temp = arrHero[j];
                arrHero[j] = arrHero[j + 1];
                arrHero[j + 1] = temp;
            }
        }
    }
    cout << "HHHAAA" << endl;

    /*for (int i = 0; i < 5; i++)
    {
        cout << arrHero[i].name << " " << arrHero[i].age << " " << arrHero[i].gender << endl;
    }*/
    
}

void printArray(struct hero arrHero[], int len){
    for (int i = 0; i < 5; i++)
    {
        cout << arrHero[i].name << " " << arrHero[i].age << " " << arrHero[i].gender << endl;
    }
}

int main()
{
    string name[5] = {"LiuBei", "GuanYu", "ZhangFei", "ZhaoYun", "DiaoChan"};
    int age[5] = {24, 22, 20, 21, 19};
    string gender[5] = {"Male", "Male", "Male", "Male", "Female"};

    struct hero arrHero[5];

    for (int i = 0; i < 5; i++)
    {
        arrHero[i].name = name[i];
        arrHero[i].age = age[i];
        arrHero[i].gender = gender[i];
        //cout << arrHero[i].name << " " << arrHero[i].age << " " << arrHero[i].gender << endl;
    }

    printArray(arrHero,5);
    sortArray(arrHero, 5);
    printArray(arrHero,5);
    return 0;
}