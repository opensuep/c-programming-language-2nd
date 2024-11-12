#include <stdio.h>

int main(void) {
    float x, amax, amin;
    printf("请输入成绩(输入负数时结束): ");
    scanf("%f", &x);
    amax = x;
    amin = x;
    while (x >= 0) {
        if (x > amax) {
            amax = x;
        }
        if (x < amin) {
            amin = x;
        }
        scanf("%f", &x);
    }
    printf("amax = %f\namin = %f\n", amax, amin);
    return 0;
}
