#include <stdio.h>
int average(int a,int b,int c);
int main() {
    int n1, n2, n3;
    printf("Enter three number to get average :");
    scanf("%d %d %d", &n1 , &n2 , &n3);

    average(n1, n2, n3);
    return 0;
}

int average(int a,int b,int c)
{
    int x;
    x = (a+b+c)/3;
    printf("Average of given three number : %d", x);
}
