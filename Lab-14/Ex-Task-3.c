#include <stdio.h>

int main()
{
    int size, INT_MAX = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        int x = arr[i];
        if(INT_MAX < x)
        {
            INT_MAX = x;
        }
    }
    
    printf("\nIndexes of largest value: ");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == INT_MAX)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
