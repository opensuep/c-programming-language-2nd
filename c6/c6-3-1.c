#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OP_PLUS 0
#define OP_MINUS 1
#define OP_MUL 2
#define OP_DIV 3

int main(void) {
    srand((unsigned)time(NULL));
    int count = 0;
    while (count <= 10) {
        int a, b, t, ans;
        int op = rand() % 4;
        switch (op) {
            case OP_PLUS:
                a = rand() % 50 + 1;
                b = rand() % 50 + 1;
                break;
            case OP_MINUS:
                a = rand() % 100 + 1;
                b = rand() % 100 + 1;
                if (a < b) {
                    t = a;
                    a = b;
                    b = t;
                }
                break;
            case OP_MUL:
                a = rand() % 10 + 1;
                b = rand() % 10 + 1;
                break;
            case OP_DIV:
                b = rand() % 10 + 1;
                t = rand() % 10 + 1;
                a = b * t;
                break;
        }
        printf("%d %c %d = ", a,
               op == OP_PLUS    ? '+'
               : op == OP_MINUS ? '-'
               : op == OP_MUL   ? '*'
                                : '/',
               b);
        scanf("%d", &ans);
        while (getchar() != '\n') {
        }
        switch (op) {
            case OP_PLUS:
                if (ans == a + b) {
                    printf("correct :)\n");
                } else {
                    printf("wrong :(\n");
                }
                break;
            case OP_MINUS:
                if (ans == a - b) {
                    printf("correct :)\n");
                } else {
                    printf("wrong :(\n");
                }
                break;
            case OP_MUL:
                if (ans == a * b) {
                    printf("correct :)\n");
                } else {
                    printf("wrong :(\n");
                }
                break;
            case OP_DIV:
                if (ans == a / b) {
                    printf("correct :)\n");
                } else {
                    printf("wrong :(\n");
                }
                break;
        }
        ++count;
        if (count == 10) {
            char ch;
            printf("continue? [Y/n] ");
            ch = getchar();
            if (ch == 'N' || ch == 'n') {
                break;
            } else {
                count = 0;
            }
        }
    }
    return 0;
}
