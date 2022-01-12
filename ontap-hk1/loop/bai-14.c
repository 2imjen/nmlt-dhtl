#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x;
    float s1, s2;
    int i, gt;
    float tich;

    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap x = ");
    scanf("%f", &x);

    //tinh s1
    s1 = 0;
    tich = 1;
    for (i = 1; i <= n; i++) {
        tich *= x;
        s1 += tich / i;
    }

    printf("S1 = %g\n", s1);

    //tinhs2
    s2 = 0;
    tich = 1;
    gt = 1;
    for (i = 1; i <= n; i++) {
        tich *= x;
        gt *= i;
        s2 += tich / gt;
    }

    printf("S2 = %g\n", s2);

    return 0;
}