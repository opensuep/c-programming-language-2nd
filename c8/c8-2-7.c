#include <stdio.h>

int main(void) {
    int m, r;
    scanf("%d", &m);
    int a[m][m], b[m][m], c[m][m];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            c[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < m; ++k) {
            r = a[i][k];
            for (int j = 0; j < m; ++j) {
                c[i][j] += b[k][j] * r;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%-5d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
