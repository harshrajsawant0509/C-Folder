#include <stdio.h>

int main() {
    int a = 5;
    int *p ;
    p = &a;

    printf("%d\n",p);
        printf("%d\n",*p);
            printf("%d\n",&p);
            p++;
                printf("%d\n",p);
                p--;
                    printf("%d\n",p);
                    p= p +2;
                        printf("%d\n",p);
    
    return 0;
}