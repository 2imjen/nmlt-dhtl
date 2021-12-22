#include <stdio.h>

int main()
{
    int m, n, i, j, tong;
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

    tong = 0;
    for(i = 0; i < n; i++)
        tong += a[i][i];

    printf("Tong duong cheo chinh cua ma tran: %d", tong);

    return 0;
}