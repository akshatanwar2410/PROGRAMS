#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int rollNo;
        int marks;
        void readDetails() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter marks: ";
            cin >> marks;
        }

        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details of student " << i+1 << ":" << endl;
        students[i].readDetails();
    }

    for (int i = 0; i < n; i++) {
        cout << "Details of student " << i+1 << ":" << endl;
        students[i].displayDetails();
    }

    return 0;
}

