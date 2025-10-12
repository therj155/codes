// Slip 23 - Q2
// Class Complex. Friend function to add two complex numbers.

#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;
    Complex() { r=i=0; }
    Complex(int a,int b) { r=a; i=b; }
    void show() { cout << r << "+" << i << "i\n"; }
    friend Complex add(Complex, Complex);
};

Complex add(Complex a, Complex b) {
    return Complex(a.r+b.r, a.i+b.i);
}

int main() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = add(c1,c2);
    c1.show(); c2.show(); c3.show();
}
