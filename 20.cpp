#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        int y;

        MyClass(int a, int b) {
            x = a;
            y = b;
        }

        MyClass(const MyClass& obj) {
            x = obj.x;
            y = obj.y;
            cout << "Copy constructor called!" << endl;
        }
};

int main() {
    MyClass obj1(10, 20);
    MyClass obj2 = obj1;
    cout << "obj1: x = " << obj1.x << ", y = " << obj1.y << endl;
    cout << "obj2: x = " << obj2.x << ", y = " << obj2.y << endl;

    return 0;
}

