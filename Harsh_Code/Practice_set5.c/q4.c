#include <stdio.h>

int Fibo(int n);

int main() {
    int n, c;
    printf("Enter number to get fibnacii series : ");
    scanf("%d",&n);

    c = Fibo(n);

    printf("Answer : %d", c);

    return 0;
}

int Fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
       return 1;
    }
    else
    {
    return Fibo(n-1) + Fibo(n-2);
    }

}