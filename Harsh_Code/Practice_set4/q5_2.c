#include <stdio.h>

int main() {
    int sum = 0 , x , i ;
    printf("Enter number to get sum of natural number : ");
    scanf("%d", &x);
    do
    {
      sum = sum + i;
      i++;
    } while (i <= x);

    printf("Sum : %d", sum);
    
    return 0;
}