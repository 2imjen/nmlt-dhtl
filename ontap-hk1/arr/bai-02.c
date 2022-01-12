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

//so chinh phuong
int soChinhPhuong(int n) {
    int can;
    if(n <= 0) return 0;

    can = sqrt(n);

    if(can * can == n) return 1;

    return 0;
}

//tim so chinh phuong max trong day
void solve(int a[], int n) {
    int i;
    int max;

    max = a[0];
    for(i = 0; i < n; i++)
        if(soChinhPhuong(a[i]) && (a[i] > max || !soChinhPhuong(max)))
            max = a[i];

    if(soChinhPhuong(max))
        printf("\nSo chinh phuong lon nhat trong day la: %d", max);
    else 
        printf("\nTrong day khong co so chinh phuong");
}

void sapxepgiam(int a[], int n) {
    int i, j, tmp;

    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++)
            if(a[j] < a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
    }
}

int main() {

    int n;
    int a[100];
    int dem;
    int max;
    int i;

    do {
        printf("Nhập n = ");
        scanf("%d", &n);        
    } while (n <= 0 || n > 100);

    nhap(a, n);

    in(a, n);

    //Tìm số lớn nhất của dãy số
    max = a[0];
    for (i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    printf("\nsố lớn nhất của dãy số là: %d", max);

    solve(a, n);

    printf("\n");
    sapxepgiam(a, n);

    in(a, n);

    return 0;
}