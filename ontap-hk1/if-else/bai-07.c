#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    float x;

    printf("Nhap a = ");
    scanf("%f", &a);
    printf("Nhap b = ");
    scanf("%f", &b);

    if(a != 0) {
        x = -b / a;
        printf("Phuong trinh co nghiem duy nhat: %g", x);
    }
    else if(b != 0) {
        printf("Phuong trinh vo nghiem");
    } else 
        printf("Phuong trinh vo so nghiem");


    return 0;
}