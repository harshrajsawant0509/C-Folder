#include <stdio.h>

int main() {
    int x ,  sum=0;
    printf("Enter a number to get sum of natural number : ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("Sum : %d",sum);
    
    return 0;
}