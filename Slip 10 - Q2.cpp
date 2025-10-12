// Slip 10 - Q2
// Base class Shape. Derive Circle, Rectangle, Triangle.
// Use pure virtual function to calculate area.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) { r = x; }
    float area() { return 3.14f * r * r; }
};

class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float x, float y) { l = x; b = y; }
    float area() { return l * b; }
};

class Triangle : public Shape {
    float b, h;
public:
    Triangle(float x, float y) { b = x; h = y; }
    float area() { return 0.5f * b * h; }
};

int main() {
    Circle c(5); Rectangle r(4, 6); Triangle t(3, 7);
    cout << "Circle area = " << c.area() << "\n";
    cout << "Rectangle area = " << r.area() << "\n";
    cout << "Triangle area = " << t.area() << "\n";
}
