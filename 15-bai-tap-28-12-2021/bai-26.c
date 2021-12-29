#include <stdio.h>
#include <math.h>

int main() {
    int a[1000];
    int n;
    int i;
    int count;

    printf("N = ");
    scanf("%d", &n);

    count = 0;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

        if(a[i] < 0) count++;
    }

    printf("Day A =");
    for(i = 0; i < n; i++)
        printf(" %d", a[i]);

    printf("\nSo so am trong A: %d", count);

    return 0;
}