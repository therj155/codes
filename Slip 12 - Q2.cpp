// Slip 12 - Q2
// Class Date(dd, mm, yyyy). Param constructor.
// Display in dd-Mon-yyyy format with validation.

#include <iostream>
using namespace std;

class Date {
public:
    int d, m, y;
    Date(int dd, int mm, int yy) {
        d = dd; m = mm; y = yy;
    }
    void show() {
        char *mon[] = {"Jan","Feb","Mar","Apr","May","Jun",
                       "Jul","Aug","Sep","Oct","Nov","Dec"};
        if (m >= 1 && m <= 12)
            cout << d << "-" << mon[m-1] << "-" << y << "\n";
        else
            cout << "Invalid month!\n";
    }
};

int main() {
    int d, m, y;
    cout << "Enter dd mm yyyy: ";
    cin >> d >> m >> y;
    Date dt(d, m, y);
    dt.show();
}
