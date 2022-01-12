#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int count;
    int tbu;
    int i, tong;

    printf("Nhap n = ");
    scanf("%d", &n);

    count = 0;
    tong = 0;
    printf("Cac uoc so cua %d:", n);
    for (i = 1; i <= n; i++)
        if (n % i == 0) {
            count++;
            printf(" %d", i);
        }

    return 0;
}