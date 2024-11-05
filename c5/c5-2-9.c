#include <stdio.h>

long double factorial(int x) {
    long double result = 1.0;
    for (int i = 2; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    long double result = 0.0;
    for (int i = 1; i <= 20; ++i) {
        result += factorial(i);
    }
    printf("%Lf\n", result);
    return 0;
}
