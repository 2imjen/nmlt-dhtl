#include <stdio.h>
#include <math.h>

int validMonth(int month) {
    return month > 0 && month < 13;
}

int validDay(int day) {
    return day >= 1 && day <= 31;
}

int main() {
    int day, month;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);

    if(validMonth(month) && validDay(day))
        printf("Hop le");
    else
        printf("Khong hop le");

    return 0;
}