/*TO check the charcter is vowel or not*/

#include <stdio.h>

int main() {
    char a;
    printf("Enter a character to check is it vowels or not");
    scanf("%c",&a);
    switch (a)
    {
    case 'a':
        printf("%c is a vowel",a);
        break;

    case 'e':
        printf("%c is a vowel",a);
        break;

    case 'i':
        printf("%c is a vowel",a);
        break;

    case 'o':
        printf("%c is a vowel",a);
        break;

    case 'u':
        printf("%c is a vowel",a);
        break;
    
    default:
        printf("Not a vowel ");
        break;
    }
    return 0;
}