#include <iostream>
using namespace std;

class CPU
{
public:
    virtual void calculate() = 0;
};

class GPU
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *cpu, GPU *gpu, Memory *memory)
    {
        m_cpu = cpu;
        m_gpu = gpu;
        m_memory = memory;
    }

    void work()
    {
        m_cpu->calculate();
        m_gpu->display();
        m_memory->storage();
    }

    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_gpu != NULL)
        {
            delete m_gpu;
            m_gpu = NULL;
        }
        if (m_memory != NULL)
        {
            delete m_memory;
            m_memory = NULL;
        }
    }

private:
    CPU *m_cpu;
    GPU *m_gpu;
    Memory *m_memory;
};

class IntelCPU : public CPU
{
public:
    void calculate()
    {
        cout << "Intel CPU is working" << endl;
    }
};

class LenovoCPU : public CPU
{
public:
    void calculate()
    {
        cout << "Lenovo CPU is working" << endl;
    }
};

class IntelGPU : public GPU
{
public:
    void display()
    {
        cout << "Intel GPU is working" << endl;
    }
};

class LenovoGPU : public GPU
{
public:
    void display()
    {
        cout << "Lenovo GPU is working" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    void storage()
    {
        cout << "Intel storage is working" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    void storage()
    {
        cout << "Lenovo storage is working" << endl;
    }
};

void test01()
{
    CPU *intelCPU = new IntelCPU;
    GPU *intelGPU = new IntelGPU;
    Memory *intelMemory = new IntelMemory;

    Computer *pc1 = new Computer(intelCPU, intelGPU, intelMemory);
    pc1->work();
    delete pc1;

    Computer *pc2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
    pc2->work();
    delete pc2;

    Computer *pc3 = new Computer(new IntelCPU, new LenovoGPU, new LenovoMemory);
    pc3->work();
    delete pc3;
}

int main()
{
    test01();
    return 0;
}