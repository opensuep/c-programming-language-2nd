#include <stdio.h>

int main(void) {
    int a[10] = {10, 4, 2, 7, 3, 12, 5, 34, 5, 9}, i;
    float s = 0.0;
    for (i = 0; i < 10; ++i) {
        s += a[i];
    }
    float avg = s / i;
    printf("the average is %.2f\n", avg);
    return 0;
}
