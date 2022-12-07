#include <stdio.h>

int main()
{
    int size;
    int oddcount = 0;
    int evncount = 0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int evnarr[size];
    int oddarr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evnarr[evncount] = arr[i];
            evncount++;
        }
        else
        {
            oddarr[oddcount] = arr[i];
            oddcount++;
        }
    }

    printf("Even elements in array: ");
    for(int i = 0; i < evncount ; i++)
    {
        printf("%d ", evnarr[i]);
    }

    printf("\n");

    printf("Odd elements in array: ");
    for(int i = 0; i < oddcount; i++)
    {
        printf("%d ", oddarr[i]);
    }

    return 0;
}
