#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() 
{
    Student s;

    s.name = "AKSHAT";
    s.age = 20;
    s.gpa = 7.6;

    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "CGPA: " << s.gpa << endl;

    return 0;
}

