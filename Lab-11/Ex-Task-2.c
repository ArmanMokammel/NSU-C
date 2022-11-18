#include <stdio.h>

int main()
{
    int i, j, m, n, isPrime; // isPrime is used as flag variable
    int sum = 0;

    printf("Enter lower limit (m): ");
    scanf("%d", &m);

    printf("Enter upper limit (n): ");
    scanf("%d", &n);

    /* Find all Prime numbers between m to n */
    for(i = m; i <= n; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1;
        
        // Make sure that lowerlimit does not go below 2
        // Since 2 is first prime number
        if(start < 2) 
            start = 2;

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

        /* If the number is prime then add to sum */
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("The sum of all the prime number between %d and %d is: %d", m, n, sum);

    return 0;
}
