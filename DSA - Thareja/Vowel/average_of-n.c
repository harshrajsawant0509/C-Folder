/*
Average of n number
*/

#include <stdio.h>

int main() {
    int n,i=0,sum=0;
    printf("Enter n for sum : ");
    scanf("%d",&n);
    do
    {
        sum = sum + i;
        i++;
    } while (i<=n);
    
    float avg;
    avg = sum / n ;

    printf("Average : %.02f",avg);
    
    return 0;
}