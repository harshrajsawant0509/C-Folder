#include<stdio.h>
int call_by_val(int a, int b);
int call_by_ref(int *a, int *b);
int call_by_val(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("--In CBV--\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}
int call_by_ref(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("--In CBR--\n");
    printf("a: %d\n", *a);
    printf("b: %d\n", *b);
}

int main()
{
int a , b;
printf("Enter numbers a:");
scanf("%d", &a );
printf("Enter numbers b:");
scanf("%d", &b );

call_by_val(a,b);
printf("--After excuting CBV--");
printf("a: %d\n", a);
printf("b: %d\n", b);
call_by_ref(&a , &b);
printf("--After excuting CBR--");
printf("a: %d\n", a);
printf("b: %d\n", b);
return 0;
}

