#include <stdio.h>
#define M 100

int main() {
    int a = 0, b = 0;
    for (int i = 1; i <= M; i += 2) {
        a += i;
        b += i + 1;
    }
    printf("偶数之和是: %d\n", b);
    printf("奇数之和是: %d\n", a);
}
