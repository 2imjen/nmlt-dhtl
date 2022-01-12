#include <stdio.h>
#include <math.h>

int main() {
    float e;
    float s;
    int i;

    do {
        printf("Nhap e = ");
        scanf("%f", &e);
    } while (!(e > 0 && e < 0.1));

    i = 1;
    s = 0;
    while(1.0 / i >= e) {
        s += 1.0 / i;
        i++;
    }

    printf("%d\n", i);

    printf("S = %g", s);

    return 0;
}