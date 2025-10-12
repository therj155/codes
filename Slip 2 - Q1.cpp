// Slip 2 - Q1
// Write a C++ program to create an inline function that returns
// the length of a given string.

#include <iostream>
#include <string.h>
using namespace std;

inline int strLength(char s[]) {
    return strlen(s);
}

int main() {
    char s[50];
    cout << "Enter string: ";
    cin.getline(s, 50);
    cout << "Length = " << strLength(s) << "\n";
}
