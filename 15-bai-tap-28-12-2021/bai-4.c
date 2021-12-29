#include <stdio.h>
#include <math.h>

int main () {
    float x;
    float a[5];
    float res;
    int i;

    printf("X = ");
    scanf("%f", &x);

    for (i = 0; i <= 4; i++) {
        printf("A%d = ", i);
        scanf("%f", &a[i]);
    }

    res = 0;
    for (i = 0; i <= 4; i++)
        res += a[i] * pow(x, i);

    printf("f(x) = %g", res);

    return 0;
}
