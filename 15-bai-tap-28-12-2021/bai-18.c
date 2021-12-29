#include <stdio.h>

int main() {
    int n;
    int i, canTren;

    printf("N = ");
    scanf("%d", &n);

    canTren = 2 * n;

    printf("Cac so chia het cho 3 trong khoang N den 2N:");
    for(i = n; i <= canTren; i++)
        if(i % 3 == 0)
            printf(" %d", i);

    return 0;
}