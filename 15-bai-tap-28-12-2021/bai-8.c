#include <stdio.h>

int main () {
    int n;
    int i, canTren;

    do {
        printf("N = ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Gia tri N nhap vao khong hop le. Vui long nhap lai.\n");
    } while (n <= 0);

    canTren = 2 * n;
    printf("Cac so chia het cho 3 trong khoang tu N den 2N:");
    for (i = n; i <= canTren; i++)
        if(i % 3 == 0)
            printf(" %d", i);

    return 0;
}