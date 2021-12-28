#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
    void setRadius(int radius);
    int getRadius();

    void setCenter(Point center);

    Point getCenter();

private:
    int m_R;
    Point m_center;
};