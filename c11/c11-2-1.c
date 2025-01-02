#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} date;

int check(date* dt);
int days(date* dt);

int main(void) {
    date dt;
    printf("please input date: ");
    scanf("%d%d%d", &dt.year, &dt.month, &dt.day);
    if (!check(&dt)) {
        printf("error!\n");
        return 1;
    }
    printf("%04d-%02d-%02d is the %d days\n", dt.year, dt.month, dt.day,
           days(&dt));
    return 0;
}

int check(date* dt) {
    if (dt->year < 0 || dt->month < 1 || dt->month > 12 || dt->day < 1) {
        return 0;
    }
    if ((dt->month % 2 == 1 && dt->month <= 7) ||
        (dt->month % 2 == 0 && dt->month > 8)) {
        return dt->day > 31 ? 0 : 1;
    } else if ((dt->month == 4) || (dt->month == 6) || (dt->month == 9) ||
               (dt->month == 11)) {
        return dt->day > 30 ? 0 : 1;
    } else {
        if ((dt->year % 4 == 0 && dt->year % 100 != 0) || dt->year % 400 == 0) {
            return dt->day > 29 ? 0 : 1;
        } else {
            return dt->day > 28 ? 0 : 1;
        }
    }
}

int days(date* dt) {
    int day_sum = 0, leap = (dt->year % 4 == 0 && dt->year % 100 != 0) ||
                            dt->year % 400 == 0;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 1; i < dt->month; ++i) {
        day_sum += days[i];
    }
    day_sum += dt->day;
    if (leap == 1 && dt->month >= 3) {
        ++day_sum;
    }
    return day_sum;
}
