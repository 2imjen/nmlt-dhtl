#include <stdio.h>
#include <math.h>

int main() {
    float a[1000];
    int n;
    int i;
    float min;

    printf("N = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }

    min = a[0];
    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];

    printf("Gia tri nho nhat trong A: %g", min);

    return 0;
}