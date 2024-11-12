#include <stdio.h>

int main(void) {
    int i = 0;
    while (1) {
        i += 7;
        if (i % 2 != 1) {
            continue;
        }
        if (i % 3 != 2) {
            continue;
        }
        if (i % 5 != 4) {
            continue;
        }
        if (i % 6 != 5) {
            continue;
        }
        break;
    }
    printf("%d\n", i);
    return 0;
}
