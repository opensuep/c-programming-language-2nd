#include <stdio.h>

int m, n;

void swap() {
    int t;
    t = m;
    m = n;
    n = t;
    printf("function swap:\nm=%d, n=%d\n", m, n);
}

int main(void) {
    int m, n;
    printf("please input m and n: ");
    scanf("%d %d", &m, &n);
    swap();
    printf("function main:\nm=%d, n=%d\n", m, n);
    return 0;
}
