#include <stdio.h>
#include <math.h>

int dayOfMonth(int month, int year) {
    int ret;
    switch (month) {
        case 1: case 3: case 5: case 7: case 9: case 10: case 12:
            ret = 31;
            break;
        case 4: case 6: case 8: case 11:
            ret = 30;
            break;
        case 2:
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                ret = 29;
            else
                ret = 28;
            break;
    }

    return ret;
}

int validMonth(int month) {
    return month >= 1 && month <= 12; 
}

int validDay(int day, int month, int year) {
    int maxDay = dayOfMonth(month, year);

    return day >= 1 && day <= maxDay;
}

int validYear(int year) {
    return year > 0;
}

int main() {
    int day, month, year;
    int maxDay;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if(!(validDay(day, month, year) && validMonth(month) && validYear(year))) {
        printf("Ngay, thang, nam nhap vao khong hop le");
        return 0;
    }

    maxDay = dayOfMonth(month, year);

    if(day == maxDay && month == 12) {
        day = 1;
        month = 1;
        year++;
    } else if(day == maxDay) {
        day = 1;
        month++;
    } else {
        day++;
    }

    printf("Ngay tiep theo la: %d/%d/%d", day, month, year);

    return 0;
}