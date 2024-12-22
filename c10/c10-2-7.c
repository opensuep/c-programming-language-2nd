#include <stdio.h>

#define N 10

int bin_search(int* arr, int x, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (x == arr[mid]) {
            return mid;
        } else if (x > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    int a[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x;
    scanf("%d", &x);
    int find_x = bin_search(a, x, 0, N - 1);
    if (find_x == -1) {
        printf("没有找到\n");
    } else {
        printf("a[%d] = %d\n", find_x, x);
    }
    return 0;
}
