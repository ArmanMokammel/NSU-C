#include <stdio.h>

int sumSeries(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (n * n) + sumSeries(n-1);
    }
}

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Sum of the series = %d", sumSeries(N));

    return 0;
}
