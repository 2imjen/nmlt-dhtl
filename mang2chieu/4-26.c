#include <stdio.h>

int main()
{
    int ma, na, mb, nb, i, j, k;
    int a[100][100], b[100][100], c[100][100], tmp;

    printf("Nhap hang ma tran A: ");
    scanf("%d", &ma);
    printf("Nhap cot ma tran A: ");
    scanf("%d", &na);

    for(i = 0; i < ma; i++)
        for(j = 0; j < na; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Nhap hang ma tran B: ");
    scanf("%d", &mb);
    printf("Nhap cot ma tran B: ");
    scanf("%d", &nb);

    for(i = 0; i < mb; i++)
        for(j = 0; j < nb; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    for(i = 0; i < ma; i++)
        for(j = 0; j < nb; j++)
        {
            tmp = 0;

            for(k = 0; k < na; k++)
                tmp += a[i][k] * b[k][j];

            c[i][j] = tmp;
        }

    for(i = 0; i < ma; i++)
    {
        for(j = 0; j < nb; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}