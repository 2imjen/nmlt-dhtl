#include <stdio.h>
#include <math.h>

int main() {
    char ch;

    printf("Nhap diem theo chu cai: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("Gioi");
        break;
    case 'B':
        printf("Kha");
        break;
    case 'C':
        printf("Trung binh");
        break;
    case 'D':
        printf("Trung binh yeu");
        break;
    case 'F':
        printf("Yeu");
        break;
    default:
        printf("Diem nhap vao khong hop le");
        break;
    }

    return 0;
}