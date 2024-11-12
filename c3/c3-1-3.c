#include <stdio.h>

int main(void) {
    float fa, fb, fc, fsum;
    double d;
    fa = 3141.592678;
    fb = 6.026e-27;
    fsum = fa + fb;
    d = 31415826.78;
    printf("float 类型的打印结果:\n");
    printf("fa=%f\tfb=%f\tfsum=%7.2f\n", fa, fb, fsum);
    printf("fa=%e\tfb=%e\tfsum=%e\n", fa, fb, fsum);
    printf("double 类型的打印结果:\n");
    printf("d=%lf, d=%e\n", d, d);
    return 0;
}
