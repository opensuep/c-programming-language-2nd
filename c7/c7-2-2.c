#include <stdio.h>
#define M 11

int main(void) {
    int a[M];
    printf("please input array a: ");
    for (int i = 0; i < M - 1; ++i) {
        scanf("%d", &a[i]);
    }
    a[M - 1] = a[0];
    for (int i = 0; i < M - 1; ++i) {
        if (a[i] > a[M - 1]) {
            a[M - 1] = a[i];
        }
    }
    printf("max is %d\n", a[M - 1]);
    return 0;
}
