#include <stdio.h>
#include <string.h>

int main(void) {
    char s[80], t[80];
    printf("please enter string: ");
    fgets(s, 80, stdin);
    int len = strlen(s) - 1;
    for (int i = 0; i < len; ++i) {
        t[i] = s[i];
    }
    for (int i = 0; i < len; ++i) {
        t[len + i] = s[len - i - 1];
    }
    t[2 * len + 1] = '\0';
    printf("the result is '%s'\n", t);
    return 0;
}
