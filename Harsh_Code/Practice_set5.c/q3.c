#include <stdio.h>

float FOA(int m);

int main() {
    int m;
    printf("Enter mass to get force of attraction :");
    scanf("%d", &m);

    FOA(m);
    return 0;
}

float FOA(int m)
{
    float foa;
    foa = m * 9.8;
    printf("Force of attraction : %.2f", foa);
}