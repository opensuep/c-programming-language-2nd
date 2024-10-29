#include <stdio.h>

int main() {
    int year, leap;
    printf("Please input a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)leap = 0;
    else if (year % 100 != 0) leap = 1;
    else if (year % 400 != 0)
        leap = 0;
    else
        leap = 1;
    if (leap == 0)
        printf("%d is not a leap year.\n", year);
    else
        printf("%d is a leap year.\n", year);
    return 0;
}
