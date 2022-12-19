#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter row: ");
    scanf("%d", &r);
    printf("Enter column: ");
    scanf("%d", &c);

    int matrixA[r][c], matrixB[r][c], matrixsum[r][c];

    printf("\nEnter values into matrix A:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter values into matrix B:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrixsum[i][j] = (5 * matrixA[i][j]) + (7 * matrixB[i][j]) + 9;
        }
    }

    printf("\nValues of the matrix 5A+7B+9 = \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matrixsum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
