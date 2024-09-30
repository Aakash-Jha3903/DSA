#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for calculating area
    virtual void area() {
        cout << "Calculating area of a shape." << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
public:
    void area() override { 
        // Override the base class function
        cout << "Calculating area of a Circle." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void area() override { 
        // Override the base class function
        cout << "Calculating area of a Rectangle." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();    // Base class pointer to Circle object
    Shape* shape2 = new Rectangle(); // Base class pointer to Rectangle object

    shape1->area(); // Calls Circle's version of area()
    shape2->area(); // Calls Rectangle's version of area()

    delete shape1; // Clean up
    delete shape2;

    return 0;
}
