#include <stdio.h>
#define pi 3.14159

int main(void) {
    float r;
    double area;
    area = pi * r * r;
    printf("请输入圆的半径: ");
    scanf("%f", &r);
    printf("计算结果如下:\n");
    printf("r=%5.2f, area=%lf\n", r, area);
    return 0;
}
