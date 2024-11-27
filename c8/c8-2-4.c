#include <stdio.h>

int main(void) {
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    printf("矩阵 a:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }
    printf("矩阵 a 的转置:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%-5d", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
