#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("\nEnter the order of the matrix : ");
    scanf("%d %d",&r,&c);

    int matrixA[r][c], matrixB[r][c], matrixsum[r][c];

    printf("\nEnter values to the matrix A = \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter values to the matrix B = \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            matrixsum[i][j] = (5 * matrixA[i][j]) + (7 * matrixB[i][j]) + 9;
        }
    }

    printf("\nValues of the matrix 5A+7B+9 = \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matrixsum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
