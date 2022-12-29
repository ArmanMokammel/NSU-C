#include <stdio.h>

void SumArray(int size, int *Array1, int *Array2, int *Array3)
{
    for(int i = 0; i < size; i++)
    {
        Array3[i] = Array1[i] + Array2[i];
    }
}

int main()
{
    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    int A[size];
    int B[size];
    int C[size];

    for(int i = 0; i < size; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    SumArray(size, A, B, C);

    for(int i = 0; i < size; i++)
    {
        printf("Sum[%d] = %d\n", i, C[i]);
    }

    return 0;
}
