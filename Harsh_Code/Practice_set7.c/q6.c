#include <stdio.h>
void in(int a[50],int n);
int count(int a[50],int n);
int main() {
    int a[50],n,out;
    printf("---Enter number to get count of Positive numbers---\n");
    printf("Enter number of element : ");
    scanf("%d", &n);
    in(a,n);
    out = count(a,n);
    printf("Count of Positive Number : %d",out);

    return 0;
}

void in(int a[50],int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
}

int count(int a[50], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
                count = count + 1;
        }
    }
    return count;
    
}