// Slip 11 - Q1
// Create class Person(name, age). Derive Student(roll_no, marks).
// Display all information.

#include <iostream>
using namespace std;

class Person {
public:
    char name[20];
    int age;
    void accept() {
        cout << "Name: "; cin >> name;
        cout << "Age: "; cin >> age;
    }
};

class Student : public Person {
public:
    int roll, marks;
    void accept() {
        Person::accept();
        cout << "Roll: "; cin >> roll;
        cout << "Marks: "; cin >> marks;
    }
    void show() {
        cout << name << " " << age << " " << roll << " " << marks << "\n";
    }
};

int main() {
    Student s;
    s.accept();
    s.show();
}
