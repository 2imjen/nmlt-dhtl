#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Nhap x = ");
    scanf("%f", &x);

    if(x < 0)
        printf("Khong tinh duoc");
    else
        printf("Can bac 2 cua %g la: %g", x, sqrt(x));

    return 0;
}