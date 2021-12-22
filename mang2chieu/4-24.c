#include <stdio.h>

int main()
{
    int m, n, i, j, max_hang_2;
    int a[100][100];

    printf("Nhap hang: ");
    scanf("%d", &m);
    printf("Nhap cot: ");
    scanf("%d", &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    max_hang_2 = a[1][0];
    for(i = 1; i < n; i++)
        if(a[1][i] > max_hang_2)
            max_hang_2 = a[1][i];

    printf("So lon nhat cua hang 2: %d", max_hang_2);

    return 0;
}