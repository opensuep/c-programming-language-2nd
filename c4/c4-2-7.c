// 洛谷 P5717 三角形分类的小小变形
// https://www.luogu.com.cn/problem/P5717

#include <math.h>
#include <stdio.h>

void sort(int* a, int* b, int* c) {
    // 将 3 个数从小到大依次排序
    int d;
    if (*a > *b) {
        d = *a;
        *a = *b;
        *b = d;
    }
    if (*b > *c) {
        d = *b;
        *b = *c;
        *c = d;
    }
    if (*a > *b) {
        d = *a;
        *a = *b;
        *b = d;
    }
}

int main(void) {
    int a, b, c;
    double p, area;
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    // 非三角形
    if (a + b <= c) {
        printf("Not triangle\n");
        return 0;
    }
    // 计算三角形面积
    p = 0.5 * (a + b + c);
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Area is %.2lf\n", area);
    // 直角三角形
    if (a * a + b * b == c * c) {
        printf("Right triangle\n");
    }
    // 锐角三角形
    if (a * a + b * b > c * c) {
        printf("Acute triangle\n");
    }
    // 钝角三角形
    if (a * a + b * b < c * c) {
        printf("Obtuse triangle\n");
    }
    // 等腰三角形
    if (a == b) {
        printf("Isosceles triangle\n");
    }
    // 等边三角形
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    return 0;
}
