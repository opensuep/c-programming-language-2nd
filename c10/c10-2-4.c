#include <stdio.h>

long func(long m) {
    long k = 1;
    do {
        k *= (m % 10);
        m /= 10;
    } while (m > 0);
    return k;
}

int main(void) {
    long n;
    printf("请输入整数 n: ");
    scanf("%ld", &n);
    printf("各位之积为 %ld\n", func(n));
    return 0;
}
