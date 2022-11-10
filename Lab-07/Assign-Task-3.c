#include <stdio.h>

int main()
{
    int n, i, r, org, x = 0, flag = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    org = n;
  
    while(n != 0)
    {
        r = n%10;
        n = n/10;
        x = x * 10 + r;
    }

    // 0 and 1 are not prime numbers
    // change flag to 0 for non-prime number
    if (x == 0 || x == 1)
    {
        flag = 0;
    }

    for (i = 2; i <= x / 2; i++)
    {
        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (x % i == 0)
        {
            flag = 0;
            break;
        }
    }
  
    printf("The reverse of %d is %d\n", org, x);
    // flag is 1 for prime numbers
    if (flag == 1)
    {
        printf("%d is a prime number.", x);   
    }
    else
    {
        printf("%d is not a prime number.", x);
    }

    return 0;
}
