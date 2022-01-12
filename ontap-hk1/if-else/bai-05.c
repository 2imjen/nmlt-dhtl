#include <stdio.h>
#include <math.h>

int main() {
    int soLuong, donGia;
    float tongTien;

    printf("Nhap so luong: ");
    scanf("%d", &soLuong);
    printf("Nhap don gia: ");
    scanf("%d", &donGia);

    if(soLuong <= 0 || donGia <= 0) {
        printf("So lieu khong hop le.");
        return 0;
    }

    tongTien = soLuong * donGia;

    if(soLuong >= 10)
        tongTien = tongTien - tongTien * 0.3;
    else if(soLuong > 4)
        tongTien = tongTien - tongTien * 0.15;
        
    printf("Tong tien thuc khach phai tra la: %g", tongTien);

    return 0;
}