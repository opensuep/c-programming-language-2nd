#include <stdio.h>

int gcd(int m, int n) {
    while (n != 0) {
        int t = m;
        m = n;
        n = t % n;
    }
    return m;
}

int lcm(int m, int n) { return m * n / gcd(m, n); }

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
    return 0;
}
