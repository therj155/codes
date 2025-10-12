// Slip 8 - Q1
// Class Rectangle(length, breadth). Accept and display area & perimeter.

#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;
    void accept() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }
    void calc() {
        cout << "Area = " << l * b << "\n";
        cout << "Perimeter = " << 2 * (l + b) << "\n";
    }
};

int main() {
    Rectangle r;
    r.accept();
    r.calc();
}
