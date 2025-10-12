// Slip 17 - Q2
// Base class Flight(no, name). Derive Route(src, dest).
// Derive Reservation(seats, class, fare, date).
// Enter/display reservations, show business class only.

#include <iostream>
#include <string.h>
using namespace std;

class Flight {
public:
    int no;
    char name[20];
};

class Route : public Flight {
public:
    char src[20], dest[20];
};

class Reservation : public Route {
public:
    int seats; char cls[10], date[15]; float fare;
    void accept() {
        cout << "Flight no: "; cin >> no;
        cout << "Name: "; cin >> name;
        cout << "Source: "; cin >> src;
        cout << "Dest: "; cin >> dest;
        cout << "Seats: "; cin >> seats;
        cout << "Class: "; cin >> cls;
        cout << "Fare: "; cin >> fare;
        cout << "Date: "; cin >> date;
    }
    void show() {
        cout << no << " " << name << " " << src << " " << dest
             << " " << seats << " " << cls << " " << fare << " " << date << "\n";
    }
};

int main() {
    int n; cout << "Enter reservations: "; cin >> n;
    Reservation r[10];
    for (int i = 0; i < n; i++) r[i].accept();

    cout << "\nAll:\n";
    for (int i = 0; i < n; i++) r[i].show();

    cout << "\nBusiness class:\n";
    for (int i = 0; i < n; i++)
        if (strcmp(r[i].cls, "Business") == 0) r[i].show();
}
