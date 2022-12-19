#include <stdio.h>

int main()
{
    int arr[3][5];
    int n;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nEnter n: ");
    scanf("%d", &n);
    
    printf("\nn * A :\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr[i][j] *= n;
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
