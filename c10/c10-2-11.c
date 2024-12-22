#include <stdio.h>

void ssort(int* arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[min] > arr[j]) {
                min = j;
            }
            int tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
}

int main(void) {
    int arr[] = {2, 3, 1, 4, 6, 5, 8, 7, 9, 0};
    ssort(arr, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
