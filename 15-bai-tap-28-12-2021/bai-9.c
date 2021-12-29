#include <stdio.h>
#include <math.h>

int main () {
    int n;
    int i;
    double res;

    do {
        printf("N = ");
        scanf("%d", &n);
        if(n < 0)
            printf("Gia tri N nhap vao khong hop le. Vui long nhap lai.\n");
    } while (n < 0);

    res = 0;
    for(i = n; i > 0; i--)
        res = sqrt(res + i);

    printf("F(n) = %g", res);

    return 0;
}
