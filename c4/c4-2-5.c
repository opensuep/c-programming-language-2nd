#include <stdio.h>
#define USE_IF 1
// 改变 USE_IF 的值即可切换不同的实现

int main(void) {
    int score, ret = scanf("%d", &score);
    if (ret == 0 || ret == EOF) {
        printf("wrong score!\n");
        return 0;
    }
    if (score < 0 || score > 100) {
        printf("wrong score!\n");
        return 0;
    }
#if USE_IF == 1
    if (score < 60) {
        printf("E\n");
    } else if (score < 70) {
        printf("D\n");
    } else if (score < 80) {
        printf("C\n");
    } else if (score < 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }
#else
    switch (score / 10) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("E\n");
    }
#endif
    return 0;
}
