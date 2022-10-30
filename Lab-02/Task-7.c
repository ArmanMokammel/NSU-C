#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n * (n+1) * ((2*n)+1)) / 6;

    printf("\nThe sum of the series n is: %d\n", sum);

    return 0;
}
