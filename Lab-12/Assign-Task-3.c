#include <stdio.h>

int sumSeries(int r, int n)
{
    int sum = 1;

    for(int i = 1; i <= n; i++)
    {
        int val = r;

        for(int j = 1; j < i; j++)
        {
            val *= r;
        }

        sum += val;
    }

    return sum;
}

int main()
{
    int r, n;

    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d", sumSeries(r, n));

    return 0;
}
