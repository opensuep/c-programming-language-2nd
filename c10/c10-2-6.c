#include <stdio.h>

int sum(int* arr, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            s += arr[i];
        }
    }
    return s;
}

int main(void) {
    int a[10] = {10, 4, 2, 7, 3, 12, 5, 34, 5, 9};
    printf("the result is %d\n", sum(a, 10));
    return 0;
}
