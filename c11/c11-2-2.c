#include <stdio.h>

#define N 5

typedef struct {
    char name[8];
    int age;
} man;

int main(void) {
    man person[N] = {
        {"Li", 20}, {"Yang", 21}, {"Sun", 18}, {"Zhao", 23}, {"Lin", 17}};
    int imin = 0;
    for (int i = 0; i < N; ++i) {
        if (person[i].age < person[imin].age) {
            imin = i;
        }
    }
    printf("最年轻者是%d岁的 %s\n", person[imin].age, person[imin].name);
    return 0;
}
