#include <stdio.h>

int main(void) {
    printf("五角\t二角\t一角\n");
    for (int i = 0; i <= 2; ++i) {
        for (int j = 0; j <= 5; ++j) {
            for (int k = 0; k <= 10; ++k) {
                if (i * 5 + j * 2 + k == 10) {
                    printf("%d\t%d\t%d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
