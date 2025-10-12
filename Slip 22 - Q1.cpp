// Slip 22 - Q1
// Read a file and count uppercase, lowercase, digits, spaces.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    char ch; int uc=0, lc=0, d=0, sp=0;
    while (fin.get(ch)) {
        if (ch >= 'A' && ch <= 'Z') uc++;
        else if (ch >= 'a' && ch <= 'z') lc++;
        else if (ch >= '0' && ch <= '9') d++;
        else if (ch == ' ') sp++;
    }
    fin.close();
    cout << "Upper="<<uc<<" Lower="<<lc<<" Digits="<<d<<" Spaces="<<sp<<"\n";
}
