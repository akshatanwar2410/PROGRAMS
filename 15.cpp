#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Result: " << add(x, y) << endl;

    return 0;
}

