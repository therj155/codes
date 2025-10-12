// Slip 7 - Q1
// Base class Product(Id, Name, Price). Derived class Discount(%).
// Customer buys n products. Calculate total price and total discount.

#include <iostream>
using namespace std;

class Product {
public:
    int id;
    char name[20];
    float price;
    void accept() {
        cout << "Id: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Price: "; cin >> price;
    }
};

class Discount : public Product {
public:
    float disc;
    void accept() {
        Product::accept();
        cout << "Discount %: "; cin >> disc;
    }
    float finalPrice() {
        return price - (price * disc / 100);
    }
};

int main() {
    int n; float total = 0, saved = 0;
    cout << "Enter number of products: "; cin >> n;
    Discount d[10];
    for (int i = 0; i < n; i++) {
        d[i].accept();
        total += d[i].price;
        saved += (d[i].price * d[i].disc / 100);
    }
    cout << "Total Price = " << total << "\n";
    cout << "Total Discount = " << saved << "\n";
    cout << "Final Bill = " << total - saved << "\n";
}
