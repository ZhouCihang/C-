#include <iostream>
using namespace std;
#include "HeaderFile/point.h"
#include "HeaderFile/circle.h"

/*class Point
{
public:
    void setX(int x)
    {
        m_X = x;
    }

    int getX()
    {
        return m_X;
    }

    void setY(int y)
    {
        m_Y = y;
    }

    int getY()
    {
        return m_Y;
    }

private:
    int m_X;
    int m_Y;
};

class Circle
{
public:
    void setRadius(int radius)
    {
        m_R = radius;
    }

    int getRadius()
    {
        return m_R;
    }

    void setCenter(Point center)
    {
        m_center = center;
    }

    Point getCenter()
    {
        return m_center;
    }

private:
    int m_R;
    Point m_center;
};*/

void isInCircle(Circle &c, Point &p)
{
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rDistance = c.getRadius() * c.getRadius();

    if (distance == rDistance)
    {
        cout << "Point is on Circle" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "Point is outside Circle" << endl;
    }
    else
    {
        cout << "Point is inside Circle" << endl;
    }
}

int main()
{
    //initial a circle.
    Circle c1;
    c1.setRadius(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);

    Point p1;
    p1.setX(10);
    p1.setY(10);

    isInCircle(c1, p1);
    return 0;
}