#include <stdio.h>

int main(void) {
    int n = 100;
    float f = n + 2.5;
    double d;
    printf("f=%f\n", f);
    n = f / 2;
    printf("n=%d\n", n);
    n = (1 / 2) * f;
    printf("n=%d\n", n);
    d = f * 2;
    printf("d=%lf\n", d);
    return 0;
}
