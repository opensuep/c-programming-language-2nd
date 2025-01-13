#include <stdio.h>

int amax(int* a, int n) {
    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main(void) {
    int a[10];
    printf("please input array: ");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("max = %d\n", amax(a, 10));
    return 0;
}
