// Slip 18 - Q1
// Class Product(code, name, weight). If weight > 100, throw exception.

#include <iostream>
using namespace std;

class Product {
public:
    int code;
    char name[20];
    int weight;
    void accept() {
        cout << "Code: "; cin >> code;
        cout << "Name: "; cin >> name;
        cout << "Weight: "; cin >> weight;
        if (weight > 100) throw weight;
    }
    void show() {
        cout << code << " " << name << " " << weight << "\n";
    }
};

int main() {
    Product p;
    try {
        p.accept();
        p.show();
    }
    catch (int w) {
        cout << "Error: Weight " << w << " too high!\n";
    }
}
