#include <stdio.h>

int main()
{
    int m, n, i, j;
    int a[100][100];

    printf("Nhap cap ma tran: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Cac so thuoc cheo phu cua ma tran: ");

    for(i = 0; i < n; i++)
        printf("%d ", a[i][n-1-i]);

    return 0;
}