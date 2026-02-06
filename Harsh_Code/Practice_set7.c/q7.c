#include <stdio.h>
void display(int a[3][10]);
int main()
{
    int a[3][10];
    int num[3] = {2, 7, 9};
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