#include <stdio.h>

int main() {
    int f,c;
        printf("Enter the Temperature in Celcius to convert in Fahrenheit:");
        scanf("%d",&c);
        f = (c*1.8)+32 ;
        printf("%d Celcius = %d Fahrenheit ", c , f);
    return 0;
}