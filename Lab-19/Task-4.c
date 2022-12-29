#include <stdio.h>

void searchArray(int size, int *arr, int search_key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == search_key)
        {
            printf("Found at Index = %d & Address = %x\n", i, &arr[i]);
        }
    }
}

int main()
{
    int size, search_key;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &search_key);

    searchArray(size, arr, search_key);

    return 0;
}
