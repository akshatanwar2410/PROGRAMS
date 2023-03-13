#include <iostream>
using namespace std;

void swapPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReferences(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    swapPointers(&num1, &num2);

    cout << "Swapped using pointers: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapPointers(&num1, &num2);

    swapReferences(num1, num2);

    cout << "Swapped using references: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

