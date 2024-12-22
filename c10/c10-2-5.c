#include <stdio.h>

int findmax(int* s, int n) {
    int p = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] > s[p]) {
            p = i;
        }
    }
    return p;
}

int main(void) {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    int k = findmax(a, 10);
    printf("最大元素 a[%d]=%d\n", k, a[k]);
    return 0;
}
