// Slip 14 - Q2
// Class College(id, name, year, university).
// Accept n, display by university or by year.

#include <iostream>
#include <string.h>
using namespace std;

class College {
public:
    int id, year;
    char name[20], uni[20];
    void accept() {
        cout << "Id: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Year: "; cin >> year;
        cout << "University: "; cin >> uni;
    }
    void show() {
        cout << id << " " << name << " " << year << " " << uni << "\n";
    }
};

int main() {
    int n; cout << "Enter number of colleges: "; cin >> n;
    College c[10];
    for (int i = 0; i < n; i++) c[i].accept();

    char u[20];
    cout << "Enter university: "; cin >> u;
    for (int i = 0; i < n; i++)
        if (strcmp(c[i].uni, u) == 0) c[i].show();

    int y; cout << "Enter year: "; cin >> y;
    for (int i = 0; i < n; i++)
        if (c[i].year == y) c[i].show();
}
