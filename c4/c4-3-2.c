#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int a = rand() % 100 + 1, b = rand() % 100 + 1, op = rand() % 2;
    int t, ans, flag;
    if (op == 1 && a < b) {
        t = a;
        a = b;
        b = t;
    }
    printf("%d %c %d = ", a, op == 0 ? '+' : '-', b);
    scanf("%d", &ans);
    switch (op) {
        case 0:
            flag = ans == a + b;
            break;
        case 1:
            flag = ans == a - b;
            break;
    }
    if (flag) {
        printf("correct!\n");
    } else {
        printf("wrong!\n");
    }
    return 0;
}
