#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");
    printf("我爱你，中国！\n");
    fprintf(fp, "我爱你，中国！\n");
    fclose(fp);
    return 0;
}
