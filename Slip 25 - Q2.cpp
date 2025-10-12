// Slip 25 - Q2
// Class Student(roll,name,marks). Friend function to find student
// with highest marks among two.

#include <iostream>
using namespace std;

class Student {
public:
    int roll, marks; char name[20];
    void accept() {
        cout << "Roll: "; cin >> roll;
        cout << "Name: "; cin >> name;
        cout << "Marks: "; cin >> marks;
    }
    friend Student highest(Student, Student);
};

Student highest(Student s1, Student s2) {
    if (s1.marks > s2.marks) return s1;
    else return s2;
}

int main() {
    Student s1,s2,s3;
    s1.accept(); s2.accept();
    s3 = highest(s1,s2);
    cout << "Highest: " << s3.roll << " " << s3.name << " " << s3.marks << "\n";
}
