#include <iostream>
using namespace std;

class Y;
class X {
    private:
        int x;

    public:
        X(int a) 
{
            x = a;
        }
        friend int add(X, Y);
};

class Y {
    private:
        int y;
    public:
        Y(int b) {
            y = b;
        }

        friend int add(X, Y);
};

int add(X obj1, Y obj2) {
    return obj1.x + obj2.y;
}

int main() {
    X obj1(10);
    Y obj2(20);

    int sum = add(obj1, obj2);

    cout << "Sum: " << sum << endl;

    return 0;
}

