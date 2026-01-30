// SI = (P × R × T) / 100 
#include <stdio.h>

int main() {
    float si , p , r , t;
    printf("Enter Principal,Rate of Interest,Time period to get Simple Intrest :");
    scanf("%f %f %f", &p,&r,&t);
    si = (p*r*t)/100;
    printf("Simple Intrest : %.2f", si);
    return 0;
}