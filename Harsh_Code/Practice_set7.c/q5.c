#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp;

    int i = 0;
    int j = n - 1;

    while (i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    // print reversed array
    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}
