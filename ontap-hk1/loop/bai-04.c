#include <stdio.h>
#include <math.h>

int soChinhPhuong(int n) {
    int can = sqrt(n);

    if(can * can == n) return 1;

    return 0;
}

int main() {
    int n;
    int i;

    do {
        printf("Nhap n = ");
        scanf("%d", &n);

        if(n < 0)
            printf("Vui long nhap so khong am\n");
    } while(n < 0);

    printf("Cac so chinh phuong <= %d:", n);

    for(i = 1; i <= n; i++)
        if(soChinhPhuong(i))
            printf(" %d", i);

    return 0;
}