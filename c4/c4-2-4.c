#include <stdio.h>

int main(void) {
    float d1, d2, temp;
    char op;
    printf("输入 d1 op d2: ");
    scanf("%f%c%f", &d1, &op, &d2);
    switch (op) {
        case '+':
            temp = d1 + d2;
            break;
        case '-':
            temp = d1 - d2;
            break;
        case '*':
            temp = d1 * d2;
            break;
        case '/':
            temp = d1 / d2;
            break;
        default:
            printf("错误!\n");
            return 0;
    }
    printf("%.2f %c %.2f = %.2f\n", d1, op, d2, temp);
    return 0;
}
