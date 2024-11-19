#include <stdio.h>

int main(void) {
    int a[16] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int x, ix = 10;
    scanf("%d", &x);
    for (int i = 0; i < 10; ++i) {
        if (x <= a[i]) {
            ix = i;
            break;
        }
    }
    for (int i = 15; i > ix; --i) {
        a[i] = a[i - 1];
    }
    a[ix] = x;
    for (int i = 0; i < 16; ++i) {
        if (a[i] == 0) {
            break;
        }
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
