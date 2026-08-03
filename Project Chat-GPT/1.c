/*
Write a recursive function to calculate the sum of digits of a number.
*/

#include <stdio.h>

int sum(int n);

int main() {
    int n,ans;
    printf("Enter a Number : ");
    scanf("%d",&n);

    ans = sum(n);
    printf("Sum = %d",ans);
    return 0;
}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return (n%10) + sum(n / 10);
}

