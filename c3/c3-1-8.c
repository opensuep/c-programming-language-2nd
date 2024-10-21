#include <stdio.h>

int main() {
    int a;
    char c1;
    float d;
    double f;
    long m;
    unsigned p;
    a = 61;
    c1 = 'a';
    d = 3.56;
    f = 3157.890121;
    m = -2147483637;
    p = -2147483637;
    // scanf("%d,%c,%f,%lf,%ld,%u", &a, &c1, &d, &f, &m, &p);
    printf("a=%d\nc1=%c\nd=%6.2f\n", a, c1, d);
    printf("f=%15.12f\nm=%ld\np=%u\n", f, m, p);
    return 0;
}
