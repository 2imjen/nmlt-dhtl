#include <stdio.h>

int main () {
    int n;
    int i;
    int res;

    do {
        printf("N = ");
        scanf("%d", &n);
        if(n < 0)
            printf("Gia tri N khong hop le. Vui long nhap lai.\n");
    } while (n < 0);

    res = 0;
    for (i = 1; i < n; i++)
        res += i * (i + 1) * (i + 2);

    printf("A = %d", res);

    return 0;
}