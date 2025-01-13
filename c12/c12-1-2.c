#include <stdio.h>
#include <string.h>

int main(void) {
    char* s1 = "abcde";
    char s2[20];
    puts(s1);
    strcpy(s2, "ABCDE");
    puts(s2);
    return 0;
}
