// Slip 17 - Q1
// Count number of words in a given file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    char word[50];
    int count = 0;
    while (fin >> word) count++;
    fin.close();
    cout << "Words = " << count << "\n";
}
