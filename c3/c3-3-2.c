#include <stdio.h>

int main() {
    int id, s_math, s_en, s_c;
    float avg;
    FILE *fp1 = fopen("score.txt", "r"), *fp2 = fopen("score_avg.txt", "w");
    fscanf(fp1, "%d%d%d%d", &id, &s_math, &s_en, &s_c);
    avg = (s_math + s_en + s_c) / 3.0;
    fprintf(fp2, "%d %d %d %d %.2f\n", id, s_math, s_en, s_c, avg);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
