/*
Write a recursive function to check whether a number is a palindrome.
*/

#include <stdio.h>

int reverseHelper(int n, int rev)
{
    if(n == 0)
        return rev;

    return reverseHelper(n / 10, rev * 10 + (n % 10));
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseHelper(num, 0);

    if(num == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}