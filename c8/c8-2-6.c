#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i][j] != a[j][i]) {
                printf("方阵不对称\n");
                return 0;
            }
        }
    }
    printf("方阵对称\n");
    return 0;
}
