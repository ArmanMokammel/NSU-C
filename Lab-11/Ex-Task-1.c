#include <stdio.h>

int main()
{
    int i, j, n, isPrime; // isPrime is used as flag variable

    printf("Enter n: ");
    scanf("%d", &n);

    printf("All prime numbers between 1 and %d (in reverse order):\n", n);

    /* Find all Prime numbers between n to 1 */
    for(i = n; i >= 2; i--)
    {
        /* Assume that the current number is Prime */
        isPrime = 1;

        /* Check if the current number i is prime or not */
        for(j = 2; j <= i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
