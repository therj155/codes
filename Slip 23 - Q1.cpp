// Slip 23 - Q1
// Count number of lines not starting with 'C' in file.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    ifstream fin("data.txt");
    char line[100]; int count=0;
    while (fin.getline(line,100)) {
        if (line[0] != 'C') count++;
    }
    fin.close();
    cout << "Lines not starting with C = " << count << "\n";
}
