// Slip 9 - Q1
// Class Product(code, name, price). Accept & display info for 2 objects.

#include <iostream>
using namespace std;

class Product {
public:
    int code;
    char name[20];
    float price;
    void accept() {
        cout << "Code: "; cin >> code;
        cout << "Name: "; cin >> name;
        cout << "Price: "; cin >> price;
    }
    void show() {
        cout << code << " " << name << " " << price << "\n";
    }
};

int main() {
    Product p1, p2;
    p1.accept(); p2.accept();
    p1.show(); p2.show();
}
