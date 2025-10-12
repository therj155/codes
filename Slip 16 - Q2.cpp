// Slip 16 - Q2
// Class Employee(E_no, Name, Designation, Salary).
// Accept 2 employees, display one with max salary (use this pointer).

#include <iostream>
using namespace std;

class Employee {
public:
    int no;
    char name[20], desig[20];
    float sal;
    void accept() {
        cout << "No: "; cin >> no;
        cout << "Name: "; cin >> name;
        cout << "Designation: "; cin >> desig;
        cout << "Salary: "; cin >> sal;
    }
    Employee* max(Employee* e) {
        if (this->sal > e->sal) return this;
        else return e;
    }
    void show() {
        cout << no << " " << name << " " << desig << " " << sal << "\n";
    }
};

int main() {
    Employee e1, e2;
    e1.accept(); e2.accept();
    Employee* m = e1.max(&e2);
    cout << "Employee with max salary:\n";
    m->show();
}
