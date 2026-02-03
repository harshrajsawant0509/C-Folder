#include <stdio.h>

int main() {
    int x ,  sum=0 ,i;
    printf("Enter a number to get sum of natural number : ");
    scanf("%d", &x);
    while ( i >= x)
    {
        sum = sum + i ;
        i++;
    }
    printf("Sum : %d", sum);
    
    return 0;
}