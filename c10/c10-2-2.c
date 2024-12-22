#include <stdio.h>

int prime(int m);

int main(void) {
    int m = 2, n = 20, s = 0;
    for (int i = m; i <= n; ++i) {
        if (!prime(i)) {
            s += i;
        }
    }
    printf("sum is %d\n", s);
    return 0;
}

int prime(int m) {
    for (long i = 2; i * i <= m; ++i) {
        if (m % i == 0) {
            return 0;
        }
    }
    return 1;
}
