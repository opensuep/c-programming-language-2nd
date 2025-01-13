#include <stdio.h>

int cmp_str(char* s1, char* s2) {
    char *p1 = s1, *p2 = s2;
    while (*p1 != '\0' || *p2 != '\0') {
        if (*p1 == *p2) {
            ++p1;
            ++p2;
        } else {
            return p1 - p2;
        }
    }
    return 0;
}

int main(void) {
    char s1[80], s2[80];
    printf("please input s1: ");
    fgets(s1, 80, stdin);
    printf("please input s2: ");
    fgets(s2, 80, stdin);
    int c = cmp_str(s1, s2);
    if (c > 0) {
        printf("s1 > s2\n");
    } else if (c < 0) {
        printf("s1 < s2\n");
    } else {
        printf("s1 == s2\n");
    }
    return 0;
}
