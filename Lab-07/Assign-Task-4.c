#include <stdio.h>

int main()
{
    int n, i, r, sum = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        r = n%10;
        sum += r;
        n = n/10;
    }

    if (sum == 0 || sum == 1)
    {
        flag = 0;
    }

    for (i = 2; i <= sum / 2; i++)
    {
        if (sum % i == 0)
        {
            flag = 0;
            break;
        }
    }

    printf("Sum of the digits = %d\n", sum);

    if (flag == 1)
    {
        printf("%d is a prime number.", sum);
    }
    else
    {
        printf("%d is not a prime number.", sum);
    }

    return 0;
}
