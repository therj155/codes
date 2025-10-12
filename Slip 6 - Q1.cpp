// Slip 6 - Q1
// Write a C++ program using class to calculate simple interest.
// Use parameterized constructor with default rate.

#include <iostream>
using namespace std;

class Interest {
    float p, t, r;
public:
    Interest(float x, float y, float z = 5) {
        p = x; t = y; r = z;
    }
    void calc() {
        cout << "Simple Interest = " << (p * t * r) / 100 << "\n";
    }
};

int main() {
    float p, t, r;
    cout << "Enter principal, time, rate: ";
    cin >> p >> t >> r;
    Interest i(p, t, r);
    i.calc();
}
