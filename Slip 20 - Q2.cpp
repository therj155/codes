// Slip 20 - Q2
// Base class Train(no, name). Derive Route(id, src, dest).
// Derive Reservation(seats, class, fare, date).
// Menu: enter, display, display by class.

#include <iostream>
#include <string.h>
using namespace std;

class Train { public: int no; char name[20]; };
class Route : public Train { public: int rid; char src[20], dest[20]; };
class Reservation : public Route {
public:
    int seats; char cls[10], date[15]; float fare;
    void accept() {
        cout << "Train no: "; cin >> no;
        cout << "Name: "; cin >> name;
        cout << "Route id: "; cin >> rid;
        cout << "Src: "; cin >> src;
        cout << "Dest: "; cin >> dest;
        cout << "Seats: "; cin >> seats;
        cout << "Class: "; cin >> cls;
        cout << "Fare: "; cin >> fare;
        cout << "Date: "; cin >> date;
    }
    void show() {
        cout << no << " " << name << " " << rid << " "
             << src << " " << dest << " " << seats << " "
             << cls << " " << fare << " " << date << "\n";
    }
};

int main() {
    int n; cout << "Enter reservations: "; cin >> n;
    Reservation r[10];
    for (int i = 0; i < n; i++) r[i].accept();
    cout << "\nAll:\n"; for (int i = 0; i < n; i++) r[i].show();
    char cl[10]; cout << "Enter class: "; cin >> cl;
    for (int i = 0; i < n; i++) if (strcmp(r[i].cls, cl) == 0) r[i].show();
}
