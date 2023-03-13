#include <iostream>
using namespace std;

class MyClass {
    public:
        int *arr;
        int size;

        MyClass(int s) {
            size = s;
            arr = new int[size];
            cout << "Constructor called." << endl;
        }

        ~MyClass() {
            delete[] arr;
            cout << "Destructor called." << endl;
        }
};

int main() {
    MyClass obj(5);

    return 0;
}

