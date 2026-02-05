#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,x,y ;
    srand(time(NULL));

    int min = 1, max = 100;
    int randomNumber = (rand() % (max - min + 1)) + min;
    printf("%d \n", randomNumber);
    x= randomNumber - 5;
    y = randomNumber + 5;
    printf("Guess the number : ");
    while (randomNumber != num)
    {
    scanf("%d", &num);
    if(randomNumber>num)
    {
        if(x< num < randomNumber )
        {
            printf("YOU ARE TO CLOSE!! \n");
            printf("HIGHER NUMBER PLEASE!!\n");
        }
        else{
        printf("HIGHER NUMBER PLEASE!!\n");
        }
    }

    else if (randomNumber < num )
    {
        if (randomNumber < num < y)
        {
            printf("YOU ARE TO CLOSE!!");
            printf("LOWER NUMBER PLEASE!!\n");
        }
        else
        {
        printf("LOWER NUMBER PLEASE!!\n");
        }
    }
}

printf("CONGRATS U GET THE RIGHT NUMBER!!\n");
    
    return 0;
}
