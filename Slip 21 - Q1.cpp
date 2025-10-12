// Slip 21 - Q1
// Class Integer with one int. Overload +, -, *, / operators.

#include <iostream>
using namespace std;

class Integer {
public:
    int x;
    Integer(int a=0) { x = a; }
    Integer operator+(Integer b) { return Integer(x + b.x); }
    Integer operator-(Integer b) { return Integer(x - b.x); }
    Integer operator*(Integer b) { return Integer(x * b.x); }
    Integer operator/(Integer b) { return Integer(x / b.x); }
    void show() { cout << x << "\n"; }
};

int main() {
    Integer a(10), b(5);
    (a+b).show();
    (a-b).show();
    (a*b).show();
    (a/b).show();
}
