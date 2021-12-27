#include <stdio.h>

int main () {
    int n;
    int i, canTren;

    printf("N = ");
    scanf("%d", &n);

    canTren = 3 * n;

    printf("Day so:");
    for (i = 2 * n; i <= canTren; i++)
        printf(" %d", i);

    return 0;
}