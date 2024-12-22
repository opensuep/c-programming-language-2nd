#include <stdio.h>

int func(int* arr, int n);

int main(void) {
    int a[12] = {1, 8, 5, 10, 6, 18, 7, 2, 4, 12, 9, 11};
    printf("the result is %d\n", func(a, sizeof(a) / sizeof(a[0])));
    return 0;
}

int func(int* arr, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 3 != 0 && arr[i] % 5 != 0) {
            s += arr[i];
        }
    }
    return s;
}
