#include <stdio.h>

int seriesSum(int num)
{
    int sum = 0;

    for(int i = 1; i <= num; i++)
    {
        sum += i * i;
    }

    return sum;
}

int main()
{
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Sum = %d", seriesSum(N));

    return 0;
}
