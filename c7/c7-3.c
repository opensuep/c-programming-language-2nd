// 洛谷 P1601 高精度加法的原题
// https://www.luogu.com.cn/problem/P1601

#include <stdio.h>
#define MAX_DIGIT 512

int main(void) {
    short a[MAX_DIGIT] = {0}, b[MAX_DIGIT] = {0}, c[MAX_DIGIT] = {0};
    int an = MAX_DIGIT - 1, bn = MAX_DIGIT - 1;
    int carry = 0, t;
    char ch;
    while ((ch = getchar()) != '\n') {
        a[an--] = ch - '0';
    }
    ++an;
    while ((ch = getchar()) != '\n') {
        b[bn--] = ch - '0';
    }
    ++bn;
    for (int i = 0; i < (MAX_DIGIT - an) / 2; ++i) {
        t = a[an + i];
        a[an + i] = a[MAX_DIGIT - i - 1];
        a[MAX_DIGIT - i - 1] = t;
    }
    for (int i = 0; i < (MAX_DIGIT - bn) / 2; ++i) {
        t = b[bn + i];
        b[bn + i] = b[MAX_DIGIT - i - 1];
        b[MAX_DIGIT - i - 1] = t;
    }
    for (int i = MAX_DIGIT - 1; i >= 0; --i) {
        c[i] = a[i] + b[i] + carry;
        if (c[i] >= 10) {
            c[i] -= 10;
            carry = 1;
        } else {
            carry = 0;
        }
        if (i < an - 1 && i < bn - 1) {
            break;
        }
    }
    int start = an < bn ? an : bn;
    if (start - 1 >= 0) {
        if (c[start - 1] != 0) {
            --start;
        }
    }
    for (int i = start; i < MAX_DIGIT; ++i) {
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}
