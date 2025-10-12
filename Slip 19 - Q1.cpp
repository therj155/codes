// Slip 19 - Q1
// Class Integer. Overload pre and post decrement operators (--).

#include <iostream>
using namespace std;

class Integer {
public:
    int x;
    Integer(int a) { x = a; }
    void operator--() { --x; }      // pre
    void operator--(int) { x--; }   // post
    void show() { cout << x << "\n"; }
};

int main() {
    Integer n(5);
    --n; n.show();
    n--; n.show();
}
