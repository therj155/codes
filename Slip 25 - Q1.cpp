// Slip 25 - Q1
// Class Employee(id,name,salary). Accept 5, display salary>5000.

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
    void show() {
        if (sal > 5000)
            cout << id << " " << name << " " << sal << "\n";
    }
};

int main() {
    Employee e[5];
    for(int i=0;i<5;i++) e[i].accept();
    for(int i=0;i<5;i++) e[i].show();
}
