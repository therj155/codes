// Slip 12 - Q1
// Print area of circle, square using inline function.

#include <iostream>
using namespace std;

inline float circle(int r) { return 3.14f * r * r; }
inline int square(int a) { return a * a; }

int main() {
    int r, a;
    cout << "Enter radius: "; cin >> r;
    cout << "Enter side: "; cin >> a;
    cout << "Circle area = " << circle(r) << "\n";
    cout << "Square area = " << square(a) << "\n";
}
