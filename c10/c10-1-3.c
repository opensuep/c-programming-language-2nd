#include <stdio.h>

void swap(int* m, int* n) {
    int t;
    t = *m;
    *m = *n;
    *n = t;
    printf("function swap:\nm=%p, n=%p\n", m, n);
}

int main() {
    int m, n;
    printf("please input m and n: ");
    scanf("%d %d", &m, &n);
    swap(&m, &n);
    printf("function main:\nm=%d, n=%d\n", m, n);
    return 0;
}
