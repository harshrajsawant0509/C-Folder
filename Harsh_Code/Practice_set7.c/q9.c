#include <stdio.h>

int main() {
    int a[2][2][2];
    int i, j, k;

    int count = 1;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                a[i][j][k] = count++;
            }
        }
    }

    printf("Element\tAddress\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("%d\t%p\n", a[i][j][k], &a[i][j][k]);
            }
        }
    }

    return 0;
}
