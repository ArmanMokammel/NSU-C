#include <stdio.h>

int main()
{
    int i, m, n, sum = 0;

    printf("Enter lower limit (m): ");
    scanf("%d", &m);
    printf("Enter upper limit (n): ");
    scanf("%d", &n);
    
    /* The loop will start from m and run till n */
    for(i = m; i <= n; i++)
    {
        // Make sure to declare these variables inside the loop as they will need to be reset after each loop
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
            // If yes then add it to sum
            sum += i;
        }
    }
  
    printf("The sum of all palindrome numbers between %d and %d is: %d", m, n, sum);

    return 0;
}
