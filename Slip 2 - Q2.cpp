// Slip 2 - Q2
// Write a C++ program to define a class Bus with Bus_No, Bus_Name,
// No_of_Seats, Starting_point, Destination. Accept and display
// bus details, and search buses by route.

#include <iostream>
#include <string.h>
using namespace std;

class Bus {
public:
    int no, seats;
    char name[20], start[20], dest[20];
    void accept() {
        cout << "No: "; cin >> no;
        cout << "Name: "; cin >> name;
        cout << "Seats: "; cin >> seats;
        cout << "Start: "; cin >> start;
        cout << "Dest: "; cin >> dest;
    }
    void show() {
        cout << no << " " << name << " " << seats
             << " " << start << " " << dest << "\n";
    }
};

int main() {
    int n, ch; Bus b[10];
    cout << "Enter number of buses: "; cin >> n;
    for (int i = 0; i < n; i++) b[i].accept();

    do {
        cout << "\n1.All 2.By Route 3.Exit\n"; cin >> ch;
        if (ch == 1) {
            for (int i = 0; i < n; i++) b[i].show();
        } else if (ch == 2) {
            char s[20], d[20];
            cout << "Start: "; cin >> s;
            cout << "Dest: "; cin >> d;
            for (int i = 0; i < n; i++)
                if (strcmp(b[i].start, s) == 0 && strcmp(b[i].dest, d) == 0)
                    b[i].show();
        }
    } while (ch != 3);
}
