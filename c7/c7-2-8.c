#include <stdio.h>

int main(void) {
    int a[11] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int x, found = 0;
    scanf("%d", &x);
    for (int i = 0; i < 10; ++i) {
        if (a[i] == x) {
            found = 1;
            for (int j = i; j < 10; ++j) {
                a[j] = a[j + 1];
            }
            break;
        }
    }
    if (found == 1) {
        for (int i = 0; i < 9; ++i) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("%d not found\n", x);
    }
    return 0;
}
