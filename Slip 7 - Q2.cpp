// Slip 7 - Q2
// Write a C++ program that appends contents of one file to another.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f1("file1.txt");
    ofstream f2("file2.txt", ios::app);
    char ch;
    while (f1.get(ch)) f2.put(ch);
    f1.close(); f2.close();
    cout << "File appended.\n";
}
