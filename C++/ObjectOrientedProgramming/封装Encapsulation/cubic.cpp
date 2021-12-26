#include <iostream>
using namespace std;

class Cubic
{
public:
    void setL(double L)
    {
        m_L = L;
    }

    double getL()
    {
        return m_L;
    }

    void setH(double H)
    {
        m_H = H;
    }

    double getH()
    {
        return m_H;
    }

    void setW(double W)
    {
        m_W = W;
    }

    double getW()
    {
        return m_W;
    }

    double getVolume()
    {
        return m_W * m_L * m_H;
    }

    double getArea()
    {
        return 2 * (m_W * m_H + m_W * m_L + m_H * m_L);
    }

    bool isSameInClass(Cubic &c)
    {
        if (getH() == c.getH() && getL() == c.getL() && getW() == c.getW())
        {
            return true;
        }
        return false;
    }

private:
    double m_H, m_L, m_W;
};

bool isSame(Cubic &c1, Cubic &c2)
{
    if (c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW())
    {
        return true;
    }
    return false;
}

int main()
{
    Cubic c1, c2;

    c1.setH(5.0);
    c1.setL(10.0);
    c1.setW(7.0);

    c2.setH(5.0);
    c2.setL(10.0);
    c2.setW(7.0);

    if (c1.getArea() == c2.getArea() && c1.getVolume() == c2.getVolume())
    {
        cout << "Area is: " << c1.getArea() << " Volume is: " << c2.getVolume() << endl;
        cout << "Matched" << endl;
    }
    else
    {
        cout << "Unmatched!" << endl;
    }

    bool ret = isSame(c1, c2);
    if (ret)
    {
        cout << "Matched!!!!" << endl;
    }
    else
    {
        cout << "Unmatched!!!!" << endl;
    }

    bool ret2 = c1.isSameInClass(c2);
    if (ret2)
    {
        cout << "Matched$$$$" << endl;
    }
    else
    {
        cout << "Unmatched$$$$" << endl;
    }

    return 0;
}