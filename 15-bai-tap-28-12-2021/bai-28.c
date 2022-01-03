#include <stdio.h>
#include <math.h>

void nhap(float a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void solve(float a[], int n) {
    int i;

    printf("Cac phan tu o vi tri chan:");
    for (i = 0; i < n; i += 2)
        printf(" %g", a[i]);
}

int main() {
    float a[1000];
    int n;
    int i;

    printf("N = ");
    scanf("%d", &n);

    nhap(a, n);

    solve(a, n);

    return 0;
}