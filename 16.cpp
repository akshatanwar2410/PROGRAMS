#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int z = 15;

    float a = 2.5;
    float b = 3.5;

    cout << "Sum of " << x << " and " << y << ": " << add(x, y) << endl;
    cout << "Sum of " << x << ", " << y << ", and " << z << ": " << add(x, y, z) << endl;
    cout << "Sum of " << a << " and " << b << ": " << add(a, b) << endl;

    return 0;
}


