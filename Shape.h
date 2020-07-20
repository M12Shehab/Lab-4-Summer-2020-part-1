#pragma once
class Shape
{
private:
    int x;  // x part of coordinate pair
    int y;  // y part of coordinate pair

public:
    Shape(int = 0, int = 0);      // default constructor
    void setX(int);                 // set x in coordinate pair
    int getX() const;               // return x from coordinate pair
    void setY(int);               // set y in coordinate pair
    int getY() const;               // return y from coordinate pair
    void print() const;             // output Shape object 
    
    virtual void dynamic_print() const;    // Example of  the use of dynamic binding

};

