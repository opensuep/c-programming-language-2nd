#include <stdio.h>
#define N 10

int main(void) {
    int a[N] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int low = 0, high = N - 1, x;
    printf("请输入待查找的元素值: ");
    scanf("%d", &x);
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == x) {
            printf("元素 %d 的位置为 %d\n", x, mid);
            return 0;
        } else if (a[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("元素 %d 没有找到\n", x);
    return 0;
}
