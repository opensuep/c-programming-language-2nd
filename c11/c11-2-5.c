#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    int score1;
    int score2;
    int score3;
    float avg;
} student;

int cmp_avg(const void* a, const void* b) {
    student* stu1 = (student*)a;
    student* stu2 = (student*)b;
    return (stu1->avg < stu2->avg) - (stu1->avg > stu2->avg);
}

int main(void) {
    int stu_count = 1;
    student* stu_list = (student*)calloc(stu_count, sizeof(student));
    FILE *fp_in = fopen("score.txt", "r"),
         *fp_out = fopen("score_avg.txt", "w");
    while (!feof(fp_in)) {
        int ret = fscanf(
            fp_in, "%d%s%d%d%d", &stu_list[stu_count - 1].id,
            stu_list[stu_count - 1].name, &stu_list[stu_count - 1].score1,
            &stu_list[stu_count - 1].score2, &stu_list[stu_count - 1].score3);
        if (ret <= 0) {
            --stu_count;
            break;
        }
        ++stu_count;
        stu_list = (student*)realloc(stu_list, stu_count * sizeof(student));
    }
    fclose(fp_in);
    for (int i = 0; i < stu_count; ++i) {
        stu_list[i].avg =
            (stu_list[i].score1 + stu_list[i].score2 + stu_list[i].score3) /
            3.0;
    }
    qsort(stu_list, stu_count, sizeof(student), cmp_avg);
    for (int i = 0; i < stu_count; ++i) {
        printf("%4d %-5s %3d %3d %3d %.2f\n", stu_list[i].id, stu_list[i].name,
               stu_list[i].score1, stu_list[i].score2, stu_list[i].score3,
               stu_list[i].avg);
    }
    for (int i = 0; i < stu_count; ++i) {
        fprintf(fp_out, "%d %s %d %d %d %.2f\n", stu_list[i].id,
                stu_list[i].name, stu_list[i].score1, stu_list[i].score2,
                stu_list[i].score3, stu_list[i].avg);
    }
    fclose(fp_out);
    free(stu_list);
    return 0;
}
