#include <stdio.h>

float f(float x) { return x * x * x - x * x - 1; }

int main() {
    double low = 0, mid = 1.5, high = 3;
    while (high - low > 1e-8) {
        if (f(low) * f(mid) < 0) {
            high = mid;
        } else if (f(high) * f(mid) < 0) {
            low = mid;
        }
        mid = (low + high) / 2.0;
    }
    printf("%f\n", mid);
    return 0;
}
