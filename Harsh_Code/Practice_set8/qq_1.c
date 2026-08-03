#include <stdio.h>

int main()
{
    char a[] = "Harsh";
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    char b[50];
    // printf("Enter input : ");
    // scanf("%s",&b);
    // printf("%s\n", b);
    char c[50];
    printf("Enter a Sentence:");
    gets(c);
    puts(c);
    return 0;
}