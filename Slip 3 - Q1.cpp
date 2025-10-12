// Slip 3 - Q1
// Write a C++ program that reads Book.txt file and
// displays Books data on the screen.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("Book.txt");
    char line[100];
    while (fin.getline(line, 100)) {
        cout << line << "\n";
    }
    fin.close();
}
