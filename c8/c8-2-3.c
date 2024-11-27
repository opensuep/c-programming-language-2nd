#include <stdio.h>

int main(void) {
    int a[3][3] = {1, 2, 3, 4, 5, 6, 9, 8, 7};
    int min[3] = {0};
    for (int i = 0; i < 3; ++i) {
        min[i] = a[i][0];
        for (int j = 0; j < 3; ++j) {
            if (min[i] > a[i][j]) {
                min[i] = a[i][j];
            }
        }
    }
    printf("矩阵 a:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }
    printf("每行最小值:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%-5d", min[i]);
    }
    printf("\n");
    return 0;
}
