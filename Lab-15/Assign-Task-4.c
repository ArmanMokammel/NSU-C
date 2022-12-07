#include <stdio.h>

int countSearchKey(int arr[], int size, int key)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size, search_key;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &search_key);

    printf("\nSearch Key appears %d times\n", countSearchKey(arr, size, search_key));

    return 0;
}
