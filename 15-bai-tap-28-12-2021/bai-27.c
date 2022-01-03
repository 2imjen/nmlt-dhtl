#include <stdio.h>
#include <math.h>

void nhap(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float minEle(float a[], int n) {
    float min;
    int i;

    min = a[0];
    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];

    return min;
}

int main() {
    float a[1000];
    int n;
    int i;
    float min;

    printf("N = ");
    scanf("%d", &n);

    nhap(a, n);

    printf("Gia tri nho nhat trong A: %g", minEle(a, n));

    return 0;
}