#include <stdio.h>

int main(void) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < 10; i += 2) {
        sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}
