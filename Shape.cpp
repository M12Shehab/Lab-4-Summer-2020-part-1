#include<iostream>
using namespace std;

#include "Shape.h"              // Link the header file with cpp

// constructor
Shape::Shape(int xValue, int yValue) {
    x = xValue;
    y = yValue;
}

// set x in coordinate pair
void Shape::setX(int xValue) {
    x = xValue;
}

// return x from coordinate pair
int Shape::getX() const {
    return x;
}

// set y in coordinate pair
void Shape::setY(int yValue) {
    y = yValue;
}

// return y from coordinate pair
int Shape::getY() const {
    return y;
}

// output Shape object
void Shape::print() const {
    cout << "Point::print() is called" << endl;
    cout << '[' << getX() << ", " << getY() << ']';
}

// Example of  the use of dynamic binding
void Shape::dynamic_print() const
{
    cout << "Point::dynamic_print() is called" << endl;
    cout << '[' << getX() << ", " << getY() << ']';
}
