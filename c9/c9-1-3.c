#include <stdio.h>
#include <string.h>

int main(void) {
    char ch[] = "computer";
    for (int i = 0; ch[i] != '\0'; ++i) {
        printf("%c", ch[i]);
    }
    printf("\n数组 ch 的大小为: %lu\n", sizeof(ch) / sizeof(char));
    printf("字符串 ch 的长度为: %lu\n", strlen(ch));
    return 0;
}
