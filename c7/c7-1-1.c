#include <stdio.h>

int main(void) {
    int a[5] = {10, 20, 30, 40, 50};
    printf("输出每个数组元素的值:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%-5d", a[i]);
    }
    printf("\n以十六进制输出每个数组元素的地址:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%-10x", &a[i]);
    }
    printf("\n数组 a 占用的存储空间大小: %zu\n", sizeof(a));
    return 0;
}
