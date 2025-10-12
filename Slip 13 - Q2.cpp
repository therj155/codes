// Slip 13 - Q2
// Student grading system: accept name, marks.
// Throw exception if name empty or marks invalid.

#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
    char name[20];
    int marks;
    void accept() {
        cout << "Name: "; cin >> name;
        cout << "Marks: "; cin >> marks;
        if (strlen(name) == 0) throw 1;
        if (marks < 0 || marks > 100) throw marks;
    }
};

int main() {
    Student s;
    try {
        s.accept();
        cout << s.name << " " << s.marks << "\n";
    }
    catch (int x) {
        if (x == 1) cout << "Empty name!\n";
        else cout << "Invalid marks!\n";
    }
}
