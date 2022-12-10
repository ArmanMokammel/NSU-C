#include <stdio.h>

int main()
{
    int size, INT_MIN = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    INT_MIN = arr[0];

    for(int i = 0; i < size; i++)
    {
        int x = arr[i];
        if(INT_MIN > x)
        {
            INT_MIN = x;
        }
    }

    printf("\nIndexes of smallest value: ");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == INT_MIN)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
