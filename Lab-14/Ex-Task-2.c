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
    
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == search_Key)
        {
            printf("Index = [%d]\n", i);
        }
    }

    return 0;
}
