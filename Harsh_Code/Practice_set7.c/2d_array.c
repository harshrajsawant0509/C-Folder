#include <stdio.h>

void in(int a[2][2]);
void out(int a[2][2]);


int main() {
    int a[2][2];
    printf("Enter values for 2D Array:\n");
    in(a);
    out(a);
    return 0;
}

void in(int a[2][2])
{
        for (int i = 0; i < 2; i++)
    {
        for(int j = 0;j<2 ;j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}
void out(int a[2][2])
{
        for (int i = 0; i < 2; i++)
    {
        for(int j = 0;j<2 ;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}