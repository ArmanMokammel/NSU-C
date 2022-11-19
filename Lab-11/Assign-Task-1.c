#include <stdio.h>

int main()
{
    int i, m, n;

    printf("Enter lower limit (m): ");
    scanf("%d", &m);
    printf("Enter upper limit (n): ");
    scanf("%d", &n);

    printf("The palindrome numbers between %d and %d are:\n", m, n);
    
    /* The loop will start from m and run till n */
    for(i = m; i <= n; i++)
    {
        int x, r, rev = 0;

        x = i; // Store the value of i to another "x" variable and perform calculations on that new "x" variable
        
        /* This loop reverses the number and stores it in "rev" variable */
        while (x != 0)
        {
            r = x % 10;
            rev = rev * 10 + r;
            x /= 10;
        }
        
        // check if the value of i which is our current value is equal to its reverse value
        if (i == rev)
        {
            // If yes then print it
            printf("%d, ", i);
        }
    }

    return 0;
}
