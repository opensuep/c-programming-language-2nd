#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[80] = "This is a ";
    char str2[80] = "c program";
    printf("str1 is '%s'\n", str1);
    printf("str2 is '%s'\n", str2);
    printf("length of str1 is %ld\n", strlen(str1));
    printf("length of str2 is %ld\n", strlen(str2));
    if (strcmp(str1, str2)) {
        printf("the max is '%s'\n", str1);
    } else {
        printf("the max is '%s'\n", str2);
    }
    strcat(str1, str2);
    printf("the result is '%s'\n", str1);
    return 0;
}
