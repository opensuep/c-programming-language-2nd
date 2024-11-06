#include <stdio.h>

int is_prime(int x) {
    if (x < 2) {
        return 0;
    }
    for (int i = 2; (long long)i * i <= x; ++i) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    scanf("%d", &n);
    m = n;
    for (int i = 2; (long long)i * i <= n; ++i) {
        if (!is_prime(i)) {
            continue;
        }
        while (m % i == 0) {
            m /= i;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
