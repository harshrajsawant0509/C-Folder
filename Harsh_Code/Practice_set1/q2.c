#include <stdio.h>

int main() {
    int a ,PI = 3.14;
    printf("Enter radius to get area of circle:");
    scanf("%d", &a);
    printf("Area of circle : %d\n", PI*a*a);
    printf("Enter height to get area of cylinder:");
    int h;
    scanf("%d", &h);
    printf("Area of Cylinder : %d", 2*PI*a*h );
    return 0;
}