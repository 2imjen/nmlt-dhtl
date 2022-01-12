#include <stdio.h>
#include <math.h>

int soChinhPhuong(int n) {
    int can;
    if(n < 0) return 0;

    can = sqrt(n);

    if(can * can == n) return 1;
    
    return 0;
}

int main() {
    int n;
    int soSoChinhPhuong, i, tongSoChinhPhuong;
    float trungBinh;

    printf("Nhap n = ");
    scanf("%d", &n);

    soSoChinhPhuong = 0;
    tongSoChinhPhuong = 0;
    printf("Cac so chinh phuong trong khoang tu %d den %d:", n, 3*n);
    for (i = n; i <= 3*n; i++)
        if(soChinhPhuong(i)) {
            soSoChinhPhuong++;
            tongSoChinhPhuong += i;
            printf(" %d", i);
        }

    printf("\nTong so chinh phuong la %d", tongSoChinhPhuong);

    trungBinh = 0;
    if(soSoChinhPhuong != 0)
        trungBinh = (float)tongSoChinhPhuong / soSoChinhPhuong;

    printf("\nTrung binh cong cua cac so chinh phuong nay: %g", trungBinh);

    return 0;
}