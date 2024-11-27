#include <stdio.h>
#define M 3
#define N 5

int main(void) {
    char a[M][N] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                    'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    printf("输出每个数组元素的值:\n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%-5c", a[i][j]);
        }
        printf("\n");
    }
    printf("以十六进制输出每个数组元素的地址:\n");
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%-10x", &a[i][j]);
        }
        printf("\n");
    }
    printf("输出数组占的内存大小: %lu\n", sizeof(a));
    return 0;
}
