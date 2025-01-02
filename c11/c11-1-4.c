#include <stdio.h>

union data {
    int i;
    float a;
    char c[4];
};

int main(void) {
    union data u;
    printf("u 所占的存储空间大小为 %ld\n", sizeof(u));
    printf("请输入数据: ");
    scanf("%d", &u.i);
    printf("i=%d a=%f ", u.i, u.a);
    for (int i = 0; i < 4; ++i) {
        printf("c[%d]=%c ", i, u.c[i]);
    }
    printf("\n");
    return 0;
}