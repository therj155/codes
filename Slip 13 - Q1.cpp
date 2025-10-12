// Slip 13 - Q1
// Function overloading to calculate area of cone, sphere, circle.

#include <iostream>
using namespace std;

float area(float r) { return 3.14f * r * r; }
float area(float r, int h) { return 3.14f * r * (r + h); }
float area(double r) { return 4 * 3.14 * r * r; }

int main() {
    cout << "Circle area = " << area(5.0f) << "\n";
    cout << "Cone area = " << area(3.0f, 4) << "\n";
    cout << "Sphere area = " << area(6.0) << "\n";
}
