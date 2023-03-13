#include <iostream>
using namespace std;

int main() {
    int num = 10;

    int& refNum = num;

    cout << "num = " << num << endl;
    cout << "refNum = " << refNum << endl;

    refNum = 20;

    cout << "Number = " << num << endl;
    cout << "RefNumber = " << refNum << endl;

    return 0;
}

