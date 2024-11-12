#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int money, count;
    FILE *fp = fopen("red_packet.txt", "w");
    scanf("%d%d", &money, &count);
    fprintf(fp, "%d %d\n", money, count);
    for (int i = 1; i <= count; ++i) {
        int max_money = money / (count - 1) * 2;
        int this_packet = rand() % max_money + 1;
        money -= this_packet;
        fprintf(fp, "%d\n", this_packet);
    }
    fclose(fp);
    return 0;
}
