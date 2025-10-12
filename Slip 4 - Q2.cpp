// Slip 4 - Q2
// Create class Person with Passport_Id, Name, Nationality,
// Gender, DOB, Issue, Expiry. Use function overloading
// and array of objects.

#include <iostream>
using namespace std;

class Person {
public:
    int id;
    char name[20], nation[20], gender[10];
    char dob[15], issue[15], expiry[15];

    void accept() {
        cout << "ID: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Nation: "; cin >> nation;
        cout << "Gender: "; cin >> gender;
        cout << "DOB: "; cin >> dob;
        cout << "Issue: "; cin >> issue;
        cout << "Expiry: "; cin >> expiry;
    }
    void show() {
        cout << id << " " << name << " " << nation << " "
             << gender << " " << dob << " " << issue << " " << expiry << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;
    Person p[10];
    for (int i = 0; i < n; i++) p[i].accept();

    cout << "\nAll persons:\n";
    for (int i = 0; i < n; i++) p[i].show();
}
