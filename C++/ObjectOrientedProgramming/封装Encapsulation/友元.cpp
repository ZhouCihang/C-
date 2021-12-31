#include <iostream>
using namespace std;

class Building
{
    friend void goodDay(Building *building);

public:
    Building()
    {
        m_SittingRoom = "Living room";
        m_Bedroom = "Bedroom";
    }

public:
    string m_SittingRoom;

private:
    string m_Bedroom;
};

void goodDay(Building *building)
{

    cout << building->m_SittingRoom << endl;
    cout << building->m_Bedroom << endl;
}

void test01()
{
    Building bd;
    goodDay(&bd);
}

int main()
{
    test01();
    return 0;
}
//happy new year!!!