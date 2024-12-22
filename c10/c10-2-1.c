#include <stdio.h>

int fac(int n) {
    int t = 1;
    for (int i = 1; i <= n; ++i) {
        t *= i;
    }
    return t;
}

int main(void) {
    int m, n, comb;
    printf("please input m and n: ");
    scanf("%d%d", &m, &n);
    if (m < n) {
        int t = m;
        m = n;
        n = t;
    }
    if (m < 0 || n < 0) {
        printf("error!\n");
        return 1;
    }
    comb = fac(m) / (fac(n) * fac(m - n));
    printf("comb(%d, %d) = %d\n", m, n, comb);
    return 0;
}
