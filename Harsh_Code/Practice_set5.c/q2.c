#include <stdio.h>
float cel_to_Far(float a);
int main() {
    float cel;
    printf("Enter temperature in celcius :");
    scanf("%f", &cel);

    cel_to_Far(cel);
    return 0;
}

float cel_to_Far(float a)
{
    float f;
    f = (a * 9/5) + 32;
    printf("Fahrenheit : %.2f", f);
}