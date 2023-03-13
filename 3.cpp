#include <iostream>
using namespace std;

struct Student 
{
    string name;
    int age;
    double cgpa;
};

int main() 
{
    Student s;

    s.name = "AKSHAT SAINI";
    s.age = 19;
    s.gpa = 7.5;

    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}

