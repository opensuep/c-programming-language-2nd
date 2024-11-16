#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 100; i <= 200; ++i) {
        int flag = 1;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            sum += i;
        }
    }
    printf("the sum is %d\n", sum);
    return 0;
}
