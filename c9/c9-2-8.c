#include <stdio.h>

void my_strcat(char* dst, char* src) {
    while (*dst != '\0') {
        ++dst;
    }
    --dst;
    while (*src != 0) {
        *(++dst) = *(src++);
    }
    *(++dst) = '\0';
}

int main(void) {
    char s1[80] = "this is ";
    char s2[80] = "a test";
    my_strcat(s1, s2);
    printf("%s\n", s1);
}
