#include <stdio.h>

void multiply(int *x);

int main() {
    int a = 5;

    multiply(&a);

    printf("Value of a after multiplication = %d\n", a);

    return 0;
}

void multiply(int *x) {
    *x = (*x) * 10;
}

