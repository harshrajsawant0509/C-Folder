/*
To check whether number is even or odd
*/

#include <stdio.h>
int even_odd(int n);
int main() {
    int n,flag;
    printf("Enter a number : ");
    scanf("%d",&n);
    flag = even_odd(n);
    if (flag == 1)
    {
        printf("%d is even number",n);
    }
    else 
    {
        printf("%d is odd number",n);
    }
    
    

    return 0;
}

int even_odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}