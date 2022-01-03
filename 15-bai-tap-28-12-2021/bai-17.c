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
                printf("0\n");
            else
            printf("0 ");
    }

    return 0;
}