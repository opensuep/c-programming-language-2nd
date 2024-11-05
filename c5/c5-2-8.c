#include <stdio.h>

int main() {
    int is_alpha = 0, is_space = 0, is_digit = 0, other = 0;
    char ch = getchar();
    while (ch != '\n') {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ++is_alpha;
        } else if (ch == ' ') {
            ++is_space;
        } else if (ch >= '0' && ch <= '9') {
            ++is_digit;
        } else {
            ++other;
        }
        ch = getchar();
    }
    printf("%d %d %d %d\n", is_alpha, is_space, is_digit, other);
    return 0;
}
