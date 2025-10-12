// Slip 19 - Q2
// Dictionary using unordered_map to store country-capital pairs.
// Menu: add, search, display.

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> dict;
    int ch; string c, cap;
    do {
        cout << "\n1.Add 2.Search 3.Display 4.Exit\n";
        cin >> ch;
        if (ch == 1) {
            cout << "Country: "; cin >> c;
            cout << "Capital: "; cin >> cap;
            dict[c] = cap;
        } else if (ch == 2) {
            cout << "Country: "; cin >> c;
            if (dict.count(c)) cout << "Capital: " << dict[c] << "\n";
            else cout << "Not found\n";
        } else if (ch == 3) {
            for (auto x : dict) cout << x.first << " - " << x.second << "\n";
        }
    } while (ch != 4);
}
