#include <stdio.h>

int main(void) {
    int a[51] = {0}, count = 0;
    for (int i = 2; i <= 100; ++i) {
        int flag = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
            }
        }
        if (flag) {
            a[count] = i;
            ++count;
        }
    }
    for (int i = 0; i < count; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
