#include <stdio.h>

int main(void) {
    float F, C;
    scanf("%f", &F);
    C = 5.0 / 9 * (F - 32);
    printf("%.2f\n", C);
    return 0;
}
