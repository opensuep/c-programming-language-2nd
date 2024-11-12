#include <stdio.h>

int main(void) {
    int ret, x, d1, d2, d3, d4, d5;
    ret = scanf("%d", &x);
    if (ret == 0 || ret == EOF) {
        printf("wrong number!\n");
        return 0;
    }
    if (x < 0 || x > 99999) {
        printf("wrong number!\n");
        return 0;
    }
    d1 = (x / 10000) % 10;
    d2 = (x / 1000) % 10;
    d3 = (x / 100) % 10;
    d4 = (x / 10) % 10;
    d5 = x % 10;
    if (x < 10) {
        printf("%d\n", d5);
    } else if (x < 100) {
        printf("%d%d\n", d5, d4);
    } else if (x < 1000) {
        printf("%d%d%d\n", d5, d4, d3);
    } else if (x < 10000) {
        printf("%d%d%d%d\n", d5, d4, d3, d2);
    } else {
        printf("%d%d%d%d%d\n", d5, d4, d3, d2, d1);
    }
    return 0;
}
