// Example of  the use of static binding
//

#include <iostream>
#include "Circle.h" // Using the last interface implementation.

using namespace std;
int main()
{
    Shape* shape = nullptr;
    Circle* circle = nullptr;

    shape = new Shape(10.0, 20.5);
    shape->dynamic_print();  // invokes Shape's print
    cout << endl;

    circle = new Circle(30.0, 10.5, 12.5);
    circle->dynamic_print();  // invokes Circle's print
    cout << endl;
    
    // Upcasting technique, store object of drived class to base class pointer.
    // See link: https://www.tutorialcup.com/cplusplus/upcasting-downcasting.htm
    shape = circle;
    shape->dynamic_print();  // Print() of Shape that is called

    return 0;
}
