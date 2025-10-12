// Slip 5 - Q1
// Define a class Cube with length, width, depth.
// Function volume() calculates volume.

#include <iostream>
using namespace std;

class Cube {
public:
    int l, w, d;
    void accept() {
        cout << "Enter length width depth: ";
        cin >> l >> w >> d;
    }
    void volume() {
        cout << "Volume = " << l * w * d << "\n";
    }
};

int main() {
    Cube c;
    c.accept();
    c.volume();
}
