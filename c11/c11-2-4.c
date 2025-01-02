#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    char name[20];
    float score;
} student;

int main(void) {
    student* stu = NULL;
    int n, imax = 0;
    printf("请输入人数: ");
    scanf("%d", &n);
    stu = (student*)calloc(n, sizeof(student));
    for (int i = 0; i < n; ++i) {
        scanf("%d%s%f", &stu[i].num, stu[i].name, &stu[i].score);
    }
    for (int i = 0; i < n; ++i) {
        if (stu[i].score > stu[imax].score) {
            imax = i;
        }
    }
    printf("\n最高分:\n");
    printf("学号: %d 姓名: %s 成绩: %.2f\n", stu[imax].num, stu[imax].name,
           stu[imax].score);
    free(stu);
    return 0;
}
