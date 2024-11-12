#include <stdio.h>

int main(void) {
    double sum = 0;
    for (int i = 0; i <= 20; ++i) {
        int t = 1;
        for (int j = 1; j <= i; ++j) {
            t *= j;
        }
        sum += 1.0 / t;
    }
    printf("%lf\n", sum);
    return 0;
}
