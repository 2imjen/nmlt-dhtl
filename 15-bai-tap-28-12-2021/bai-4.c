#include <stdio.h>
#include <math.h>

void nhap(float a[]) {
    int i;

    for (i = 0; i <= 4; i++) {
        printf("A%d = ", i);
        scanf("%f", &a[i]);
    }
}

float solve(float a[], float x) {
    int i;
    float res;

    res = 0;
    for (i = 0; i <= 4; i++)
        res += a[i] * pow(x, i);

    return res;
}

int main () {
    float x;
    float a[5];
    float res;
    int i;

    printf("X = ");
    scanf("%f", &x);

    nhap(a);

    printf("f(x) = %g", solve(a, x));

    return 0;
}
