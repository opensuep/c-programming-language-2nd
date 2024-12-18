#include <stdio.h>

int main(void) {
    char s[80], c;
    fgets(s, 80, stdin);
    scanf("%c", &c);
    int count = 0;
    for (int i = 0; s[i] != '\n'; ++i) {
        if (s[i] == c) {
            ++count;
        }
    }
    printf("%d\n", count);
    return 0;
}
