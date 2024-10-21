#include <stdio.h>

int main() {
    char a, b;
    a = getchar();
    b = getchar();
    putchar(a);
    putchar(b);
    printf("\na=%c, b=%c\n", a, b);
    return 0;
}
