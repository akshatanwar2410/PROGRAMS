#include <stdio.h>

int a = 10;

int main() {
    int a = 20;

    printf("Local variable a = %d\n", a);

    printf("Global variable a = %d\n", ::a);

    return 0;
}

