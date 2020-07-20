#pragma once
#include "Shape.h"
class Circle : public Shape // 
{
private:
    double radius;

public:
    // Default constructor
    Circle(int = 0, int = 0, double = 0.0);
    void setRadius(double);               // set radius
    double getRadius() const;               // return radius
    double getDiameter() const;             // return diameter
    double getCircumference() const;        // return circumference
    double getArea() const;                 // return area
    void print() const;                     // output Circle object

    void dynamic_print() const;    // Example of  the use of dynamic binding
};

