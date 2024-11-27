#include <stdio.h>

int main(void) {
    int a[5][5] = {0}, k = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i >= j) {
                a[i][j] = 1;
            } else {
                a[i][j] = ++k;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
