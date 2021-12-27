#include <stdio.h>

int main () {
    float a, b, c;
    float res;
    float min, max;

    printf("A = ");
    scanf("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    printf("C = ");
    scanf("%f", &c);

    min = max = a;

    if(min > b) min = b;
    if(min > c) min = c;

    if(max < b) max = b;
    if(max < c) max = c;

    res = (a + b + c) - min - max;

    printf("X = %.2f", res);

    return 0;
}