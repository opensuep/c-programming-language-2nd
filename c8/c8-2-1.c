#include <stdio.h>

int main(void) {
    int a[4][4] = {{1, 2, 3, 4}, {3, 4, 5, 6}, {5, 6, 7, 8}, {7, 8, 9, 10}};
    int max = a[0][0], l = 0, c = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
                l = i;
                c = j;
            }
        }
    }
    printf("max=%d, l=%d, c=%d\n", max, l, c);
    return 0;
}
