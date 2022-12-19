#include<stdio.h>
int main()
{
    int rows, cols;
    printf("Enter row: ");
    scanf("%d", &rows);
    printf("Enter column: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    int sum=0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i==0 ||i==rows-1 || j==0 || j==cols-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum of main border elements = %d",sum);
}
