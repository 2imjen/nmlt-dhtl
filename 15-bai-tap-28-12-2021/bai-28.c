#include <stdio.h>
#include <math.h>

int main() {
    float a[1000];
    int n;
    int i;

    printf("N = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &a[i]);
    }

    printf("Cac phan tu o vi tri chan:");
    for (i = 0; i < n; i += 2)
        printf(" %g", a[i]);

    return 0;
}