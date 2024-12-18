#include <stdio.h>

int main(void) {
    char str[80] = "This Is a C Program";
    printf("str is '%s'\n", str);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    printf("the result is '%s'\n", str);
    return 0;
}
