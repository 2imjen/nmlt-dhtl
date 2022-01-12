#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float f;

    printf("Nhap x = ");
    scanf("%f", &x);

    if(x < 0 || x == 4) {
        printf("Bieu thuc khong xac dinh!");
        return 0;
    }

    f = (x*x + 1)/(sqrt(x) - 2);

    printf("Ket qua la: %g", f);

    return 0;
}