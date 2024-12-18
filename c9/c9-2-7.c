#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[80], s2[80];
    fgets(s1, 80, stdin);
    for (int i = 0; s1[i] != '\n'; ++i) {
        s2[i] = s1[strlen(s1) - 2 - i];
    }
    s2[strlen(s1) - 1] = '\0';
    printf("%s\n", s2);
    return 0;
}
