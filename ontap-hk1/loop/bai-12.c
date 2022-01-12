#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float s;
    int i;

    printf("Nhap n = ");
    scanf("%d", &n);

    s = 1;
    for(i = 1; i <= n; i++)
        s += (float)1 / (i * (i+1));

    printf("S = %g", s);

    return 0;
}