#include <stdio.h>
#include <math.h>

int soNguyenTo(int n) {
    int i, can;

    if(n < 2) return 0;

    can = sqrt(n);
    for (i = 2; i <= can; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int n;

    printf("Nhap N = ");
    scanf("%d", &n);

    if(soNguyenTo(n))
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai la so nguyen to", n);

    return 0;
}