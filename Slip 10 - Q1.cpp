// Slip 10 - Q1
// Class Mobile(Id, Name, Price). Use parameterized constructor.

#include <iostream>
#include <iomanip>
using namespace std;

class Mobile {
public:
    int id;
    char name[20];
    float price;
    Mobile(int i, const char* n, float p) {
        id = i; strcpy(name, n); price = p;
    }
    void show() {
        cout << id << " " << name
             << " " << fixed << setprecision(2) << setw(8) << price << "\n";
    }
};

int main() {
    Mobile m(101, "Nokia", 4999.50);
    m.show();
}
