#include <iostream>
using namespace std;

class MyClass {
    public:
        int num;

        MyClass(int num) {
            this->num = num;
            cout << "Constructor called." << endl;
        }

        void printNum() {
            cout << "Number: " << this->num << endl;
        }
};

int main() {
    MyClass obj(5);

    obj.printNum();

    return 0;
}

