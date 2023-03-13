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
};

int main() {
    MyClass obj;

    cout << "x: " << obj.x << endl;
    cout << "y: " << obj.y << endl;

    return 0;
}

