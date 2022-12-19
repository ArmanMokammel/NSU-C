#include <stdio.h>

int main()
{
    int mtrx[3][3];
    long determinant;

    printf("Enter the 9 elements of matrix: ");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Mtrx[%d][%d] = ", i, j);
            scanf("%d", &mtrx[i][j]);
        }
    }

    determinant = mtrx[0][0] * ((mtrx[1][1]*mtrx[2][2]) - (mtrx[2][1]*mtrx[1][2])) -mtrx[0][1] * (mtrx[1][0]
    * mtrx[2][2] - mtrx[2][0] * mtrx[1][2]) + mtrx[0][2] * (mtrx[1][0] * mtrx[2][1] - mtrx[2][0] * mtrx[1][1]);

    printf("\nDeterminant of 3X3 matrix: %ld", determinant);

    return 0;
}
