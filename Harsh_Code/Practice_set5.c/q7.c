#include <stdio.h>

int sum(int n);
int main() {
    int n,x;
    printf("Enter ti get sum of Natural numbers :");
    scanf("%d", &n);
    x = sum(n);
    printf("Sum : %d", x);
    return 0;
} 

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else 
    {
       return n + sum(n-1);
    }
    
}