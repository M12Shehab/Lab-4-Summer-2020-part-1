#include<iostream>
using namespace std;

#include "Circle.h" // Link the header file with cpp

// Constructor
Circle::Circle(int xValue, int yValue, double radiusValue) : Shape(xValue, yValue) {
    radius = radiusValue;
}

// set radius 
void Circle::setRadius(double radiusValue) {
    radius = radiusValue;
}

// return radius 
double Circle::getRadius() const {
    return radius;
}

// calculate and return diameter
double Circle::getDiameter() const {
    return 2 * getRadius();
}

// calculate and return circumference
double Circle::getCircumference() const {
    return 3.14159 * getDiameter();
}
// calculate and return area
double Circle::getArea() const {
    return 3.14159 * getRadius() * getRadius();
}

// output Circle object
void Circle::print() const {
    cout << "Circle::print() is called" << endl;
    cout << "Center = " << getX() << ", " << getY() << endl;
    cout << "Radius = " << getRadius();
}

void Circle::dynamic_print() const
{
    cout << "Circle::dynamic_print() is called" << endl;
    cout << "Center = " << getX() << ", " << getY() << endl;
    cout << "Radius = " << getRadius();
}
