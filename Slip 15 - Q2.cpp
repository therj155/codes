// Slip 15 - Q2
// Two base classes: Employee(Name, Designation), Project(Project_Id, Title).
// Derived class Emp_Proj(Duration). Menu: build, display, sort by duration.

#include <iostream>
#include <string.h>
using namespace std;

class Employee {
public:
    char name[20], desig[20];
};

class Project {
public:
    int pid;
    char title[20];
};

class Emp_Proj : public Employee, public Project {
public:
    int duration;
    void accept() {
        cout << "Name: "; cin >> name;
        cout << "Designation: "; cin >> desig;
        cout << "Project Id: "; cin >> pid;
        cout << "Title: "; cin >> title;
        cout << "Duration: "; cin >> duration;
    }
    void show() {
        cout << name << " " << desig << " "
             << pid << " " << title << " " << duration << "\n";
    }
};

int main() {
    int n; cout << "Enter number: "; cin >> n;
    Emp_Proj e[10];
    for (int i = 0; i < n; i++) e[i].accept();

    cout << "\nAll Records:\n";
    for (int i = 0; i < n; i++) e[i].show();

    cout << "\nSorted by duration:\n";
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (e[i].duration > e[j].duration) {
                Emp_Proj tmp = e[i]; e[i] = e[j]; e[j] = tmp;
            }
    for (int i = 0; i < n; i++) e[i].show();
}
