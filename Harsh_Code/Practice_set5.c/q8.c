#include <stdio.h>

char star(int n);

int main() {
    int n;
    printf("Number of line to print star :");
    scanf("%d", &n);
    star(n);
    return 0;
}

char star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int x = (2*i)-1;
        for (int j = 0; j < x ; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}