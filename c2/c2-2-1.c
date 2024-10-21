#include <stdio.h>

int main() {
    char ch;
    printf("input ch: ");
    ch = getchar();
    ch += 32;
    putchar(ch);
    printf("\nch=%d\n", ch);
    return 0;
}
