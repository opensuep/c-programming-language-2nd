#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 0; i <= 3; ++i) {
        for (j = 0; j <= 10 - i; ++j)
            printf(" ");
        for (k = 0; k <= -2 * j + 22; ++k)
            printf("*");
        printf("\n");
    }
    return 0;
}
