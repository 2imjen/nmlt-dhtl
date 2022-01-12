#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    int i;

    printf("Nhap m = ");
    scanf("%d", &m);    
    printf("Nhap n = ");
    scanf("%d", &n);    

    for (i = m; i <= n; i++)
        printf("%d ", i);
        
    printf("\n");

    for (i = n; i >= m; i--)
        printf("%d ", i);

    return 0;
}