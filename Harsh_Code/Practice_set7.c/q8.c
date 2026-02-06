#include <stdio.h>
void display(int a[3][10]);
void in(int num[3]);
int main()
{
    int a[3][10];
    int num[3];
    in(num);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = num[i] * (j + 1);
        }
    }

    display(a);

    return 0;
}

void display(int a[3][10])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void in(int num[3])
{
    printf("Enter three number to get print of tables :");
    for (int k = 0; k < 3; k++)
    {
        scanf("%d",&num[k]);
    }
    
}