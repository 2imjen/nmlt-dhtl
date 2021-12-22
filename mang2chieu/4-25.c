#include <stdio.h>

int main()
{
    int m, n, i, j, dem;
    int a[100][100];

    printf("Nhap cap ma tran: ");
    scanf("%d", &n);

    dem = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            if (a[i][j] % 2 == 0)
                dem++;
        }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("So luong so chan co trong ma tran: %d", dem);

    return 0;
}