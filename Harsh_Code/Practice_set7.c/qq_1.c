#include <stdio.h>

int main() {
    int arr[100];
    printf("---Enter marks of five student---\n");

    for(int i = 0; i<5 ; i++)
    {
        printf("Student %d :", i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Student %d : %d\n", j+1, arr[j]);
    }
    

    return 0;
}