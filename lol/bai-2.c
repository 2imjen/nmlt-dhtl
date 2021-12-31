#include <stdio.h>

int main() {
    int soLuong, donGia;
    float res;

    printf("So luong: ");
    scanf("%d", &soLuong);
    printf("Don gia: ");
    scanf("%d", &donGia);

    if(soLuong <= 0 || donGia <= 0) {
        printf("So lieu khong hop le.");
        return 0;
    }

    res = soLuong * donGia;
    if(soLuong >= 10)
        res = res - res * 0.3;
    else if(soLuong > 4)
        res = res - res * 0.15;

    printf("So tien phai tra: %.2f", res);

    return 0;
}