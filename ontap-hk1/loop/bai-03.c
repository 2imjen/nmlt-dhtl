#include <stdio.h>
#include <math.h>

int main() {
    int x;
    int tong;
    float tb;
    int count;

    tong = 0;
    count = 0;
    do {
        printf("Nhap x = ");
        scanf("%d", &x);

        tong += x;
        if(x != 0)
            count++;
    } while (x != 0);

    tb = 0;
    if(count != 0)    
        tb = (float)tong / count;

    printf("Tong la: %d\n", tong);
    printf("Trung binh la: %g", tb);

    return 0;
}