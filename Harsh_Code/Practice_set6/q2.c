#include <stdio.h>

int fun(int a);
int main() {
    int a,*p;
    p = &a;
    printf("Addres of a : %d\n", p);
    printf("Addres of a : %u\n", &a);
    printf("Addres of a : %u\n", &p); 
    fun(a);   
    return 0;

}

int fun(int a)
{
    printf("Addres%u",&a);
}