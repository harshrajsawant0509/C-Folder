#include <stdio.h>
int cal(int n,int a[10]);
void display(int a[10], int n);
int main() {
    int a[20];
    int n ;
    printf("Enter digit which table u want to create : ");
    scanf("%d", &n);
    cal(n,a);
    display(a,n);
    return 0;
}

int cal(int n, int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        a[i] = n * (i+1);
    }
}

void display(int a[10],int n)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",n,i+1,a[i]);
    }
    
}