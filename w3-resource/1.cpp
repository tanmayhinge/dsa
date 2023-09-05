#include <iostream>
#include <math.h>

#define PI 3.14159
using namespace std;

class Circle
{
public:
    Circle(double radius);
    double calcArea();
    double calcCircum();

private:
    double radius;
};

double Circle::calcArea()
{
    double area;
    area = PI * pow(this->radius, 2);
    return area;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::calcCircum()
{
    double circum;
    circum = 2 * PI * radius;
    return circum;
}

int main()
{
    Circle c1(2);
    cout<< c1.calcArea()<<endl;
    cout<<c1.calcCircum();
}