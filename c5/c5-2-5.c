#include <stdio.h>

int main(void) {
    long s, t, sl = 10;
    printf("please enter s: ");
    scanf("%ld", &s);
    t = s % 10;
    while (s > 0) {
        s = s / 100;
        t = s % 10 * sl + t;
        sl *= 10;
    }
    printf("the result is: %ld\n", t);
    return 0;
}
