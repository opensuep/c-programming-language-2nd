#include <stdio.h>

int main() {
    char c1 = 'a', c2 = 'b', c3 = 'c';
    c1 += 2;
    c2 += 8;
    c3 -= 32;
    printf("char 类型的打印结果:\n");
    printf("c1=%c\tc2=%c\tc3=%c\n", c1, c2, c3);
    printf("char 类型和 int 类型的关系:\n");
    printf("c1=%d\tc2=%d\tc3=%d\n", c1, c2, c3);
    return 0;
}
