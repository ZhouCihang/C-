#include <iostream>
using namespace std;

class Drink
{
public:
    virtual void boilWater() = 0;
    virtual void brew() = 0;
    virtual void pourCup() = 0;
    virtual void addMaterials() = 0;

    void makeDrink()
    {
        boilWater();
        brew();
        pourCup();
        addMaterials();
    }
};

class Coffee : public Drink
{
public:
    virtual void boilWater(){
        cout<<"Boid Water"<<endl;
    }
    virtual void brew(){
        cout<<"Brew Coffee"<<endl;
    }
    virtual void pourCup(){
        cout<< "Pour to coffee cup"<<endl;
    }
    virtual void addMaterials(){
        cout<<"Add sugar and milk"<<endl;
    }
};

class Tea : public Drink
{
public:
    virtual void boilWater(){
        cout<<"Boid Water"<<endl;
    }
    virtual void brew(){
        cout<<"Brew Tea"<<endl;
    }
    virtual void pourCup(){
        cout<< "Pour to tea cup"<<endl;
    }
    virtual void addMaterials(){
        cout<<"Add Lemon"<<endl;
    }
};

void doWork(Drink * drink){
    drink->makeDrink();
    delete drink;
}
void test01(){
    doWork(new Coffee);
    doWork(new Tea);
}

int main()
{
    test01();
    return 0;
}