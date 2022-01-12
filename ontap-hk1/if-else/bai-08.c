#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Nhap a = ");
    scanf("%f", &a);
    printf("Nhap b = ");
    scanf("%f", &b);
    printf("Nhap c = ");
    scanf("%f", &c);

    if(a + b > c && a + c > b && b + c > a)
        printf("La 3 canh cua tam giac");
    else
        printf("Khong phai la 3 canh tam giac");

    return 0;
}