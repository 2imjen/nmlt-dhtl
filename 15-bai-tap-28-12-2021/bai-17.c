#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("M = ");
    scanf("%d", &m);
    printf("N = ");
    scanf("%d", &n);

    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++)
            if(j == n)
                printf("0");
            else
                printf("0 ");
        
        printf("\n");
    }

    return 0;
}