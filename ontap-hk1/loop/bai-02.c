#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    int i;
    int tong;

    printf("Nhap m = ");
    scanf("%d", &m);
    printf("Nhap n = ");
    scanf("%d", &n);

    tong = 0;
    for (i = m; i <= n; i++)
        tong += i;

    printf("Tong cac so nguyen tu %d den %d la: %d", m, n, tong);

    return 0;
}