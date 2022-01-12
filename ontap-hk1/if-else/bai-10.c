#include <stdio.h>
#include <math.h>

int main() {
    float dtb;

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    if(dtb < 4.5)
        printf("Yeu");
    else if(dtb < 7)
        printf("Trung binh");
    else if(dtb < 8.5)
        printf("Kha");
    else
        printf("Gioi");

    return 0;
}