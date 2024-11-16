#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = i + 1;
    }
    printf("数组 a:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%-3d", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        a[9 - i] = a[i];
    }
    printf("对折后的数组 a:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%-3d", a[i]);
    }
    printf("\n");
    return 0;
}
