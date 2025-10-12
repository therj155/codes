// Slip 8 - Q2
// Class Mystring with dynamic constructor. Combine two strings.

#include <iostream>
#include <string.h>
using namespace std;

class Mystring {
    char *name;
public:
    Mystring(const char *s) {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    Mystring(Mystring &a, Mystring &b) {
        name = new char[strlen(a.name) + strlen(b.name) + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
    void show() { cout << name << "\n"; }
};

int main() {
    Mystring s1("Hello"), s2("World");
    Mystring s3(s1, s2);
    s1.show();
    s2.show();
    s3.show();
}
