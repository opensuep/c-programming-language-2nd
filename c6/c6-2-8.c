#include <math.h>
#include <stdio.h>

double fibonacci(int n) {
    double phi = (sqrt(5) + 1.0) / 2.0;
    return (pow(phi, n) - pow(1.0 - phi, n)) / sqrt(5.0);
}

int main(void) {
    long double sum = 0;
    for (int i = 3; i <= 23; ++i) {
        sum += fibonacci(i) / fibonacci(i - 1);
    }
    printf("%Lf\n", sum);
    return 0;
}
