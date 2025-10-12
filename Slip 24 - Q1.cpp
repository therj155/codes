// Slip 24 - Q1
// Class Number(x,y). Default + parameterized constructor.
// Display maximum of two numbers.

#include <iostream>
using namespace std;

class Number {
public:
    int a,b;
    Number() { a=0; b=0; }
    Number(int x,int y) { a=x; b=y; }
    void showMax() {
        if (a>b) cout << a << "\n"; else cout << b << "\n";
    }
};

int main() {
    Number n1(10,20), n2;
    n1.showMax(); n2.showMax();
}
