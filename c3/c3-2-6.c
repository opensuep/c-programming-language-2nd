#include <stdio.h>
#define pi 3.1415926

int main(void) {
    double r, h, C, S, V;
    scanf("%lf%lf", &r, &h);
    C = 2 * pi * r;
    S = pi * r * r;
    V = S * h;
    printf("C=%.2g, S=%.2g, V=%.2g\n", C, S, V);
    return 0;
}
