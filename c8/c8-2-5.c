#include <stdio.h>

int main(void) {
    int a[10][10] = {0};
    for (int i = 0; i < 10; ++i) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < i; ++j) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
