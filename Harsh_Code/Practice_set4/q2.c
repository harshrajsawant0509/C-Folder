#include <stdio.h>

int main() {
    int x;
    printf("Enter number to get the reverse table:");
    scanf("%d", &x);
    for ( int i = 10; i>=1; i--)
    {
        printf("%d x %d = %d\n", x,i, x*i);
    } 
    return 0;
}