#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speak." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat speak." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog speak." << endl;
    }
};

//地址早绑定，在编译阶段确定函数地址。
//如果想让猫说话，地址不可以早绑定，在运行阶段绑定，晚绑定。加virtual
void doSpeak(Animal &animal){ //Animal & animal = cat;
    animal.speak();
}


void test01(){
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test02(){
    cout<<"Animal Sizeof = "<<sizeof(Animal)<< endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}