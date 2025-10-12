// Slip 16 - Q1
// Count frequency of each character in string using unordered_map.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    char str[50];
    cout << "Enter string: ";
    cin.getline(str, 50);

    unordered_map<char, int> freq;
    for (int i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for (auto x : freq)
        cout << x.first << " -> " << x.second << "\n";
}
