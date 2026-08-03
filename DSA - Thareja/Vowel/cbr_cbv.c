// call by reference and call by value

#include <stdio.h>
void swap_call_val(int a,int b);
void swap_call_ref(int *c, int *d);
int main() {
    int a=1,b=2,c=3,d=4;
    printf("In main() Before call by value a=%d , b=%d\n",a,b);
    swap_call_val(a,b);
    printf("In main() after swaping usig CBV a=%d , b=%d\n",a,b);
    printf("In main() Before call by ref c=%d , d=%d\n",c,d);
    swap_call_ref(&c,&d);
    printf("In main() after swaping usig CBR c=%d , d=%d\n",c,d);
    return 0;
}

void swap_call_val(int a,int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("In function() after CBV a=%d , b=%d\n", a,b);
}
void swap_call_ref(int *c, int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("In function() after CBR c=%d , d=%d\n", *c,*d);
}