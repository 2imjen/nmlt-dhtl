#include <stdio.h>
#include <math.h>

int main() {
    float e;
    float s;
    int i;
    int gt;

    do {
        printf("Nhap e = ");
        scanf("%f", &e);
    } while (!(e > 0 && e < 0.1));

    i = 1;
    s = 0;
    gt = 1;
    while(1.0 / gt >= e) {
        s += 1.0 / gt;
        i++;
        gt *= i;
    }

    printf("%d\n", i);

    printf("S = %g", s);

    return 0;
}