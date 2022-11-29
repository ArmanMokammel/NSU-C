#include <stdio.h>

float inverseProduct(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (1.0/n) * inverseProduct(n-1);
    }
}

int main()
{
    int N;

    printf("Enter n: ");
    scanf("%d", &N);

    printf("Inverse product = %f", inverseProduct(N));

    return 0;
}
