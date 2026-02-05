#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num ;
    srand(time(NULL));

    int min = 1, max = 100;
    int randomNumber = (rand() % (max - min + 1)) + min;
    printf("%d \n", randomNumber);
    printf("Guess the number : ");
    while (randomNumber != num)
    {
    scanf("%d", &num);
    if(randomNumber>num)
    {
        printf("HIGHER NUMBER PLEASE!!\n");
    }

    else if (randomNumber<num)
    {
        printf("LOWER NUMBER PLEASE!!\n");
    }
}

printf("Congrats you gusessed it right\n");
    
    return 0;
}
