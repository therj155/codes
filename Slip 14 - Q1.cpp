// Slip 14 - Q1
// Find sum of numbers 1 to n using constructor.

#include <iostream>
using namespace std;

class Sum {
public:
    int n;
    Sum(int x) { n = x; }
    void calc() {
        int s = 0;
        for (int i = 1; i <= n; i++) s += i;
        cout << "Sum = " << s << "\n";
    }
};

int main() {
    int n; cout << "Enter n: "; cin >> n;
    Sum obj(n);
    obj.calc();
}
