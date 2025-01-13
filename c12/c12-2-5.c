#include <stdio.h>

int amax(int* a, int n) {
    int max = *a;
    for (int* p = a; p < a + n; ++p) {
        if (max < *p) {
            max = *p;
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
