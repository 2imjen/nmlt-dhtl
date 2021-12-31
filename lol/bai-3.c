#include <stdio.h>
#include <math.h>

int soChinhPhuong(int n) {
    int can;

    if(n < 0) return 0;

    can = sqrt(n);
    if(can * can == n)
        return 1;

    return 0;
}

int main() {
    int n;
    int a[100];
    int i;
    int count;

    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while(n <= 4 || n >= 20);

    for(i = 0; i < n; i++) {
        printf("So thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nDay so:");
    for(i = 0; i < n; i++)
        printf(" %d", a[i]);

    count = 0;
    printf("\nIn so chan:");
    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0) {
            printf(" %d", a[i]);
            count++;
        }
    printf("\nDay co %d so chan!", count);
    
    count = 0;
    printf("\nIn so chinh phuong:");
    for(i = 0; i < n; i++)
        if(soChinhPhuong(a[i])) {
            printf(" %d", a[i]);
            count++;
        }
    printf("\nDay co %d so chinh phuong!", count);

    return 0;
}