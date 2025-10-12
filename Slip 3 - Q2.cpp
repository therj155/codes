// Slip 3 - Q2
// Write a class 'Point' with x & y as data members.
// Use copy constructor, default and parameterized constructor.

#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    Point() {
        x = 0; y = 0;
    }
    Point(int a, int b) {
        x = a; y = b;
    }
    Point(Point &p) {
        x = p.x; y = p.y;
    }
    void show() {
        cout << "(" << x << "," << y << ")\n";
    }
};

int main() {
    Point p1(2, 3);
    Point p2(p1);
    Point p3;
    p1.show();
    p2.show();
    p3.show();
}
