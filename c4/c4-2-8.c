#include <stdio.h>

int main(void) {
    double t, w, h;
    printf("input weight and height: ");
    scanf("%lf%lf", &w, &h);
    t = w / (h * h);
    if (t < 18) {
        printf("低体重\n");
    } else if (18 <= t && t < 25) {
        printf("正常\n");
    } else if (25 <= t && t < 27) {
        printf("超重\n");
    } else {
        printf("肥胖\n");
    }
    return 0;
}
