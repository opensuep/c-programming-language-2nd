#include <stdio.h>

int main(void) {
    int a[] = {5, 9, 12, 9, 8, 20, 8, 6, 15, 5, -1};
    int i = 0, x;
    scanf("%d", &x);
    while (a[i] > 0) {
        if (a[i] == x) {
            int j = i;
            while (a[j] > 0) {
                a[j] = a[j + 1];
                ++j;
            }
        }
        ++i;
    }
    int k = 0;
    while (a[k] > 0) {
        printf("%d ", a[k]);
        ++k;
    }
    printf("\n");
    return 0;
}
