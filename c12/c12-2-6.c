#include <stdio.h>

#define N 10

int main(void) {
    int a[N] = {70, 50, 70, 90, 80, 65, 70, 50, 90, 65};
    int count = 0, x;
    printf("输入待查找的数: ");
    scanf("%d", &x);
    for (int* p = a; p < a + N; ++p) {
        if (x == *p) {
            ++count;
        }
    }
    printf("共有%d个%d\n", count, x);
    return 0;
}
