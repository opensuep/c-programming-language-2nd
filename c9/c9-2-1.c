#include <stdio.h>

int main(void) {
    char s[10];
    int n = 0;
    printf("请输入数字字符串: ");
    fgets(s, 10, stdin);
    for (int i = 0; s[i] != '\n'; ++i) {
        if (s[i] < '0' || s[i] > '9') {
            printf("输入非法字符\n");
            return 1;
        } else {
            n = n * 10 + s[i] - '0';
        }
    }
    printf("n=%d\n", n);
    return 0;
}
