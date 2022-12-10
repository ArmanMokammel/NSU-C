#include <stdio.h>

int main()
{
    int size, search_Key, indx1, indx2;

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
            indx1 = i;
            break;
        }
    }

    for(int i = size - 1; i >= 0; i--)
    {
        if(arr[i] == search_Key)
        {
            indx2 = i;
            break;
        }
    }

    printf("\nThe first found index is: %d\n", indx1);
    printf("The last found index is: %d\n", indx2);

    return 0;
}
