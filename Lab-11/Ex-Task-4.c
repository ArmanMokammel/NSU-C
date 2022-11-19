#include <stdio.h>

int main()
{
    int n, i, j = 2, sum, ans = 0;
    int org;

    printf("Enter n: ");
    scanf("%d", &n);
    
    org = n; // store the value of n to another variable for later use
    
    /* 
       We need to find n number of perfect numbers..
       So n is our count.. we decrement it each time we get a perfect number
    */
    while(n != 0)
    {
        // always set sum to 0 before loop
        sum = 0;
      
        /* 
           Here j is our divident and i is the divisor
           i will loop till half of j
        */
        for(i = 1; i <= j/2; i++)
        {
            // check if j is divisible by i
            if(j % i == 0)
            {
                // if yes then add it to sum
                sum += i;
            }
        }
        
        // if sum is equal to j then it is a perfect number and so we print it
        if(sum == j)
        {
            ans += j; // Add the value of j i.e out divident to "ans" which is our sum variable for output
            n--; // As we have found out one perfect number we decrease our count
        }
        j++; // At the end of each loop we increment the value of j i.e our divident to the next number
    }
  
    printf("The sum of the first %d perfect numbers is: %d", org, ans);
  
    return 0;
}
