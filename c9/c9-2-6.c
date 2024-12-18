#include <ctype.h>
#include <stdio.h>

int main(void) {
    char s[80];
    fgets(s, 80, stdin);
    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
    for (int i = 0; s[i] != '\n'; ++i) {
        if (isupper(s[i])) {
            ++upper;
        } else if (islower(s[i])) {
            ++lower;
        } else if (isdigit(s[i])) {
            ++digit;
        } else if (s[i] == ' ') {
            ++space;
        } else {
            ++other;
        }
    }
    printf("%d %d %d %d %d\n", upper, lower, digit, space, other);
    return 0;
}
