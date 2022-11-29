#include <stdio.h>

float inverseProduct(float n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (1/n) * inverseProduct(n-1);
    }
}

int main()
{
    float N;

    printf("Enter n: ");
    scanf("%f", &N);

    printf("Inverse product = %f", inverseProduct(N));

    return 0;
}
