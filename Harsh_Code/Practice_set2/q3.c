#include <stdio.h>

int main() {
    int x;
    printf("Enter a number to check the given no is Divisible by 97 or not:");
    scanf("%d", &x);
    if(x % 97 == 0)
    printf("Divisible");
    else
    printf("Not Divisible");
    return 0;
}