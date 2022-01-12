#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    int res;

    printf("Nhap n = ");
    scanf("%d", &n);

    //a
    res = 1;
    for (i = 1; i <= n; i++)
        res *= i;

    printf("Giai thua cua %d: %d\n", n, res);

    //b
    res = 1;
    for (i = 1; i <= n; i++)
        res *= 2 * i + 1;

    printf("Giai thua le cua %d: %d\n", n, res);

    //c
    res = 1;
    for (i = 1; i <= n; i++)
        res *= 2*i;

    printf("Giai thua chan cua %d: %d\n", n, res);

    return 0;
}