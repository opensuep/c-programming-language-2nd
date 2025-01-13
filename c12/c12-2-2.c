#include <stdio.h>

int main(void) {
    char s[20], *p = s;
    printf("please input string: ");
    scanf("%s", s);
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z') {
            *p += 'a' - 'A';
        }
        ++p;
    }
    p = s;
    while (*p != '\0') {
        putchar(*p);
        ++p;
    }
    printf("\n");
    return 0;
}
