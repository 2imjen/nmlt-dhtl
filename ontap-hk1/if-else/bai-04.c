#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float f;

    printf("Nhap x = ");
    scanf("%f", &x);

    if(x < 1) {
        printf("f(x) khong xac dinh!");
        return 0;
    }

    f = pow(x, 3) + sqrt(x - 1) + 3 * exp(x);

    printf("Ket qua la: %g", f);

    return 0;
}