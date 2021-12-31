#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float fx;

    printf("x = ");
    scanf("%f", &x);

    if(x < 1) {
        printf("Bieu thuc khong xac dinh!");
        return 0;
    }

    fx = pow(2, x) + sqrt(x - 1) + 3 * exp(x);

    printf("f(x) = %g", fx);

    return 0;
}