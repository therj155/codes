// Slip 5 - Q2
// Simple calculator: +, -, *, /
// Throw exception for division by zero or invalid operator.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter a b: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    try {
        if (op == '+') cout << "Ans = " << a + b << "\n";
        else if (op == '-') cout << "Ans = " << a - b << "\n";
        else if (op == '*') cout << "Ans = " << a * b << "\n";
        else if (op == '/') {
            if (b == 0) throw b;
            cout << "Ans = " << a / b << "\n";
        }
        else throw op;
    }
    catch (int) { cout << "Division by zero!\n"; }
    catch (char) { cout << "Invalid operator!\n"; }
}
