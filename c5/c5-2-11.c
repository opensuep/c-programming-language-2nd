#include <stdio.h>

int main(void) {
    double count = 0.01;
    for (int i = 1; i <= 30; ++i) {
        count += count * 2.0;
    }
    printf("%lf %lf\n", 100000.0 * 30, count);
    return 0;
}
