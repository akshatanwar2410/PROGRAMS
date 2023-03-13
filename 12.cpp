#include <iostream>
using namespace std;

int& getValue(int& x) {
    return x;
}

int main() {
    int num = 10;

    getValue(num) = 20;
    cout << "Number = " << num << endl;

    return 0;
}

