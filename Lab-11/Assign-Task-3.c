#include <stdio.h>

int main()
{
    // Where num is our number variable which will keep on incrementing until we finish our program
    int n, num = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The first %d palindrome numbers are:\n", n);
    
    /* 
       We need to find n number of perfect numbers..
       So n is our count.. we decrement it each time we get a palindrome number
    */
    while(n != 0)
    {
        // Make sure to declare these variables inside the loop as they will need to be reset after each loop
        int r, x, rev = 0;

        x = num; // Store the value of num to another "x" variable and perform calculations on that new "x" variable
        
        /* This loop reverses the number and stores it in "rev" variable */
        while (x != 0)
        {
            r = x % 10;
            rev = rev * 10 + r;
            x /= 10;
        }
        
        // check if the value of i which is our current value is equal to its reverse value
        if (num == rev)
        {
            // If yes then print it
            printf("%d, ", num);
            n--; // As we have found out one palindrome number we decrease our count
        }
        num++; // At the end of each loop we increment the value of num to the next number
    }

    return 0;
}
