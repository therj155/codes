// Slip 21 - Q2
// Base class Media(title, price). Derive Book and Tape.
// Use virtual function to display.

#include <iostream>
using namespace std;

class Media {
public:
    char title[20];
    float price;
    virtual void show() {
        cout << title << " " << price << "\n";
    }
};

class Book : public Media {
public:
    void accept() { cout << "Book title: "; cin >> title; cout << "Price: "; cin >> price; }
    void show() { cout << "Book: " << title << " " << price << "\n"; }
};

class Tape : public Media {
public:
    void accept() { cout << "Tape title: "; cin >> title; cout << "Price: "; cin >> price; }
    void show() { cout << "Tape: " << title << " " << price << "\n"; }
};

int main() {
    Book b; b.accept();
    Tape t; t.accept();
    Media* m[2]; m[0]=&b; m[1]=&t;
    for (int i=0;i<2;i++) m[i]->show();
}
