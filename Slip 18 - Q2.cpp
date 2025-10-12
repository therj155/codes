// Slip 18 - Q2
// Class Distance(feet, inches). Friend function to add two distances.

#include <iostream>
using namespace std;

class Distance {
    int f, i;
public:
    Distance() { f = i = 0; }
    Distance(int x, int y) { f = x; i = y; }
    void show() { cout << f << "ft " << i << "in\n"; }
    friend Distance add(Distance d1, Distance d2);
};

Distance add(Distance d1, Distance d2) {
    Distance d;
    d.f = d1.f + d2.f;
    d.i = d1.i + d2.i;
    if (d.i >= 12) { d.f++; d.i -= 12; }
    return d;
}

int main() {
    Distance d1(5, 8), d2(3, 7);
    Distance d3 = add(d1, d2);
    d1.show(); d2.show(); d3.show();
}
