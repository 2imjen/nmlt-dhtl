#include <stdio.h>

int main() {
    int a, b;

    printf("A = ");
    scanf("%d", &a);

    do {
        printf("B = ");
        scanf("%d", &b);
        if(b == 0)
            printf("Gia tri nhap vao phai khac 0. Vui long nhap lai.\n");
    } while(b == 0);

    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A x B = %d\n", a * b);
    printf("A : B = %d\n", a / b);
    printf("A %% B = %d\n", a % b);

    return 0;
}