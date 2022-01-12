#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float f;

    printf("Nhap x = ");
    scanf("%f", &x);

    if(x > 0 && x != 2) {
        f = (x*x + 2*sqrt(x)) / (x - 2);
    } else {
        f = 0;
    }

    printf("Ket qua la: %g", f);

    return 0;
}