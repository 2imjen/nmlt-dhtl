#include <stdio.h>

int main () {
    int a, b, c;
    int res;

    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);

    res = 0;
    if(b <= c)
        res = a * a + 3 * a - 1;

    printf("Y = %d", res);

    return 0;
}