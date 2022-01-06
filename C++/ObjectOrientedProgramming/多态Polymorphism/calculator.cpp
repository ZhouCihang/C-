#include <iostream>
using namespace std;

class Calculator
{
public:
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }

        //如果想扩展新的功能，需要修改源码。
    }

    int m_Num1, m_Num2;
};

void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 20;

    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1, m_Num2;
};

class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

class MinusCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

class MulCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test02()
{
    //add function
    AbstractCalculator *ac = new AddCalculator;
    ac->m_Num1 = 10;
    ac->m_Num2 = 20;
    cout << ac->m_Num1 << " + " << ac->m_Num2 << " = " << ac->getResult() << endl;
    delete ac;

    //Minus
    ac = new MinusCalculator;
    ac->m_Num1 = 10;
    ac->m_Num2 = 20;
    cout << ac->m_Num1 << " - " << ac->m_Num2 << " = " << ac->getResult() << endl;
    delete ac;

    //Multiplex
    ac = new MulCalculator;
    ac->m_Num1 = 10;
    ac->m_Num2 = 20;
    cout << ac->m_Num1 << " * " << ac->m_Num2 << " = " << ac->getResult() << endl;
    delete ac;
}

int main()
{
    //test01();
    test02();
    return 0;
}