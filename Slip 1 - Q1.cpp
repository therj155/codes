// Slip 1 - Q1
// Write a C++ program to declare a class Student containing data members
// roll_no and percentage. Accept this data for 2 objects and display
// the roll_no of the student having highest percentage.

#include <iostream>
using namespace std;

class Student {
public:
    int roll_no;
    float percentage;
    void accept() {
        cout << "Enter roll no: "; cin >> roll_no;
        cout << "Enter percentage: "; cin >> percentage;
    }
};

int main() {
    Student s1, s2;
    s1.accept();
    s2.accept();

    if (s1.percentage > s2.percentage)
        cout << "Highest percentage Roll No: " << s1.roll_no << "\n";
    else
        cout << "Highest percentage Roll No: " << s2.roll_no << "\n";

    return 0;
}
