#include <stdio.h>
int main() {
    int a=5,*i,**j;
    i = &a;
    j = &i;
    printf("%d", **j);
    return 0;
}