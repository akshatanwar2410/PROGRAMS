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
};

int main() {
    MyClass obj(10, 20);

    cout << "x: " << obj.x << endl;
    cout << "y: " << obj.y << endl;

    return 0;
}

