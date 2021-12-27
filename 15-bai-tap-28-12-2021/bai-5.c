#include <stdio.h>

int main() {
    float diemMieng, diem1Tiet, diemHocKi;
    float diemTrungBinh;

    do {
        printf("Diem Mieng = ");
        scanf("%f", &diemMieng);
        if (diemMieng < 0 || diemMieng > 10)
            printf("Diem nhap khong hop le. Vui long nhap lai.\n");
    } while (diemMieng < 0 || diemMieng > 10);
    
    do {
        printf("Diem Mot Tiet = ");
        scanf("%f", &diem1Tiet);
        if (diem1Tiet < 0 || diem1Tiet > 10)
            printf("Diem nhap khong hop le. Vui long nhap lai.\n");
    } while (diem1Tiet < 0 || diem1Tiet > 10);
    
    do {
        printf("Diem Hoc Ki = ");
        scanf("%f", &diemHocKi);
        if (diemHocKi < 0 || diemHocKi > 10)
            printf("Diem nhap khong hop le. Vui long nhap lai.\n");
    } while (diemHocKi < 0 || diemHocKi > 10);

    diemTrungBinh = (diemMieng + diem1Tiet * 2 + diemHocKi * 3) / 6;

    printf("Diem TB = %.5f", diemTrungBinh);

    return 0;
}