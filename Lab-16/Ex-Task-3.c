#include <stdio.h>

int main()
{
    int r, c, sum = 0;

    printf("Enter row: ");
    scanf("%d", &r);
    printf("Enter column: ");
    scanf("%d", &c);
    
    int arr[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("Arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] % 2 == 0)
            {
                sum += arr[i][j];
            }
        }
    }
    
    printf("\nSum of even numbers is: %d", sum);
    
    return 0;
}
