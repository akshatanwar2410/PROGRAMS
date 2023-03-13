#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        int y;

        MyClass() {
            x = 0;
            y = 0;
        }

        MyClass(int a) {
            x = a;
            y = 0;
        }

        MyClass(int a, int b) {
            x = a;
            y = b;
        }
};

int main() {
    MyClass obj1;
    MyClass obj2(10);
    MyClass obj3(10, 20);

    cout << "obj1: x = " << obj1.x << ", y = " << obj1.y << endl;
    cout << "obj2: x = " << obj2.x << ", y = " << obj2.y << endl;
    cout << "obj3: x = " << obj3.x << ", y = " << obj3.y << endl;

    return 0;
}

