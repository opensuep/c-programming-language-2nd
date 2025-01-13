#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_pinyin(const void* a, const void* b) {
    const char* py1 = (const char*)a;
    const char* py2 = (const char*)b;
    return strcmp(py1, py2);
}

int main(void) {
    char pinyin[20][8] = {"zhao", "qian",  "sun",   "li",   "zhou",
                          "wu",   "zheng", "wang",  "feng", "chen",
                          "chu",  "wei",   "jiang", "shen", "han",
                          "yang", "zhu",   "qin",   "you",  "xu"};
    qsort(pinyin, 20, sizeof(char[8]), cmp_pinyin);
    for (int i = 0; i < 20; ++i) {
        printf("%-5s ", pinyin[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
    return 0;
}
