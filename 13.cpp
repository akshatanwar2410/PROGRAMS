#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;     
*ptr = 10; 
    cout << "Value of the integer: " << *ptr << endl;

    delete ptr; 
    return 0;
}

