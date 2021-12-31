#include <stdio.h>

int main() {
    int n;
    int a[1000];
    int i;
    int max, countMax;

    printf("N = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    max = a[0], countMax = 1;

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            countMax = 1;
        } else if(max == a[i])
            countMax++;
    }

    printf("Gia tri lon nhat cua A: %d\n", max);
    printf("So phan tu co gia tri lon nhat: %d\n", countMax);

    return 0;
}