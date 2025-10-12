// Slip 15 - Q1
// Inline function to calculate area of rectangle with default width.

#include <iostream>
using namespace std;

inline int area(int l, int w = 5) {
    return l * w;
}

int main() {
    int l;
    cout << "Enter length: ";
    cin >> l;
    cout << "Area = " << area(l) << "\n";
}
