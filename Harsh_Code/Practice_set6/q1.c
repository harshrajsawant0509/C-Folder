#include <stdio.h>

int main() {
    int a = 5;
    printf("address of a :%u\n",&a);
    printf("%d", *(&a));
    return 0;
}