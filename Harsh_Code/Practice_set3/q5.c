#include <stdio.h>

int main() {
    char ch;
    printf("Enter charscter to chck whether it is Lowwer case or in upper case");
    scanf("%c" , &ch);
    if (ch >= 65 && ch <= 90) {
        printf("'%c' is uppercase.\n", ch);
    }
    else if (ch >= 97 && ch <= 122) {
        printf("'%c' is lowercase.\n", ch);
    }
    else {
        printf("'%c' is not a letter.\n", ch);
    }
    return 0;
}