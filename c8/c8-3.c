#include <stdio.h>
#define M 5

int main(void) {
    FILE* fp = fopen("score.txt", "r");
    fclose(fp);
    return 0;
}
