#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float s;
    int i, gt;

    printf("Nhap n = ");
    scanf("%d", &n);

    s = 0;
    gt = 1;
    for(i = 1; i <= n; i++) {
        gt *= i;
        s += (float)1 / gt;
    }

    printf("S = %g", s);

    return 0;
}