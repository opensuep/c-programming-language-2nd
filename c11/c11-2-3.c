#include <stdio.h>
#include <string.h>

typedef struct {
    char name[8];
    int count;
} person;

int main(void) {
    person students[3] = {{"zhang", 0}, {"wang", 0}, {"li", 0}};
    char name[8];
    for (int i = 0; i < 10; ++i) {
        printf("请输入得票人姓名: ");
        scanf("%s", name);
        for (int j = 0; j < 3; ++j) {
            if (strcmp(name, students[j].name) == 0) {
                ++students[i].count;
            }
        }
    }
    printf("\n统计结果:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%5s: %d\n", students[i].name, students[i].count);
    }
    return 0;
}
