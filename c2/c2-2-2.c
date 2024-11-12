#include <stdio.h>
#define pi 3.1415926

int main(void) {
    double r, area, circu;
    printf("input r: ");
    scanf("%lf", &r);
    area = pi * r * r;
    circu = 2 * pi * r;
    printf("r=%g, area=%g, circu=%g\n", r, area, circu);
    return 0;
}
