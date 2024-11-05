#include <stdio.h>

int main() {
    int m, n, t;
    printf("Please enter two numbers: ");
    scanf("%d%d", &m, &n);
    // if (m < n) {
    //     t = m;
    //     m = n;
    //     n = t;
    // }
    while (n != 0) {
        t = m;
        m = n;
        n = t % n;
    }
    printf("The greatest common divisor is: %d\n", m);
    return 0;
}
