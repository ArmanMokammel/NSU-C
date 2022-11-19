#include <stdio.h>

int main()
{
    int n, i, j = 2, sum;

    printf("Enter n: ");
    scanf("%d", &n);
    
    /* 
       We need to find the nth perfect number..
       So n is our count.. we decrement it each time we get a perfect number
       The loops runs till we get the last i.e. nth perfect number
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
            n--; // As we have found out one perfect number we decrease our count
        }
        j++; // At the end of each loop we increment the value of j i.e our divident to the next number
    }
  
    /* 
       Note we use --j because we increment the value of j by 1 after each loop
       So at the end of the last loop out value let's say 28 becomes 29
       If we decrement value of j we will get the actual value i.e. 28
    */
    printf("The nth perfect number is: %d", --j);

    return 0;
}
