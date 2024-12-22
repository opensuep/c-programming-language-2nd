#include <stdio.h>

int p(int n, int x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return n;
    } else {
        return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
    }
}

int main(void) {
    int n, x;
    scanf("%d%d", &n, &x);
    printf("pn(%d, %d) = %d\n", n, x, p(n, x));
    return 0;
}
