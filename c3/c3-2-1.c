#include <stdio.h>

int main(void) {
    int a, b, t;
    a = 2;
    b = 1;
    t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
