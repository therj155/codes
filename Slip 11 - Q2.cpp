// Slip 11 - Q2
// Read Item info (no, name, price, qty) for n items.
// Write this info into a file.

#include <iostream>
#include <fstream>
using namespace std;

class Item {
public:
    int no, qty;
    char name[20];
    float price;
    void accept() {
        cout << "No: "; cin >> no;
        cout << "Name: "; cin >> name;
        cout << "Price: "; cin >> price;
        cout << "Qty: "; cin >> qty;
    }
};

int main() {
    int n;
    cout << "Enter number of items: "; cin >> n;
    Item it[10];
    ofstream fout("items.txt");
    for (int i = 0; i < n; i++) {
        it[i].accept();
        fout << it[i].no << " " << it[i].name << " "
             << it[i].price << " " << it[i].qty << "\n";
    }
    fout.close();
    cout << "Data written to file.\n";
}
