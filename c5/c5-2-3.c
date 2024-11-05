#include <stdio.h>

int main() {
    int num, k = 1;
    printf("请输入一个数: ");
    scanf("%d", &num);
    do {
        k *= (num % 10);
        num /= 10;
    } while (num != 0);
    printf("各位数字的积为: %d\n", k);
    return 0;
}
