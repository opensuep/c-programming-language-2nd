#include <stdio.h>

int main(void) {
    int a, *p = &a;
    *p = 10;
    printf("%p %d\n", p, *p);
    return 0;
}
