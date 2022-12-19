#include <stdio.h>

int main()
{
    int sizeI, sizeJ;

    printf("Enter No. of Rows: ");
    scanf("%d", &sizeI);
    printf("Enter No. of Columns: ");
    scanf("%d", &sizeJ);

    int arr[sizeI][sizeJ];

    for(int i = 0; i < sizeI; i++)
    {
        for(int j = 0; j < sizeJ; j++)
        {
            printf("Arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Upper Left: %d\n", arr[0][0]);
    printf("Lower Right: %d\n", arr[sizeI-1][sizeJ-1]);
    printf("Upper Right: %d\n", arr[0][sizeJ-1]);

    printf("Lower Left Triangle :\n");
    for(int i = 0; i < sizeI; i++)
    {
        for(int j = 0; j < sizeJ-i-1; j++)
        {
            printf(" ");
        }

        for(int j = sizeJ-i-1; j <= sizeJ-1; j++)
        {
            printf("%d", arr[i][j]);
        }

        printf("\n");
    }

    printf("Diagonal :\n");
    for(int i = 0; i < sizeI; i++)
    {
        for(int j = 0; j < sizeJ-i-1; j++)
        {
            printf("  ");
        }

        printf("%d ", arr[i][sizeJ-i-1]);

        printf("\n");
    }

    printf("Reverse Diagonal :\n");
    for(int i = 0; i < sizeI; i++)
    {
        for(int j = sizeJ-i-1; j < sizeJ-1; j++)
        {
            printf("  ");
        }

        printf("%d ", arr[i][i]);

        printf("\n");
    }

    return 0;
}
