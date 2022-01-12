#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int count;
    float tbu;
    int i, tong;

    printf("Nhap n = ");
    scanf("%d", &n);

    count = 0;
    tong = 0;
    printf("Cac uoc so cua %d:", n);
    for (i = 1; i <= n; i++)
        if (n % i == 0) {
            count++;
            tong += i;

            printf(" %d", i);
        }

    tbu = (float)tong / count;

    printf("\nTrung binh cong cac uoc so cua %d: %g", n, tbu);

    return 0;
}