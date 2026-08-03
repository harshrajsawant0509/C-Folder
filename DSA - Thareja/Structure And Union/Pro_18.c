/* Write a program to define a union and a structure 
both having exactly the same members. Using 
the sizeof operator, print the size of structure 
variable as well as union variable and comment 
on the result.
*/

#include <stdio.h>

struct dis1
{
    int kms;
    char name[10];
};

union dis2
{
  int kms;
  char name[10];  
};


int main() 
{
    struct dis1 d1;
    union dis2 d2;

    int x = sizeof(d1);
    int y = sizeof(d2);

    printf("Size of a structure : %d",x);
    printf("Size of Union : %d",y);    
}

