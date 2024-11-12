#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 1000; ++i) {
        int t = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                t += j;
            }
        }
        if (t == i) {
            printf("%-4d is a full number\n", i);
            printf("factors of %-4d are: ", i);
            for (int k = 1; k < i; ++k) {
                if (i % k == 0) {
                    printf("%d ", k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
