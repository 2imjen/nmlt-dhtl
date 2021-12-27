#include <stdio.h>

int main () {
    int n;
    int i, tong;
    int m;

    do {
        printf("N = ");
        scanf("%d", &n);
        if(n <= 1)
            printf("Gia tri nhap vao khong hop le. Vui long nhap lai.\n");
    } while (n <= 1);

    tong = 0;
    for (i = 1; tong + i < n; i++)
        tong += i;

    printf("m lon nhat = %d", i-1);

    return 0;
}