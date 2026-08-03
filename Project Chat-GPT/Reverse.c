/*
Write a recursive function to reverse a number.
*/
#include <stdio.h>

int rev(int n);

int main() { }

int rev(int n)
{
    static int x = 0;
    if(n == 0)
    {
        return x;
    }
    
    x = x * 10 + (n % 10);
    return rev(n/10);
}