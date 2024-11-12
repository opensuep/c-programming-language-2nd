#include <stdio.h>

int main(void) {
    float fa, fb;
    printf("inout x and y: ");
    scanf("%f%f", &fa, &fb);
    printf("float 类型数据的打印结果为: ");
    printf("fa=%10.3f\tfb=%.3f\n", fa, fb);
    return 0;
}
