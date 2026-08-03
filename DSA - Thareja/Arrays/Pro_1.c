// Write a program to read and display n numbers using an array
#include <stdio.h>

int main() {
    int num[10],n;
    printf("Enter the number in array");
    for (int i = 0; i < 10; i++)
    {
        printf("num[%d]=",i);
        scanf("%d",&num[i]);
    }

    printf("Output:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("num[%d]=%d\n",i,num[i]);
    }
    
    return 0;
}