#include <stdio.h>
int main() {
    int n , sum , i;
    sum = 0 ;
    printf("Enter the number to get the sum of the multiplicant : ");
    scanf("%d", &n);
    for ( i = 1; i <= 10 ; i++)
    {
        sum = sum + n * i;
    }

    printf("Sum : %d", sum);
    
    return 0;
}