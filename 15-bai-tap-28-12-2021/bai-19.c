#include <stdio.h>

int main() {
    int n;
    int i;
    int count;

    printf("N = ");
    scanf("%d", &n);

    count = 0;
    for(i = 1; i <= n; i++)
        if(n % i == 0)
            count++;

    printf("So %d co %d uoc so.", n, count);

    return 0;
}