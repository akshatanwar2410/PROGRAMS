#include <iostream>
using namespace std;

int multiply(int a, int b = 1) {
    return a * b;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Multiplication of " << x << " and default argument: " << multiply(x) << endl;

    cout << "Multiplication of " << x << " and " << y << ": " << multiply(x, y) << endl;

    return 0;
}

