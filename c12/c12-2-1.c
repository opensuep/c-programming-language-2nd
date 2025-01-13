#include <stdio.h>

int main(void) {
    char s[20];
    printf("please input string: ");
    fgets(s, 20, stdin);
    for (int i = 0; s[i] != '\n'; ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }
    puts(s);
    return 0;
}
