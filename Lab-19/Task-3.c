#include <stdio.h>

void reverseArray(int size, int *arr, int *rev)
{
    for(int i = 0, j = size - 1; i < size; i++, j--)
    {
        rev[i] = arr[j];
    }
}

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    int rev[size];

    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    reverseArray(size, arr, rev);

    for(int i = 0; i < size; i++)
    {
        printf("rev[%d] = %d\n", i, rev[i]);
    }

    return 0;
}
