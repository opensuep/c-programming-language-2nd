#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[80];
    int upper = 0, lower = 0, digit = 0, others = 0;
    fgets(s, 80, stdin);
    char *p = s;
    while (*p != '\n') {
        if (isupper(*p)) {
            ++upper;
        } else if (islower(*p)) {
            ++lower;
        } else if (isdigit(*p)) {
            ++digit;
        } else {
            ++others;
        }
        ++p;
    }
    printf("%d %d %d %d\n", upper, lower, digit, others);
    return 0;
}
