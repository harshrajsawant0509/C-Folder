#include <stdio.h>
int main() {
    int n , fact = 1 , i = 1 ;
    printf("Enter number to get the factorial :");
    scanf("%d", &n);
    while(i <= n)
    {
        fact = fact * i ;
        i++;
    }
    printf("Factorial of %d : %d", n , fact);
    return 0;
}