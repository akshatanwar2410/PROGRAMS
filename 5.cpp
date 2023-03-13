#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        double cgpa;
    public:
        Student(string n, int a, double g) {
            name = n;
            age = a;
            cgpa = g;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        double getCgpa() {
            return cgpa;
        }

        void setName(string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }

        void setCgpa(double g) {
            cgpa = g;
        }
};

int main() {
    Student s1("AKSHAT", 19, 7.5);
    Student s2("GIRDHAR", 19, 7.6);

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "CGPA: " << s2.getCgpa() << endl;

    s2.setName("AKSHAT");
    s2.setAge(19);
    s2.setCgpa(7.5);

    cout << "Modified student 2:" << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "CGPA: " << s2.getCgpa() << endl;

    return 0;
}

