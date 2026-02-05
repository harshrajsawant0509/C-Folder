#include <stdio.h>
#include <math.h>
int main() {
    int a ,b;
    printf("Enter number to get Area of square :");
    scanf("%d", &a);
    b = pow(a,2);
    printf("Area of square : %d", b);
    return 0;
}