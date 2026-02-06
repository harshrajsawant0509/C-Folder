#include <stdio.h>
int sum_and_avg(int n1,int n2,int *x,float *y);
int main() {
    int n1=1,n2=5,sum;
    float avg;
    sum_and_avg(n1,n2,&sum,&avg);
    printf("Sum :%d\n", sum);
    printf("Average : %.2f", avg);
    return 0;
}

int sum_and_avg(int n1,int n2,int *x,float *y)
{
    *x = n1 + n2;
    *y = (*x)/2;
}
