#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

//function overloading
//creating three functions with same name taking different arguments
int area(int length, int breadth)
{
    return length*breadth;
}

int area(int side)
{
    return side*side;
}

int area(Rectangle rectangle)
{
    return rectangle.length*rectangle.breadth;
}
int main()
{
    Rectangle rectangle;    //creating object
    rectangle.length=10;
    rectangle.breadth= 20;
    cout<< area(rectangle.length, rectangle.breadth)<< '\n';
    cout<< area(rectangle.length)<< '\n';
    cout<< area(rectangle)<< '\n';
}