// Slip 6 - Q2
// Create a class Date with dd, mm, yyyy.
// Overload >> and << operators.

#include <iostream>
using namespace std;

class Date {
public:
    int d, m, y;
    friend istream& operator>>(istream& in, Date& obj) {
        cout << "Enter dd mm yyyy: ";
        in >> obj.d >> obj.m >> obj.y;
        return in;
    }
    friend ostream& operator<<(ostream& out, Date& obj) {
        out << obj.d << "-" << obj.m << "-" << obj.y;
        return out;
    }
};

int main() {
    Date d1;
    cin >> d1;
    cout << d1 << "\n";
}
