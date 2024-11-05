#include <stdio.h>

int main() {
    FILE *fp_in = fopen("score.txt", "r"),
         *fp_out = fopen("score_avg.txt", "w");
    int num, math, eng, clang;
    float avg;
    while (!feof(fp_in)) {
        fscanf(fp_in, "%d%d%d%d", &num, &math, &eng, &clang);
        avg = (math + eng + clang) / 3.0;
        fprintf(fp_out, "%d %d %d %d %.2f\n", num, math, eng, clang, avg);
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
