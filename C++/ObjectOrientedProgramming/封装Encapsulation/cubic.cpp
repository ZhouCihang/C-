#include <iostream>
using namespace std;

class Cubic
{
public:
    void setL(double L)
    {
        m_L = L;
    }

    void setH(double H)
    {
        m_H = H;
    }

    void setW(double W)
    {
        m_W = W;
    }

    double getVolume()
    {
        return m_W * m_L * m_H;
    }

    double getArea()
    {
        return 2 * (m_W * m_H + m_W * m_L + m_H * m_L);
    }

private:
    double m_H, m_L, m_W;
};

int main()
{
    Cubic c1, c2;

    c1.setH(5.0);
    c1.setL(10.0);
    c1.setW(7.0);

    c2.setH(5.0);
    c2.setL(10.0);
    c2.setW(7.0);

    if(c1.getArea() == c2.getArea() && c1.getVolume() == c2.getVolume()){
        cout<< "Area is: " <<c1.getArea() << " Volume is: "<<c2.getVolume()<< endl;
        cout << "Matched"<< endl;
    }else{
        cout << "Unmatched!" << endl;
    }

    return 0;
}