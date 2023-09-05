#include <iostream>
#include <math.h>

#define PI 3.14159
using namespace std;

class Rectangle
{
public:
    int calcArea();
    int calcPeri();
    Rectangle(int l, int w);

private:
    int length;
    int width;
};

int Rectangle::calcArea(){
    return length*width;
}

int Rectangle::calcPeri(){
    return 2*(length+width);
}

Rectangle::Rectangle(int length, int width){
    this->length = length;
    this->width = width;
};

int main()
{
    Rectangle r1(5, 5);
    cout<<r1.calcArea()<<endl;
    cout<<r1.calcPeri();
}