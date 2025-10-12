// Slip 24 - Q2
// Class Employee. Friend function to calculate average salary.

#include <iostream>
using namespace std;

class Employee {
public:
    int id; char name[20]; float sal;
    void accept() {
        cout << "Id: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Salary: "; cin >> sal;
    }
    friend float avg(Employee e[], int n);
};

float avg(Employee e[], int n) {
    float s=0; for(int i=0;i<n;i++) s+=e[i].sal;
    return s/n;
}

int main() {
    int n; cout << "Enter n: "; cin >> n;
    Employee e[10];
    for(int i=0;i<n;i++) e[i].accept();
    cout << "Average = " << avg(e,n) << "\n";
}
