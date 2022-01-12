#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float f;

    printf("Nhap x = ");
    scanf("%f", &x);

    if(x >= 0 && x != 3)
        f = (2*x*x + 1 + sqrt(x)) / (x - 3);
    else
        f = 0;

    printf("Ket qua la: %g", f);

    return 0;
}