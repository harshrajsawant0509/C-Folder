/*Sum Form M to n*/

#include <stdio.h>

int main() {
    int m,n,i,sum= 0;
    printf("Enter numbers for sum : ");
    scanf("%d",&m);
    scanf("%d",&n);
    i = m;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum : %d",sum);
    return 0;
}