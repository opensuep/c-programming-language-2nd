#include <stdio.h>

int main(void) {
    int a[10] = {1, 5, 2, 5, 6, 8, 7, 4, 3, 0};
    int x, k = 0, f = 0;
    printf("please input x: ");
    scanf("%d", &x);
    for (int i = 0; i < 10; ++i) {
        if (a[i] == x) {
            f = 1;
            k = i;
        }
    }
    if (f == 1) {
        printf("last %d is a[%d]\n", x, k);
    } else {
        printf("%d is not found\n", x);
    }
    return 0;
}
