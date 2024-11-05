#include <math.h>
#include <stdio.h>

int main() {
    double half_pi = 1.0, i = 1.0;
    double item = 1.0 / (i * (i + 2.0));
    while (fabs(item) > 1.0e-6) {
        half_pi *= 1.0 + item;
        i += 2.0;
        item = 1.0 / (i * (i + 2.0));
    }
    printf("%lf\n", half_pi * 2);
    return 0;
}
