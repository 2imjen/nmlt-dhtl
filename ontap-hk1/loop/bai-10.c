#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i, can;
    if(n < 2) return 0;

    can = sqrt(n);
    for (i = 2; i <= can; i++)
        if(n % i == 0)
            return 0;

    return 1;
}

int main() {
    int n;
    int i, tong, count;
    float tb;

    printf("Nhap n = ");
    scanf("%d", &n);

    tong = 0, count = 0;
    printf("Cac so nguyen to trong khoang tu 1 den %d:", n);
    for (i = 2; i <= n; i++)
        if(isPrime(i)) {
            count++;
            tong += i;

            printf(" %d", i);
        }

    printf("\nTong cac so nguyen to la: %d", tong);
    
    tb = 0;
    if(count != 0)
        tb = (float)tong / count;

    printf("\ntrung binh cong: %g", tb);

    return 0;
}