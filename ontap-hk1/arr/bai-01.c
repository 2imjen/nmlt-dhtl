#include <stdio.h>
#include <math.h>

//Nhập mảng
void nhap(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

//In mảng
void in(int a[], int n) {
    int i;

    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
}

//In theo thứ tự ngược lại
void in1(int a[], int n) {
    int i;

    for (i = n-1; i >= 0; i--)
        printf(" %d", a[i]);
}

//Đếm các số chia hết cho 3 trong dãy
int demSoChia3(int a[], int n) {
    int i;
    int count;

    count = 0;
    for(i = 0; i < n; i++)
        if(a[i] % 3 == 0)
            count++;

    return count;
}

//Số chính phương
int soChinhPhuong(int n) {
    int can;
    if(n <= 0) return 0;

    can = sqrt(n);

    if(can * can == n) return 1;

    return 0;
}

//Đếm số chính phương
int demSoChinhPhuong(int a[], int n) {
    int i;
    int count;

    count = 0;
    for(i = 0; i < n; i++)
        if(soChinhPhuong(a[i]))
            count++;

    return count;
}

int main() {
    int n;
    int a[100];
    int dem;

    do {
        printf("Nhập n = ");
        scanf("%d", &n);        
    } while (n <= 0 || n > 100);

    nhap(a, n);

    printf("Mảng vừa nhập là:");
    in(a, n);

    printf("\nIn mảng theo thứ tự ngược lại:");
    in1(a, n);

    dem = demSoChia3(a, n);
    printf("\nCác số chia hết cho 3 trong dãy là: %d", dem);

    dem = demSoChinhPhuong(a, n);
    printf("\nCác số chính phương trong dãy là: %d", dem);

    return 0;
}