#include <stdio.h>

int main(void) {
    char concept[12][20] = {"富强", "民主", "文明", "和谐", "自由", "平等",
                            "公正", "法制", "爱国", "敬业", "诚信", "友善"};
    for (int i = 0; i < 12; ++i) {
        printf("%s ", concept[i]);
        if ((i + 1) % 4 == 0) {
            printf("\n");
        }
    }
    return 0;
}
