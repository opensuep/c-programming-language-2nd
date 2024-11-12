#include <stdio.h>

int main(void) {
    int m, n, t, sum;
    if (m > n) {
        t = m;
        m = n;
        n = t;
    }
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {
        if (i % 3 != 0 && i % 7 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
