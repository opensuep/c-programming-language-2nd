#include <stdio.h>

int main(void) {
    char ch[] = {'c', 'o', 'm', 'p', 'u', 't', 'e', 'r'};
    for (int i = 0; i < 8; ++i) {
        printf("%c", ch[i]);
    }
    printf("\n数组 ch 的大小为: %lu\n", sizeof(ch) / sizeof(char));
    return 0;
}
