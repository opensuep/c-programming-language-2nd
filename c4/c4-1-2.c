#include <stdio.h>

int main() {
    int a, b, t;
    printf("请输入 a 和 b 的值: ");
    if (a < b)
        t = a;
    a = b;
    b = t;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
