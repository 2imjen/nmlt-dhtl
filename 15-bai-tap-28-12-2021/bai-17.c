#include <stdio.h>

void solve(int m, int n) {
    int i, j;

    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++)
            if(j == n)
                printf("0\n");
            else
            printf("0 ");
    }
}

int main() {
    int m, n;

    printf("M = ");
    scanf("%d", &m);
    printf("N = ");
    scanf("%d", &n);

    solve(m, n);

    return 0;
}