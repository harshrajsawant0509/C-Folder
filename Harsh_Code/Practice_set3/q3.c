#include <stdio.h>

int main() {
    int income, tax , x;
    printf("Enter Income : ");
    scanf("%d", &income);
    if (income<=250000)
    {
        printf("Tax : 0\n" );
        printf("Total : %d", income);
    }
    else if (250000<income<=500000)
    {   
        x = income - 250000;
        tax = x * 0.05;
        printf("Tax : %d\n", tax);
        printf("Total : %d", income+tax);
    }
    else if (500000<income<=1000000)
    {   
        x = income - 500000;
        tax = 250000 * 0.05 + x * 0.20;
        printf("Tax : %d\n", tax);
        printf("Total : %d", income+tax);
    }
    else if (500000<income<=1000000)
    {   
        x = income - 1000000;
        tax = 250000 * 0.05 + 500000 * 0.10 + x * 0.30;
        printf("Tax : %d\n", tax);
        printf("Total : %d", income+tax);
    }    
    
    return 0;
}