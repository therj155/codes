// Slip 20 - Q1
// Read two integers, divide first by second. Catch divide by zero.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0) throw b;
        cout << "Result = " << a / b << "\n";
    }
    catch (int) { cout << "Divide by zero error!\n"; }
}
