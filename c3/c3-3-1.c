#include <stdio.h>

int main() {
    int id, s_math, s_en, s_c;
    float avg;
    FILE *fp = fopen("score_avg.txt", "w");
    scanf("%d%d%d%d", &id, &s_math, &s_en, &s_c);
    avg = (s_math + s_en + s_c) / 3.0;
    fprintf(fp, "%d %d %d %d %.2f\n", id, s_math, s_en, s_c, avg);
    fclose(fp);
    return 0;
}
