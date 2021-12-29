#include <stdio.h>

int main() {
    float diemMieng, diem1Tiet, diemHocKi;
    float diemTrungBinh;

    printf("Diem Mieng = ");
    scanf("%f", &diemMieng);
    
    printf("Diem Mot Tiet = ");
    scanf("%f", &diem1Tiet);
    
    printf("Diem Hoc Ky = ");
    scanf("%f", &diemHocKi);

    diemTrungBinh = (diemMieng + diem1Tiet * 2 + diemHocKi * 3) / 6;

    printf("Diem TB = %g", diemTrungBinh);

    return 0;
}
