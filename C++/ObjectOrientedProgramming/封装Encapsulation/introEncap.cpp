#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
    //访问权限
    //公共权限
public:

    //属性
    //半径
    int m_radius;

    //行为
    //获取圆的周长
    double calculateCirlLength()
    {
        return 2 * PI * m_radius;
    }
};

int main()
{
    //通过圆类， 创建圆的对象
    //circle就是一个具体的圆
    Circle circle;
    circle.m_radius = 10;
    cout << "圆的周长： "<< circle.calculateCirlLength()<<endl;
    return 0;
}