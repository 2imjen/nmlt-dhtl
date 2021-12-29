#include <stdio.h>

int main () {
    int n;
    int bac1, bac2, bac3, bac4, bac5;
    int res;

    do {
        printf("N = ");
        scanf("%d", &n);
        if(n < 0)
            printf("Gia tri nhap vao khong hop le. Vui long nhap lai.\n");
    } while (n < 0);

    bac1 = 1484 * 50;
    bac2 = bac1 + 50 * 1533;
    bac3 = bac2 + 100 * 1786;
    bac4 = bac3 + 100 * 2242;
    bac5 = bac4 + 100 * 2503;

    if(n <= 50)
        res = n * 1484;
    else if(n <= 100)
        res = bac1 + (n - 50) * 1533;
    else if(n <= 200)
        res = bac2 + (n - 100) * 1786;
    else if(n <= 300)
        res = bac3 + (n - 200) * 2242;
    else if (n <= 400)
        res = bac4 + (n - 300) * 2503;
    else
        res = bac5 + (n - 400) * 2587;

    printf("So tien phai nop: %d", res);

    return 0;
}
