// Slip 22 - Q2
// Class Point(x,y). Operator overloading (-) to find distance.
// Use friend function.

#include <iostream>
#include <math.h>
using namespace std;

class Point {
public:
    int x, y;
    void accept() { cin >> x >> y; }
    friend float operator-(Point a, Point b);
};

float operator-(Point a, Point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Point p1, p2;
    cout << "Enter p1: "; p1.accept();
    cout << "Enter p2: "; p2.accept();
    cout << "Distance = " << (p1 - p2) << "\n";
}
