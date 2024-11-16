#include <stdio.h>

int main(void) {
    int x, sum1 = 0, sum2 = 0;
    printf("请输入整数(输入0时结束输入): ");
    scanf("%d", &x);
    while (x != 0) {
        if (x > 0) {
            sum1 += x;
        } else {
            sum2 += x;
        }
        scanf("%d", &x);
    }
    printf("大于0的整数之和为 %d\n", sum1);
    printf("小于0的整数之和为 %d\n", sum2);
    return 0;
}
