#include "HeaderFile/circle.h"

void Circle::setRadius(int radius)
{
    m_R = radius;
}

int Circle::getRadius()
{
    return m_R;
}

void Circle::setCenter(Point center)
{
    m_center = center;
}

Point Circle::getCenter()
{
    return m_center;
}