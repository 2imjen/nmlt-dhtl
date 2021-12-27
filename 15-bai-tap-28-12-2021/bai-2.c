#include <stdio.h>
#include <math.h>

int main() {
    float n;

    do {
        printf("N = ");
        scanf("%f", &n);
        if(n < 0)
            printf("Gia tri nhap vao phai > 0. Vui long nhap lai.\n");
    } while(n < 0);

    printf("Can bac 2 cua N = %.5f", sqrt(n));

    return 0;
}