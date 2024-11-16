#include <stdio.h>

int main(void) {
    int m, n, t;
    printf("please enter two numbers: ");
    scanf("%d%d", &m, &n);
    while (n != 0) {
        t = m;
        m = n;
        n = t % n;
    }
    printf("the greatest common divisor is: %d\n", m);
    return 0;
}
