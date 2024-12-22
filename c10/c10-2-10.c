#include <stdio.h>
#include <string.h>

void func(char* str1, char* str2) {
    int len = 0;
    for (int i = 0; i < strlen(str1); i += 2) {
        str2[len++] = str1[i];
    }
    str2[len++] = '\0';
}

int main(void) {
    char str1[] = "This is a C program";
    char str2[20];
    func(str1, str2);
    printf("%s\n", str2);
}
