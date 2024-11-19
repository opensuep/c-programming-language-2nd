#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int count[6] = {0};
    for (int i = 0; i < 6000; ++i) {
        ++count[rand() % 6];
    }
    for (int i = 0; i < 6; ++i) {
        printf("%f ", count[i] / 6000.0);
    }
    printf("\n");
    return 0;
}
