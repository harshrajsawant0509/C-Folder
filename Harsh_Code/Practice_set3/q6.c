#include <stdio.h>

int main() {
    int n1,n2,n3,n4;
    printf("Enter number to check the Greatest : ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    if(n1>n2 && n1>n3 && n1>n4)
    {
      printf("%d is the Greatest", n1);  
    }
    if(n2>n1 && n2>n3 && n2>n4)
    {
      printf("%d is the Greatest", n2);  
    }
    if(n3>n2 && n3>n1 && n3>n4)
    {
      printf("%d is the Greatest", n3);  
    }
    if(n4>n2 && n4>n3 && n4>n1)
    {
      printf("%d is the Greatest", n4);  
    }

    return 0;
}