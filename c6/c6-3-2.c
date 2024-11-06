#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    srand(128);
    for (int i = 0; i < 1e8; ++i) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if ((x * x + y * y) * (x * x + y * y) < 1) {
            ++count;
        }
    }
    printf("%lf\n", (double)count / 1e8 * 4);
    return 0;
}
