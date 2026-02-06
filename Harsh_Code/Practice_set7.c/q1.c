#include <stdio.h>

int main() {
    int a[10];
    printf("---Enter 10 inputs---\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d Element :",i+1);
        scanf("%d", &a[i]);
    }

    int *p = &a[0];
    printf("First Element :%d\n", *p);
    p =p+2;
    printf("Third Element :%d", *p);

    
    return 0;
}