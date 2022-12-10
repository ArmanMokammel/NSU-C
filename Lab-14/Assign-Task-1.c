#include <stdio.h>

int main()
{
    int size, search_Key;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &search_Key);

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == search_Key)
        {
            for(int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            break; // To stop execution after the first found element is deleted
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("\nIndex[%d] = %d", i, arr[i]);
    }

    return 0;
}
