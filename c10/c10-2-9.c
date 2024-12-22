#include <math.h>
#include <stdio.h>

int convert(int n, int* bin) {
    int len = log2(n);
    for (int i = len; i >= 0; --i) {
        bin[i] = n % 2;
        n /= 2;
    }
    return len + 1;
}

int main(void) {
    int result[32];
    int n;
    scanf("%d", &n);
    printf("bin(%d) = 0b", n);
    int len = convert(n, result);
    for (int i = 0; i < len; ++i) {
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}
