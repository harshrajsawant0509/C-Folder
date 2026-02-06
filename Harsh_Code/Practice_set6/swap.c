#include <stdio.h>
void swap(int a, int b);
void swap_add(int *a, int *b);
int main() {
    int a= 1, b = 2;
    swap(a,b);
    printf("%d , %d\n",a,b );
    swap_add(&a,&b);
    printf("%d , %d",a,b );
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_add(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}