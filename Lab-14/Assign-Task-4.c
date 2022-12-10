#include <stdio.h>

int main()
{
    int size;
    float sum = 0, avg;

    printf("Enter size of array: ");
    scanf("%d", &size);

    float arr[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] = ", i);
        scanf("%f", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = sum / size;

    printf("\nAverage = %f\n", avg);
    printf("The elements greater than average are: ");

    for(int i = 0; i < size; i++)
    {
        if(avg < arr[i])
        {
            printf("%.2f ", arr[i]);
        }
    }

    return 0;
}
