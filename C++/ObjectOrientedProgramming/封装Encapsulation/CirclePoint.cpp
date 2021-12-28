#include <iostream>
using namespace std;
#include "HeaderFile/point.h"
#include "HeaderFile/circle.h"

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

    //initial a point
    Point p1;
    p1.setX(10);
    p1.setY(10);

    isInCircle(c1, p1);
    return 0;
}