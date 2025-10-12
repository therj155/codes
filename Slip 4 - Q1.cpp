// Slip 4 - Q1
// Write a program using unordered_map to store and display
// names of 3 students with their roll numbers.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;
    m[1] = "Amit";
    m[2] = "Bhargav";
    m[3] = "Neha";

    for (auto x : m)
        cout << x.first << " " << x.second << "\n";
}
